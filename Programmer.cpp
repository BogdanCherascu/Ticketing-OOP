#include "Programmer.h"

//constructor
Programmer::Programmer(int _id, const std::string& _nume)
    : id(_id), nume(_nume) {}

//const copiere
Programmer::Programmer(const Programmer& other)
    : id(other.id), nume(other.nume), bugsAtribuite(other.bugsAtribuite) {}

//destructor
Programmer::~Programmer() {}


//operator =
Programmer& Programmer::operator=(const Programmer& other) {
    if (this != &other) {
        id = other.id;
        nume = other.nume;
        bugsAtribuite = other.bugsAtribuite;
    }
    return *this;
}

//gettere
int Programmer::getId() const {
    return id;
}

std::string Programmer::getNume() const {
    return nume;
}

//atribuire bug
void Programmer::atribuieBug(int idBug) {
    bugsAtribuite.push_back(idBug);
}

//afisare buguri pt fiecare programator
void Programmer::afiseazaBugsAtribuite() const {
    std::cout << nume << " are atribuite bugurile:\n";
    for (size_t i = 0; i < bugsAtribuite.size(); ++i) {
        std::cout << "- Bug ID: " << bugsAtribuite[i] << "\n";
    }
    std::cout << "\n";
}

//nr buguri
int Programmer::getNumarBugs() const {
    return bugsAtribuite.size();
}

// Operator <<
std::ostream& operator<<(std::ostream& out, const Programmer& p) {
    out << "ID: " << p.id << "\nNume: " << p.nume
        << "\nnr buguri atribuite: " << p.bugsAtribuite.size() << "\n";
    return out;
}
