#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <string>

#include "tools.hpp"

#include "query_parserLexer.h"
#include "query_parserParser.h"

using namespace Pistache;
using namespace std;

class QueryHandler : public Http::Handler
{
public:
    HTTP_PROTOTYPE(QueryHandler)

    void onRequest(const Http::Request &request, Http::ResponseWriter response) override
    {
        if (request.method() == Http::Method::Get && (request.resource() == "/" || request.resource() == ""))
        {
            // const auto &query = request.query();
            auto query = request.query().get("query");

            if (query.has_value())
            {
                cout << query.value() << endl;
                auto queryParam = decodeURIComponent(query.value());

                antlr4::ANTLRInputStream input(*queryParam);
                query_parserLexer lexer(&input);
                antlr4::CommonTokenStream tokens(&lexer);
                query_parserParser parser(&tokens);
                query_parserParser::ExpressionContext *tree = parser.expression();

                stringstream ss;
                ss << "query: " << *queryParam << ", ret: " << tree->toStringTree(&parser) << endl;
                response.send(Http::Code::Ok, ss.str());
            }
            response.send(Http::Code::Ok, "Hello, Pistache!");
        }
        else
        {
            response.send(Http::Code::Not_Found, "Not Found");
        }
    }
};

class OperateHandler : public Http::Handler
{
public:
    HTTP_PROTOTYPE(OperateHandler)

    void onRequest(const Http::Request &request, Http::ResponseWriter response) override
    {
        if (request.method() == Http::Method::Get)
        {
            response.send(Http::Code::Ok, "Hello, Pistache!");
        }
        else
        {
            response.send(Http::Code::Method_Not_Allowed, "Unsupported HTTP method");
        }
    }
};
