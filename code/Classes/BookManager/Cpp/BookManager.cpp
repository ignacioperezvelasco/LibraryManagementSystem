#include "../Header/BookManager.h"

BookManager::BookManager(std::string _path)
{
    //lectura de .json con todos los libros que existen
      std::ifstream file(_path);

    if (!file.is_open()) {
        std::cerr << "Error opening file :(" << std::endl;
    }
    else
    {
        Json::Value root;
    Json::Reader reader;

    if (!reader.parse(file, root)) {
        std::cerr << "Error parsing JSON" << std::endl;
        file.close();
    }
    else
    {
        file.close();

    // Assuming the JSON is an array of objects
    if (root.isArray()) {
        for (const auto& bookJson : root) {
            //Rellenamos los valores de los libros
            mBooks.insert(std::make_pair(bookJson["serialnumber"].asInt(),
            Book(bookJson["serialnumber"].asInt(),
            bookJson["available"].asBool(),
            bookJson["author"].asString(),
            bookJson["title"].asString(),
            bookJson["idCliente"].asInt()
            )));
        }
    } 
    else 
    {
        std::cerr << "Invalid JSON format (expecting an array)" << std::endl;
    }
    }
    
    }
    
};

Book BookManager::GetBook(int _sn)
{
    return mBooks[_sn];
};