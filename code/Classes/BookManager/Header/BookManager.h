#include "Book.h"
#include <iostream>
#include <fstream>
#include <json/json.h> 
#include <map>
class BookManager
{
    public:
    BookManager(std::string _path);
    Book GetBook(int _sn);    
    void SaveToJson(std::string _path);
    private:
    std::map<int,Book> mBooks;    
};