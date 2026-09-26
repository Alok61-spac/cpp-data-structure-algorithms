//leet code question no 7.
#include <iostream>
using namespace std;

int main(){
    int integer = 123;
    int reverse = 0;
    while(integer > 0){
        int remainder = integer % 10;
        reverse = (reverse * 10) + remainder;
        integer /= 10;
    }
    cout<<reverse;
    return 0;
}