#include "Client.h"
#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <json/json.h> 
#include <nlohmann/json.hpp>

class ClientManager
{
    private:
    std::map<int,Client> mClients;
    public:
    ClientManager();
    ClientManager(std::string _path);
    Client* GetClient(int _id);
};