// convert binary form to decimal form.
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the binary number which one do you want to convert into decimal:";
    cin>>number;
    int power=1;
    int result = 0;
    while(number > 0){
       int remainder = number%10;
        number /= 10;
        result += remainder * power;
        power *= 2;
    }
    cout<<result;
    return 0;
}