#include <Book.h>
#include <iostream>
#include <fstream>
#include <json/json.h> 
#include <vector>
class BookManager
{
    public:
    BookManager(std::string _path);
    private:
    std::vector<Book> books;
    
};