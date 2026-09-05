//convert 1 to 10 into binary
#include <iostream>
using namespace std;

int main(){
    for(int decimal_number = 1;decimal_number < 11; decimal_number++){
        int power = 1;
        int binary_number = 0;
        int n = decimal_number;
        while(n > 0){
            int remainder = n % 2;
            n /= 2;
            binary_number += remainder * power;
            power *= 10;

        }
        cout<<binary_number<<endl;
    }
    return 0;
}