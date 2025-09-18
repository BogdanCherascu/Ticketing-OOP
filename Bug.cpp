#include "Bug.h"

//constructor
Bug::Bug(int _id, const std::string& _titlu, const std::string& _descriere, const std::string& _severitate)
    : id(_id), titlu(_titlu), descriere(_descriere), severitate(_severitate), rezolvat(false), idProgramatorAtribuit(-1) {}

//const copiere
Bug::Bug(const Bug& other)
    : id(other.id), titlu(other.titlu), descriere(other.descriere),
      severitate(other.severitate), rezolvat(other.rezolvat), idProgramatorAtribuit(other.idProgramatorAtribuit) {}

//destructor
Bug::~Bug() {}

//operator =
Bug& Bug::operator=(const Bug& other) {
    if (this != &other) {
        id = other.id;
        titlu = other.titlu;
        descriere = other.descriere;
        severitate = other.severitate;
        rezolvat = other.rezolvat;
        idProgramatorAtribuit = other.idProgramatorAtribuit;
    }
    return *this;
}

//gettere
int Bug::getId() const {
    return id;
}

std::string Bug::getTitlu() const {
    return titlu;
}

bool Bug::esteRezolvat() const {
    return rezolvat;
}
std::string Bug::getSeveritate() const {
    return severitate;
}

//settere
void Bug::seteazaProgramator(int idProg) {
    idProgramatorAtribuit = idProg;
}

void Bug::marcheazaCaRezolvat() {
    rezolvat = true;
}
//supraincarcare
std::ostream& operator<<(std::ostream& out, const Bug& b) {
    out << "ID: " << b.id << "\nTitlu: " << b.titlu
        << "\nDescriere: " << b.descriere
        << "\nSeveritate: " << b.severitate
        << "\nRezolvat: " << (b.rezolvat ? "Nu" : "Da")
        << "\nProgramator atribuit: "
        << (b.idProgramatorAtribuit == -1 ? "niciunul" : std::to_string(b.idProgramatorAtribuit))
        << "\n";
    return out;
}
