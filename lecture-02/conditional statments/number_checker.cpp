// find the number is negative or positive or zero?
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter your number:";
    cin>>number;
    if (number > 0){
        cout<<"Number is posetive.";
    }
    else if (number < 0){
        cout<<"Number is negative.";
    }
    else {
        cout<<"Number is  zero.";
    }
    return 0;
}