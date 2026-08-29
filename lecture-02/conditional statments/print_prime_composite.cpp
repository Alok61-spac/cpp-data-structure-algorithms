//print prime number,non prime number and composite number.
#include <iostream>
using namespace std;

int main(){
    int starting_number;
    cout<<"Enter starting number:";
    cin>>starting_number;
    int last_number;
    cout<<"Enter last number:";
    cin>>last_number;
    if(starting_number > last_number){
        cout<<"Error:starting number cannot be greater than last number.";
        return 0;
    }
    cout<<"Nither prime nor composite:";
    for(int start = starting_number;start <= last_number;start++){
        if(start <= 1){
            cout<<start<<" ";     
        }
    }
    cout<<endl;
    cout<<"Prime numbers:";
    for(int prime_number = starting_number;prime_number <= last_number;prime_number++){
        bool isprime = true;
        for(int i = 2;i<prime_number;i++){
            if(prime_number % i == 0 ){
                isprime = false;
       }
          }
                if(isprime && prime_number > 1){
                    cout<<prime_number<<" ";
            }
        }
     cout<<endl;
    cout<<"Composite numbers:";
    for(int composite_number = starting_number;composite_number <= last_number;composite_number++){
        bool isprime = true;
        for(int i = 2;i < composite_number;i++){
            if(composite_number % i == 0){
                isprime = false;
            } 
        }
        if(isprime == false && composite_number > 1){
            cout<<composite_number<<" ";
        }
    }
    return 0;
}