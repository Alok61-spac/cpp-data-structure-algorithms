//sum of all odd numbers from 1 to n.
#include <iostream>
using namespace std;

int main(){
    int number;
    int sum= 0;
    cout<<"Enter a number:";
    cin>>number;
    for(int count=1;count <= number;count= count+2){
        sum += count;

    }
    cout<<"sum of odd numbers = "<< sum;

    return 0;
}
