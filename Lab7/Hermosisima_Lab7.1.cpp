#include <iostream>
#include <string>
#include <array>

using namespace std;

class Occurence_Counter {
public:
    int count;
    string user;

    Occurence_Counter() {
        count = 0;
        user = "1234aBcD";
    }

    void setString(const string& s) {
        user = s;
    }

    void countOccurrences(array<int, 10>& counts) {
        counts.fill(0);

        for (char c : user) {
            if (isdigit(c)) {
                int digit = c - '0';
                counts[digit]++;
            }
        }
    }
};

int main() {
    Occurence_Counter counter;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (!input.empty()) {
        counter.setString(input);
    }

    array<int, 10> occurrences;
    counter.countOccurrences(occurrences);

    cout << "Occurrences of each digit:" << endl;
    for (int i = 0; i < occurrences.size(); i++) {
        cout << "counts[" << i << "] = " << occurrences[i] << endl;
    }

    return 0;
}
