#include <iostream>
#include "BioInfo.h"

int main() {
    BioInfo<char> bioI;
    char x;

    std::cout << "Enter a character for the genome: ";
    std::cin >> x;

    bioI.setGenome(x);

    std::string sequence = bioI.a[0];  // Access the first element of the vector

    if (BioInfo<char>::isGene(sequence)) {  // Qualify the isGene function with the class name
        std::cout << sequence << " is a gene." << std::endl;
    } else {
        std::cout << sequence << " is not a gene." << std::endl;
    }

    return 0;
}
