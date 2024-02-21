#include <StaffManager.h>

StaffManager::StaffManager(std::string _path)
{
        //lectura de .json con todos los libros que existen
      std::ifstream file("books.json");

    if (!file.is_open()) {
        std::cerr << "Error opening file" << std::endl;
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
        for (const auto& staffJson : root) {
            //Rellenamos los valores de los libros
            mStaff.insert(std::make_pair(staffJson["serialnumber"].asInt(),
            Staff(staffJson["category"].asInt(),
            staffJson["id"].asInt(),
            staffJson["name"].asString(),
            staffJson["turn"].asInt())));
        }
    } 
    else 
    {
        std::cerr << "Invalid JSON format (expecting an array)" << std::endl;
    }
    }
    
    }
    
};

Staff StaffManager::getEmployee(int id)
{    
    return mStaff[id];
}
Staff StaffManager::getEmployee(std::string _name)
{}