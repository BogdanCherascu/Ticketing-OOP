#include "Citire.h"
#include <fstream>
#include <sstream>

std::vector<Bug> citesteBuguriDinFisier(const std::string& numeFisier) {
    std::vector<Bug> buguri;
    std::ifstream f(numeFisier);
    std::string linie;

    while (std::getline(f, linie)) {
        std::stringstream ss(linie);
        std::string parte;
        int id;
        std::string titlu, descriere, severitate;

        std::getline(ss, parte, '|');
        id = std::stoi(parte);
        std::getline(ss, titlu, '|');
        std::getline(ss, descriere, '|');
        std::getline(ss, severitate, '|');

        buguri.push_back(Bug(id, titlu, descriere, severitate));
    }

    return buguri;
}

std::vector<Programmer> citesteProgramatoriDinFisier(const std::string& numeFisier) {
    std::vector<Programmer> programatori;
    std::ifstream f(numeFisier);
    std::string linie;

    while (std::getline(f, linie)) {
        std::stringstream ss(linie);
        std::string parte;
        int id;
        std::string nume;

        std::getline(ss, parte, '|');
        id = std::stoi(parte);
        std::getline(ss, nume, '|');

        programatori.push_back(Programmer(id, nume));
    }

    return programatori;
}

std::vector<Solution> citesteSolutiiDinFisier(const std::string& numeFisier) {
    std::vector<Solution> solutii;
    std::ifstream f(numeFisier);
    std::string linie;

    while (std::getline(f, linie)) {
        std::stringstream ss(linie);
        std::string parte;
        int idBug, idProgrammer;
        std::string descriere;

        std::getline(ss, parte, '|');
        idBug = std::stoi(parte);
        std::getline(ss, parte, '|');
        idProgrammer = std::stoi(parte);
        std::getline(ss, descriere, '|');

        solutii.push_back(Solution(idBug, idProgrammer, descriere));
    }

    return solutii;
}
