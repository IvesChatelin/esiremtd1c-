#include <string>

class Client
{
private:
    std::string _nom;
    std::string _prenom;
public:
    Client(std::string nom, std::string prenom);
    std::string getNom() const;
};
