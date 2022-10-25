#include "client.h"

Client::Client(std::string nom, std::string prenom){
    _nom = nom;
    _prenom = prenom;
} 

std::string Client::getNom() const{
    return _nom;
}