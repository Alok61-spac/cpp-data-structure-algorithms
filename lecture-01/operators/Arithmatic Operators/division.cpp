//Division of 2 numbers
#include <iostream>
using namespace std;

int main(){
    float numerator;
    float denominator;

    cout<<"Enter numerator:";
    cin>>numerator;
    cout<<"Enter denominator:";
    cin>>denominator;
    if(denominator == 0){
        cout<<"Error:Division by zero is not allowed.";
    }
    else{
        cout<<"Result:"<<numerator/denominator;
    }
    return 0;
}
  