#include "../Header/ClientManager.h"

ClientManager::ClientManager()
{}
ClientManager::ClientManager(std::string _path)
{
        // Abrir el archivo JSON
    std::ifstream jsonFile("datos.json");

    if (!jsonFile.is_open()) {
        std::cerr << "Error al abrir el archivo JSON de clientes." << std::endl;
        return;
    }

    // Leer el contenido del archivo JSON
    nlohmann::json jsonData;
    jsonFile >> jsonData;

    // Cerrar el archivo
    jsonFile.close();

    // Verificar si el JSON es un array
    if (jsonData.is_array()) {
        // Iterar sobre los objetos en el array
        for (const auto& clientData : jsonData) {
            // Acceder a los campos del objeto
            int id = clientData["id"];
            std::string name = clientData["name"];
            int myOperations[5];
            std::copy(clientData["myOperations"].begin(), clientData["myOperations"].end(), myOperations);

            // Crear un objeto Client utilizando el constructor
            mClients.insert(std::make_pair(id,Client(id, name, myOperations)));            
        }
    } else {
        std::cerr << "El JSON no es un array." << std::endl;
        return;
    }
}
Client* ClientManager::GetClient(int _id)
{
    auto iterador = mClients.find(_id);

    // Verificar si el elemento fue encontrado
    if (iterador != mClients.end()) {
        std::cout << "Cliente encontrado: " << iterador->second.GetId() << std::endl;
        return &iterador->second;
    } else {
        std::cout << "Cliente no encontrado." << std::endl;
        return nullptr;
    }
    
}