#ifndef _CLIENT_H
#define _CLIENT_H

#include <string>
#include "adresse.h"
#include "date.h"

class Client
{
private:
    std::string _nom;
    std::string _prenom;
    Adresse _adresse;

public:
    Client(std::string nom, std::string prenom, Adresse adresse);
    std::string getNom() const;
    std::string getPrenom() const;
};

#endif