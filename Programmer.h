#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include <string>
#include <vector>
#include <iostream>

class Programmer {
private:
    int id;
    std::string nume;
    std::vector<int> bugsAtribuite;

public:

    Programmer(int _id = 0, const std::string& _nume = "");

    Programmer(const Programmer& other);

    ~Programmer();

    Programmer& operator=(const Programmer& other);

    int getId() const;
    std::string getNume() const;

    void atribuieBug(int idBug);
    void afiseazaBugsAtribuite() const;
    int getNumarBugs() const;

    friend std::ostream& operator<<(std::ostream& out, const Programmer& p);
};

#endif
