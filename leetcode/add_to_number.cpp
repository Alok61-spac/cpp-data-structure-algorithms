//
#include <iostream>
using namespace std;

int reverse_number(int number){
    int reversed_number = 0;
    while(number > 0){
        int last_digit = number % 10;
        reversed_number = reversed_number * 10 + last_digit;
        number /= 10;
    }
    return reversed_number;
}
int main(){
    int number1 ;
    cout<<"Enter the first number";
    cin>>number1;
    int number2 ;
    cout<<"Enter the second number";
    cin>>number2;
    int reverse_number1 = reverse_number(number1);
    int reverse_number2 = reverse_number(number2);
    int sum = reverse_number1 + reverse_number2;
    int result = reverse_number(sum);
    cout<<result;
    return 0;
}