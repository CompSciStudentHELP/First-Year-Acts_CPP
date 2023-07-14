#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class MyInteger{
private:
    int value = 0;
public:
    MyInteger(int value) {
        this->value = value;
    }
    const int getVal(){
        return value;
    }

    bool isEven() const {
        return (value % 2) == 0;
    }
    bool  isOdd() const{
        return (value % 2) != 0;
    }
    bool isPrime() const{
        if (value <= 1) {
            return false;
        }
        for (int i = 2; i <= sqrt(value); i++) {
            if (value % i == 0) {
                return false;
            }
        }
        return true;
    }

    static bool isEven(int value){
        return value % 2 == 0;
    }

    static bool isOdd(int value){
        return value % 2 != 0;
    }

    static bool isPrime(int value) {
        if (value <= 1)
            return false;

        for (int i = 2; i <= sqrt(value); i++) {
            if (value % i == 0)
                return false;
        }

        return true;
    }

    static bool isEven(const MyInteger& obj){
        return obj.value % 2 == 0;
    }

    static bool isOdd(const MyInteger& obj){
        return obj.value % 2 != 0;
    }

    static bool isPrime(const MyInteger& obj){
        if (obj.value <= 1)
            return false;

        for (int i = 2; i <= sqrt(obj.value); i++) {
            if (obj.value % i == 0)
                return false;
        }

        return true;
    }

    bool equals(int value) const {
        return this->value == value;
    }

    bool equals(const MyInteger& obj) const {
        return this->value == obj.value;
    }

    static int parseInt(const string& str) {
        return stoi(str);
    }
};

int main(){
    int n1, n2, n3;
    string Strnum;
    cout<<"Enter 3 values: "<<endl;
    cin>>n1>>n2>>n3;
    cout<<"Enter a num in string form: ";
    cin>>Strnum;
    MyInteger num(n1), num1(n2), num2(n3);


    cout<<"Value for object 1: " << num.getVal()<<endl;


    cout<<"Object 1 Even? : "<<num.isEven()<<endl;
    cout<<"Object 1 Odd? : "<<num.isOdd()<<endl;
    cout<<"Object 1 Prime? : "<< num.isPrime()<<endl;

    cout<<"Value for object 2: " << num1.getVal()<<endl;
    cout<<"Object 2 Even? : "<<num1.isEven()<<endl;
    cout<<"Object 2 Odd? : "<<num1.isOdd()<<endl;
    cout<<"Object 2 Prime? : "<< num1.isPrime()<<endl;

    cout<<"Value for object 3: " << num2.getVal()<<endl;
    cout<<n3<<" is Even?: "<< num2.isEven(n3)<<endl;
    cout<<n3<<" is Odd?: "<< num2.isOdd(n3)<<endl;
    cout<<n3<<" is Prime?: "<< num2.isPrime(n3)<<endl;

    cout<<"Is Object 1 Equals to Object 2?: " << num.equals(n2)<<endl;
    cout<<"Is Object 1 Equals to Object itself?: " << num.equals(n1)<<endl;

    cout<<"Integer "<< Strnum << " to int : "<<num2.parseInt(Strnum)<<endl;


    return 0;
}
