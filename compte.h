#include <string>
#include "client.h"

class Compte
{
private:
    std::string _iban;
    int _solde;
    Client _client;
public:
    Compte(std::string iban, Client client, int solde);
    int getSolde();
    std::string getIban();
    void retrait();
    void paiement();
    void credit();
    void transfert(int montant, std::string iban);
};
