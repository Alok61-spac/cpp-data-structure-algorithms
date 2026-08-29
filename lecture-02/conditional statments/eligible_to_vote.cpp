//the person is eligible for voting or not
#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    cout<<(age >= 18?"You are eligible to vote.":"You are not eligible to vote.");

    return 0;
}