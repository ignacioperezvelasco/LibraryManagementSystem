 #include <string>
 class Book
 {
    private:
    int serialNumber;
    bool aviable;
    int idClient=-1;
    std::string author;
    std::string title;

    public:
    Book(){};
    Book(int _sn, bool _aviable, std::string _author, std::string _title,int _idClient);
    bool GetIsAviable() const;
    int GetSN () const;
    int GetIdClient()const;
    std::string GetAuthor() const;
    std::string GetTitle() const;
 };