#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <iostream>
#include "Bug.h" // avem nevoie să folosim Bug în Solution

class Solution {
private:
    int idBug;
    int idProgrammer;
    std::string descriere;
    bool aplicata;

public:
    Solution(int _idBug = -1, int _idProgrammer = -1, const std::string& _descriere = "");

    Solution(const Solution& other);

    ~Solution();

    Solution& operator=(const Solution& other);


    int getIdBug() const;
    int getIdProgrammer() const;
    bool esteAplicata() const;

    void aplica(Bug& b);


    friend std::ostream& operator<<(std::ostream& out, const Solution& s);
};

#endif
