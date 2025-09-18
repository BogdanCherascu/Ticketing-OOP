#ifndef CITIRE_H
#define CITIRE_H

#include <vector>
#include <string>
#include "Bug.h"
#include "Programmer.h"
#include "Solution.h"

std::vector<Bug> citesteBuguriDinFisier(const std::string& numeFisier);
std::vector<Programmer> citesteProgramatoriDinFisier(const std::string& numeFisier);
std::vector<Solution> citesteSolutiiDinFisier(const std::string& numeFisier);

#endif
