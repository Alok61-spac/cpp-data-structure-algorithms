//factorial of a number.
#include <iostream>
using namespace std;

int main(){
    int number;
    cout <<"Enter the number :";
    cin>>number;
    int factorial = 1;
    for(int count =1;count<=number;count++){
         factorial *= count;
    }
    cout <<"Factorial :"<<factorial;
    return 0;
}