#include "../header/compte.h"
#include "assert.h"

Compte::Compte(std::string iban, Client cl, int solde) : _iban(iban), _client(cl), _solde(solde){

}

int Compte::getSolde(){
    return _solde;
}

std::string Compte::getIban(){
    return _iban;
}

void Compte::retrait(int montant){
    int &newsolde = _solde;
    if(montant <= _solde){
        int retrait = _solde - montant;
        newsolde = retrait;  
    } 
}

void Compte::transfert(int montant, std::string iban_destinateur){
    int &refsolde = _solde;
    if(montant <= _solde){
       
    }
}


