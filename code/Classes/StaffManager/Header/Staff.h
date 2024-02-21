#include <string>

enum StaffCategory
{
    LIBRARIAN,CLENING,AUXILIAR,DIRECTOR
};
class Staff
{private:
    StaffCategory category;
    int id;
    std::string name;
    int numTurn;

    public:
    Staff(int _staffCategory, int _id, std::string _name, int _turn);
    StaffCategory GetCategory();
    int GetId();
    std::string GetName();
    int GetTurn();
};