#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//Hermosisima, Reggie Y.
//CS1D
class StringSorting{
public:
    string user;

    string getString(){
        return user;
    }

    void setString(string sortedString){
        this->user = sortedString;
    }

    string Final_String(){
        for (int i = 0; i < user.length() - 1; i++) {
        char min = user[i];
        int minIndex = i;

        for (int j = i + 1; j < user.length(); j++) {
            if (min > user[j]) {
                min = user[j];
                minIndex = j;
            }
        }
        if (minIndex != i) {
            user[minIndex] = user[i];
            user[i] = min;
        }
    }

    return user;
}

};

int main(){
    StringSorting s1;

    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    cout<<endl;
    s1.setString(s);
    cout<<"Sorted string: "<<s1.Final_String();

    return 0;
}
