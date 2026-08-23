// check number is prime or composite .
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter your number:";
    cin>> number;
    if(number <= 1){
        cout << "Neither prime nor composite.";
    }
    else{
    for(int count = 2;count < number;count++){
        if(number % count == 0){
            cout<<"it is a composite number.";
            return 0;
        }   
   }
}
cout<<"It is a prime number.";
return 0;
    return 0;
}