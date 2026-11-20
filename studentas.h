#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <string>
#include <vector>
#include <utility>

struct Studentas {
    std::string vardas;
    std::string pavarde;
    std::vector<int> nd;
    int egzaminas = 0;

        Studentas() = default;

    Studentas(std::string naujasVardas,
              std::string naujaPavarde,
              std::vector<int> naujiNd,
              int naujasEgzaminas):
          vardas(std::move(naujasVardas)),
          pavarde(std::move(naujaPavarde)),
          nd(std::move(naujiNd)),
          egzaminas(naujasEgzaminas) {}

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