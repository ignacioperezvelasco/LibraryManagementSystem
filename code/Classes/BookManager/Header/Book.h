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
    explicit Book(int _sn, bool _aviable, std::string _author, std::string _title,int _idClient);
    bool GetIsAviable();
    int GetSN();
    int GetIdClient();
    std::string GetAuthor();
    std::string GetTitle();
 };