#include <iostream>
#include "Bug.h"
#include "Programmer.h"
#include "Solution.h"
#include "Citire.h"

int main() {
//citire
    auto buguri = citesteBuguriDinFisier("bugs.txt");
    auto programatori = citesteProgramatoriDinFisier("programmers.txt");
    auto solutii = citesteSolutiiDinFisier("solutions.txt");

//atribuire buguri in fct de severitate
    for (auto& bug : buguri) {
        if (bug.getSeveritate() == "high") {
            bug.seteazaProgramator(programatori[0].getId());
            programatori[0].atribuieBug(bug.getId());
        } else {
            if (programatori.size() > 1) {
                bug.seteazaProgramator(programatori[1].getId());
                programatori[1].atribuieBug(bug.getId());
            } else {
                bug.seteazaProgramator(programatori[0].getId());
                programatori[0].atribuieBug(bug.getId());
            }
        }
    }

//aplicare solutii
    for (auto& sol : solutii) {
        for (auto& bug : buguri) {
            if (bug.getId() == sol.getIdBug()) {
                sol.aplica(bug);
            }
        }
    }

//afisare bug-uri
    std::cout << "\nBugs:" << std::endl;
    for (const auto& b : buguri) {
        std::cout << b << std::endl;
    }

//afisare programatori
    std::cout << "\nProgrammers:" << std::endl;
    for (const auto& p : programatori) {
        std::cout << p << std::endl;
        p.afiseazaBugsAtribuite();
    }

//afisare solutii
    std::cout << "\nSolutions" << std::endl;
    for (const auto& s : solutii) {
        std::cout << s << std::endl;
    }

    return 0;
}