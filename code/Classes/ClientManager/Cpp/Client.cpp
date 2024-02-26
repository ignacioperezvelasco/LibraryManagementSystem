#include "../Header/Client.h"
Client::Client(){}
Client::Client(int _id, std::string _name): id(_id),name(_name)
{
    std::fill(myOperations, myOperations + 5, -1);
}

Client::Client(int _id, std::string _name, int _myOperations[5]): id(_id),name(_name)
{
    std::copy(_myOperations, _myOperations + 5, myOperations);
}

int Client::GetId()
{
    return id;
}
int* Client::GetInCuourseOperations()
{
    return myOperations;
}
std::string Client::GetName()
{
    return name;
}
bool Client::CanAddOperation()
{
    uint8_t aux=0;
    const int size = 5;

    for (int element : myOperations) {
        if(element!=-1)
            aux++;
    }
    return (aux<5);
}