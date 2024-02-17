 class Book
 {
    private:
    int serialNumber;
    bool aviable;
    public:
    explicit Book(int sn, bool _aviable);
    bool GetIsAviable();
    int GetSN();
 };