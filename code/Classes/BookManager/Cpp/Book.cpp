#include <Book.h>
Book::Book(int _sn, bool _aviable, std::string _author, std::string _title,int _idClient): 
serialNumber(_sn),aviable(_aviable), author(_author),title(_title),idClient(_idClient)
{};

bool Book::GetIsAviable() const
{
    return aviable;
};

int Book::GetSN() const
{
    return serialNumber;
};

int Book::GetIdClient()const
{
    return idClient;
}

std::string Book::GetAuthor()const
{
    return author;
}

std::string Book::GetTitle()const
{
    return title;
}