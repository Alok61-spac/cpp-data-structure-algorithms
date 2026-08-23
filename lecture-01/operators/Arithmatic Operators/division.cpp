//Division of 2 numbers
#include <iostream>
using namespace std;

int main(){
    int numerator;
    float denominator;//if denominator is float then answer will be a float ,if it is an integer, the answer will be an integer.
    cout<<"Enter Your Numerator:";
    cin>> numerator;
    cout<<"Enter Your Denominator:";
    if(denominator == 0){Division by zero is not allowed."
    }
        else{
    cin>>denominator;
    cout<<"Result:"<<numerator/denominator;
    }
    return 0;

}