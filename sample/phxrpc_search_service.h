/* phxrpc_search_service.h

 Generated by phxrpc_pb2service from search.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include "search.pb.h"


class SearchService {
  public:
    SearchService();
    virtual ~SearchService();

    virtual int PHXEcho(const google::protobuf::StringValue &req, google::protobuf::StringValue *resp);
    virtual int Search(const search::SearchRequest &req, search::SearchResult *resp);
    virtual int Notify(const google::protobuf::StringValue &req, google::protobuf::Empty *resp);
};

