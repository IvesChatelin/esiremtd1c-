#include "../header/client.h"

Client::Client(std::string nom, std::string prenom, Adresse adresse) : _nom(nom), _prenom(prenom), _adresse(adresse){
    
} 

std::string Client::getNom() const{
    return _nom;
}