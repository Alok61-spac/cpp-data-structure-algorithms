// find  a number is odd or even
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter your number:";
    cin>>number;
    cout<<(number % 2 == 0?"Number is even":"Number is odd");
    return 0;
}
