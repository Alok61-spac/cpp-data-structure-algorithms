//convert decimal value into binary form.
#include <iostream>
using namespace std;

int main(){
    int answer=0;
    int power=1;
    int decimal;
    cout<<"Enter your decimal value which one do you want to convert into binary form:";
    cin>>decimal;
    while(decimal>0){
        int remainder= decimal%2;
        decimal /=2;
        answer += remainder*power;
        power *= 10;

    }
    cout<<answer;
    return 0;
}