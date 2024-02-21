#include <map>
#include <string>
#include <Staff.h>
#include <iostream>
#include <fstream>
#include <json/json.h>
class StaffManager
{
    private:
    std::map<int,Staff> mStaff;
    public:
    StaffManager(std::string _path);
    Staff getEmployee(int id);
    Staff getEmployee(std::string _name);
};