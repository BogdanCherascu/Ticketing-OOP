#include "Solution.h"

//constructor
Solution::Solution(int _idBug, int _idProgrammer, const std::string& _descriere)
    : idBug(_idBug), idProgrammer(_idProgrammer), descriere(_descriere), aplicata(false) {}

//const copiere
Solution::Solution(const Solution& other)
    : idBug(other.idBug), idProgrammer(other.idProgrammer),
      descriere(other.descriere), aplicata(other.aplicata) {}

//destructor
Solution::~Solution() {}

//operator =
Solution& Solution::operator=(const Solution& other) {
    if (this != &other) {
        idBug = other.idBug;
        idProgrammer = other.idProgrammer;
        descriere = other.descriere;
        aplicata = other.aplicata;
    }
    return *this;
}

//gettere
int Solution::getIdBug() const {
    return idBug;
}

int Solution::getIdProgrammer() const {
    return idProgrammer;
}

bool Solution::esteAplicata() const {
    return aplicata;
}


void Solution::aplica(Bug& b) {
    if (!aplicata) {
        b.marcheazaCaRezolvat();
        aplicata = true;
    }
}

// Operator <<
std::ostream& operator<<(std::ostream& out, const Solution& s) {
    out << "Solutie pentru Bug ID: " << s.idBug
        << "\nPropusa de Programator ID: " << s.idProgrammer
        << "\nDescriere: " << s.descriere
        << "\nAplicata: " << (s.aplicata ? "Da" : "Nu") << "\n";
    return out;
}
