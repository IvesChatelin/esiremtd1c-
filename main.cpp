#include <iostream>
#include "header/adresse.h"
#include "header/client.h"
#include "header/date.h"
#include "header/compte.h" // remaque juste compte.h et pas client.h

int main(){
    Adresse adr(49,"Rue des ebazoires",21000,"Dijon","France");
    Client cl("NZOKOU","ives",adr);
    Compte cp("FRA 01 258964752 47", cl, 1900);
    std::cout << "-------------------- Compte ----------------------" << std::endl;
    std::cout << "IBAN : " << cp.getIban() <<std::endl;
    std::cout <<"Nom du client : " << cl.getNom() << std::endl;
    std::cout <<"Votre solde est de : "<< cp.getSolde() << std::endl;
    cp.retrait(900);
    std::cout << "Vous venez d'effecteur un retrait de 900. "
     << "votre nouveau solde est : " << cp.getSolde() << std::endl;
    return 0;
}