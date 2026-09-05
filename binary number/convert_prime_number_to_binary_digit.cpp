//Convert only prime numbers into binary 
#include <iostream>
using namespace std;

int main(){
    for(int prime = 2;prime < 21;prime++){
        int is_prime = true;
        int count = 0;
        for(int module = 2 ; module < prime;module++){
            int remainder = prime % module;
            if(remainder == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            int power = 1;
            int binary_number = 0;
            int temporary_number = prime;
            while(temporary_number > 0){
                int last_digit = temporary_number % 2;
                temporary_number /= 2;
                binary_number += last_digit * power;
                power *= 10;
            }
            cout<<prime<<" : "<<binary_number<<endl;
        }  
        }
    return 0;
}