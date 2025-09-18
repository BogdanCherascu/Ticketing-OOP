#ifndef BUG_H
#define BUG_H

#include <string>
#include <iostream>

class Bug {
private:
    int id;
    std::string titlu;
    std::string descriere;
    std::string severitate;
    bool rezolvat;
    int idProgramatorAtribuit;

public:

    Bug(int _id = 0, const std::string& _titlu = "", const std::string& _descriere = "", const std::string& _severitate = "low");

    Bug(const Bug& other);

    ~Bug();

    Bug& operator=(const Bug& other);


    std::string getSeveritate() const;
    int getId() const;
    std::string getTitlu() const;
    bool esteRezolvat() const;

    void seteazaProgramator(int idProg);
    void marcheazaCaRezolvat();


    friend std::ostream& operator<<(std::ostream& out, const Bug& b);

};

#endif
