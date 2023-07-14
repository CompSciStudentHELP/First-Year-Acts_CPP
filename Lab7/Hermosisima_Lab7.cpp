#include <iostream>
#include <vector>
#include "Hermosisima_Lab7.h"
using namespace std;


int main(){
    vector <int> numbers;

    for(int i = 1; i <= 10; i++){
        int num;
        cout<<"Enter number "<< i <<": ";
        cin>>num;
        numbers.push_back(num);
    }

    Remove_Dupes<int> remover;

    remover.removeDuplicate(numbers);



    bool check = numbers.empty();
    if(!check){
        cout<<"These are the distinct numbers\n";
        for(int num: numbers){
            cout<<num<<" ";
        }
    }
    else{
        cout<<"No numbers are distinct.";
    }
    return 0;
}
