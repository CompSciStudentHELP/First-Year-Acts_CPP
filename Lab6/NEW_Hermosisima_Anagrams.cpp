#include <iostream>
#include <string>

using namespace std;

class Anagrams {
public:
    string u1, u2;

    Anagrams() {
        u1 = "hi";
        u2 = "hello";
    }

    string getX() {
        return u1;
    }

    string getY() {
        return u2;
    }

    bool isAnagram(const string& input1, const string& input2) {

        if (input1.length() != input2.length()) {
            return false;
        }

        for (int i = 0; i < input1.length(); i++) {
            bool foundMatch = false;
            for (int j = 0; j < input2.length(); j++) {
                if (input1[i] == input2[j]) {
                    foundMatch = true;
                    break;
                }
            }
            if (!foundMatch) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    string user1, user2;
    cout << "Enter string1: ";
    getline(cin, user1);
    cout << "Enter string2: ";
    getline(cin, user2);
    bool us1 = !user1.empty();
    bool us2 = !user2.empty();
    Anagrams anagramCheck;
    if(us1 && us2){
        if(anagramCheck.isAnagram(user1, user2)){
            cout<<user1<<" and "<<user2<<" are Anagrams."<<endl;
        }
        else{
            cout<<user1<<" and "<<user2<<" are not Anagrams."<<endl;
        }
    }
    else if(us1 && !us2){
        if(anagramCheck.isAnagram(user1, anagramCheck.getY())){
            cout<<user1<<" and "<<anagramCheck.getY()<<" are Anagrams."<<endl;
        }
        else{
            cout<<user1<<" and "<<anagramCheck.getY()<<" are not Anagrams."<<endl;
        }
    }
    else if(!us1 && us2){
        if(anagramCheck.isAnagram(anagramCheck.getX(), user2)){
            cout<<anagramCheck.getX()<<" and "<<user2<<" are Anagrams."<<endl;
        }
        else{
            cout<<anagramCheck.getX()<<" and "<<user2<<" are not Anagrams."<<endl;
        }
    }
    else{
        if(anagramCheck.isAnagram(anagramCheck.getX(), anagramCheck.getY())){
            cout<<anagramCheck.getX()<<" and "<<anagramCheck.getY()<<" are Anagrams."<<endl;
        }
        else{
            cout<<anagramCheck.getX()<<" and "<<anagramCheck.getY()<<" are not Anagrams."<<endl;
        }
    }

    return 0;
}
