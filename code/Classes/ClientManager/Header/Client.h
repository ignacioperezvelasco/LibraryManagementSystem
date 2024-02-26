#include <string>
#include <memory>
class Operations;
class Client
{
    private:
    int id;
    std::string name;
    uint8_t inCourseOpertion = 0;
    int myOperations[5];
    public:
    Client();
    Client(int id, std::string _name);
    Client(int id, std::string _name, int myOperations[5]);
    int GetId();
    int* GetInCuourseOperations();
    std::string GetName();
    bool CanAddOperation();
};