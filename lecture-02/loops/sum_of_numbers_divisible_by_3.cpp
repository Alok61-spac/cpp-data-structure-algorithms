//sum of all numbers from  1 to n that are divisible by 3
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number :";
    cin>>number;
    int sum = 0;
    int count =1;
    while(count<=number){
          if(count%3==0){
            sum += count;
          }
        count++;
    }
    cout<<"Total sum = " <<sum;
    return 0;
}