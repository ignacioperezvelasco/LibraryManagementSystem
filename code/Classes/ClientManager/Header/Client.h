#include <string>
#include <memory>
class Operations;
class Client
{
    private:
    int id;
    std::string name;
    int inCourseOpertion = 0;
    int myOperations[5];
    public:
    Client(int id, std::string _name);
};