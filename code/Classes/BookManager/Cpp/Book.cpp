#include <Book.h>
Book::Book(int _sn, bool _aviable, std::string _author, std::string _title,int _idClient): 
serialNumber(_sn),aviable(_aviable), author(_author),title(_title),idClient(_idClient)
{};

bool Book::GetIsAviable()
{
    return aviable;
};

int Book::GetSN()
{
    return serialNumber;
};

int Book::GetIdClient()
{
    return idClient;
}

std::string Book::GetAuthor()
{
    return author;
}

std::string Book::GetTitle()
{
    return title;
}