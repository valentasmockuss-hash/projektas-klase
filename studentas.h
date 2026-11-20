#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <string>
#include <vector>
#include <utility>

class Studentas {
private:
    std::string vardas_;
    std::string pavarde_;
    std::vector<int> nd_;
    int egzaminas_ = 0;

public:
    Studentas() = default;

    Studentas(std::string vardas,
              std::string pavarde,
              std::vector<int> nd,
              int egzaminas)
        : vardas_(std::move(vardas)),
          pavarde_(std::move(pavarde)),
          nd_(std::move(nd)),
          egzaminas_(egzaminas) {}

    Studentas(const Studentas&) = default;
    Studentas& operator=(const Studentas&) = default;

    Studentas(Studentas&&) noexcept = default;
    Studentas& operator=(Studentas&&) noexcept = default;

    ~Studentas() = default;
    
    const std::string& getVardas() const {
        return vardas_;
    }
    const std::string& getPavarde() const {
        return pavarde_;
    }
    const std::vector<int>& getNd() const {
        return nd_;
    }
    int getEgzaminas() const {
        return egzaminas_;
    }
};
#endif