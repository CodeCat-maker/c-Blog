#include "UTILS/httplib.h"
#include "UTILS/json.hpp"
#include "UTILS/METHODS.h"
#include "UTILS/MYTIME.h"
#include <iostream>
namespace status
{
  enum Error
  {
    Success = 0,
    Unknown = 404,
    Connection,
    BindIPAddress,
    Read,
    Write,
    ExceedRedirectCount,
    Canceled,
    SSLConnection,
    SSLLoadingCerts,
    SSLServerVerification,
    UnsupportedMultipartBoundaryChars
  };
}

int main()
{
  using nlohmann::json;
  httplib::Server svr;

  //add
  svr.Get("/add", [](const auto &req, auto &res)
          {
            json j;
            Time mytime;
            j["code"] = status::Success;
            j["time"] = mytime.apitime();
            j["message"] = "success";
            j["bbid"] = mytime.back_id();
            res.set_content(j.dump(), "application/json");
          });
  //delete
  svr.Get("/delete", [](const auto &req, auto &res)
          {
            {
              json j;
              Time mytime;
              j["code"] = status::Success;
              j["time"] = mytime.apitime();
              j["message"] = "success";
              res.set_content(j.dump(), "application/json");
            }
          });
  //find
  svr.Get("/find", [](const auto &req, auto &res)
          {
            {
              json j;
              Time mytime;
              j["code"] = status::Success;
              j["time"] = mytime.apitime();
              j["message"] = "success";
              json data;
              Blog a("test", "this is a test", "content test");
              Blog b("test", "this is a test", "content test");
              vector<Blog> list = {a, b};
              for (auto i : list)
              {
                data.push_back(i.back_json());
              }
              j["data"] = data;
              res.set_content(j.dump(), "application/json");
            }
          });
  svr.Get("/get", [](const auto &req, auto &res)
          {
            {
              json j;
              Time mytime;
              j["code"] = status::Success;
              j["time"] = mytime.apitime();
              j["message"] = "success";
              json data;
              vector<Blog> list = methods::getAll(1);
              for (auto i : list)
              {
                data.push_back(i.back_json());
              }
              j["data"] = data;
              res.set_content(j.dump(), "application/json");
            }
          });
  std::cout
      << "Server starting at 8080 port" << std::endl;

  svr.listen("0.0.0.0", 8080);
}
