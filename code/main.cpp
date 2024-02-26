#include "Classes/BookManager/Header/BookManager.h"
#include "Classes/ClientManager/Header/ClientManager.h"
/*#include <OperationManager.h>*/
#include "Classes/StaffManager/Header/StaffManager.h"
#include <stdio.h>

int main ()
{
    BookManager mBookManager("/home/ignacio/Proyectos/LibraryManagementSystem/Resources/Books.json");
    StaffManager mStaffManager("/home/ignacio/Proyectos/LibraryManagementSystem/Resources/Staff.json");
    ClientManager mClientManager("/home/ignacio/Proyectos/LibraryManagementSystem/Resources/Clients.json");
    int a=0;
    return 0;
}