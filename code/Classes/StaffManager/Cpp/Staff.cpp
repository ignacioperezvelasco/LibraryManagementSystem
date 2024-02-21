#include <Staff.h>
Staff::Staff(int _staffCategory, int _id, std::string _name, int _turn): category(static_cast<StaffCategory>(_staffCategory)),id(_id),name(_name),numTurn(_turn)
{}
StaffCategory Staff::GetCategory()
{
    return category;
}
int Staff::GetId()
{
    return id;
}
std::string Staff::GetName()
{
    return name;
}
int Staff::GetTurn()
{
    return numTurn;
}