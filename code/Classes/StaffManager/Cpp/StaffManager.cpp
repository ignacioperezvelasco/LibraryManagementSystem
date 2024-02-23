#include "../Header/StaffManager.h"

StaffManager::StaffManager(std::string _path)
{
        //lectura de .json con todos los libros que existen
      std::ifstream file(_path);

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
        int a=0;
        for (const auto& staffJson : root) {
            //Rellenamos los valores de los libros
            mStaff.insert(std::make_pair(staffJson["id"].asInt(),
            Staff(staffJson["category"].asInt(),
            staffJson["id"].asInt(),
            staffJson["name"].asString(),
            staffJson["turn"].asInt())));
            std::cout<< a++ << std::endl;
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
    return mStaff.find(id)->second;
}
Staff StaffManager::getEmployee(std::string _name)
{

    for(auto it:mStaff)
    {
        if(it.second.GetName()==_name)
        {
            return it.second;
        }
    }
    return Staff();
}