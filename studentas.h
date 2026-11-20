#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <string>
#include <vector>

struct Studentas {
    std::string vardas;
    std::string pavarde;
    std::vector<int> nd;
    int egzaminas = 0;

    const std::string& getVardas() const {
        return vardas;
    }
    const std::string& getPavarde() const {
        return pavarde;
    }
    const std::vector<int>& getNd() const {
        return nd;
    }
    int getEgzaminas() const {
        return egzaminas;
    }
};

#endif