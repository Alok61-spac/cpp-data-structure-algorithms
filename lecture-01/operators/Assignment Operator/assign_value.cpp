//use of assignment operators
#include <iostream>
using namespace std;

int main(){
    int number=10;
    cout<<(number += 5)<<endl;//number = number + 5= 15
    cout<<(number -= 5)<<endl;//number(15) = number - 5= 10
    cout<<(number *= 5)<<endl;//number(10) = number * 5= 50
    cout<<(number /= 2)<<endl;//number(50) = number / 2= 25
    cout<<(number %= 3);//number = number(25) % 3= 1
     return 0;

}