#include <Book.h>
Book::Book(int sn, bool _aviable): serialNumber(sn),aviable(_aviable)
{};

bool Book::GetIsAviable()
{
    return aviable;
};

int Book::GetSN()
{
    return serialNumber;
};