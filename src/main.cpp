#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <csignal>

#include <execinfo.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <memory>

#include "api.hpp"
#include "csv.hpp"
#include "engine.hpp"

using namespace std;

void terminateHandler()
{
    cout << "Terminating" << endl;

    try
    {
        std::exception_ptr exception = std::current_exception();
        if (exception)
        {
            try
            {
                std::rethrow_exception(exception);
            }
            catch (const std::exception &ex)
            {
                std::cout << "Unhandled exception: " << ex.what() << std::endl;
            }
            catch (...)
            {
                std::cout << "Unhandled unknown exception" << std::endl;
            }
        }
        else
        {
            std::cout << "Unknown exception occurred" << std::endl;
        }
    }
    catch (...)
    {
        std::cout << "An error occurred while handling the exception" << std::endl;
    }

    cout << flush;

    std::abort();
}

void printStackTrace()
{
    const int maxStackTraceSize = 20;
    void *stackTrace[maxStackTraceSize];
    int traceSize = backtrace(stackTrace, maxStackTraceSize);

    char **messages = backtrace_symbols(stackTrace, traceSize);
    if (messages == nullptr)
    {
        std::cout << "Failed to retrieve stack trace." << std::endl;
        return;
    }

    std::cout << "Stack trace:" << std::endl;
    for (int i = 0; i < traceSize; ++i)
    {
        std::cout << "[" << i << "] " << messages[i] << std::endl;
    }

    free(messages);
}

void signalHandler(int signum)
{
    cout << "Received signal " << signum << std::endl;
    printStackTrace();

    if (signum == SIGINT || signum == SIGSEGV)
    {
        exit(-1);
    }
}

int main()
{
    set_terminate(terminateHandler);
    signal(SIGINT, signalHandler);
    signal(SIGSEGV, signalHandler);

    shared_ptr<Engine> engine = make_shared<Engine>();
    CSVImporter importer("/app/data/data.csv");

    engine->getTable().import(importer);

    Pistache::Address addr1(Ipv4::any(), Port(9527));
    auto opts1 = Pistache::Http::Endpoint::options().threads(1);
    auto server1 = std::make_shared<Pistache::Http::Endpoint>(addr1);
    server1->init(opts1);
    server1->setHandler(Pistache::Http::make_handler<QueryHandler>());
    server1->serveThreaded();

    Pistache::Address addr2(Ipv4::any(), Port(7259));
    auto opts2 = Pistache::Http::Endpoint::options().threads(1);
    auto server2 = std::make_shared<Pistache::Http::Endpoint>(addr2);
    server2->init(opts2);
    server2->setHandler(Http::make_handler<OperateHandler>());
    server2->serveThreaded();

    while (true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
