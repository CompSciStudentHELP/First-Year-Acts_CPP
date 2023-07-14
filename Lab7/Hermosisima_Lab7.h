#ifndef HERMOSISIMA_LAB7_H_INCLUDED
#define HERMOSISIMA_LAB7_H_INCLUDED
#include <iostream>
#include <vector>
#include <set>

template <typename t>
class Remove_Dupes {
private:
    t number;

public:
    Remove_Dupes() {
        number = 0;
    }

    void removeDuplicate(std::vector<t>& v) {
        std::set<t> uniqueNumbers(v.begin(), v.end());
        v.assign(uniqueNumbers.begin(), uniqueNumbers.end());
    }
};

#endif // HERMOSISIMA_LAB7_H_INCLUDED
