#include <string>

class Adresse
{
private:
    int _numRue;
    std::string _nomRue;
    int _codePostal;
    std::string _ville;
    std::string _pays;
public:
    Adresse(int numRue, std::string nomRue, int codePostal, std::string ville, std::string pays);
};
