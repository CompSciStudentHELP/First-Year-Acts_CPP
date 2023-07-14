#ifndef BIOINFO_H_INCLUDED
#define BIOINFO_H_INCLUDED

#include <vector>
#include <string>

template <typename T>
class BioInfo {
public:
    std::vector<T> a;

    BioInfo() {
        a = std::vector<T>{"GTACCTGTTATA"};
    }

    void setGenome(char x) {
        a[0] = x;
    }
};

bool isGene(const std::string& sequence) {
    return sequence.substr(0, 3) == "ATG" && (sequence.substr(sequence.length() - 3) == "TAA" || sequence.substr(sequence.length() - 3) == "TAG" || sequence.substr(sequence.length() - 3) == "TGA");
}

#endif // BIOINFO_H_INCLUDED
