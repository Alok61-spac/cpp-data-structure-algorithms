//
#include <iostream>
using namespace std;

int main(){
    int starting_number;
    cout<<"Enter starting number:";
    cin>>starting_number;
    int last_number;
    cout<<"Enter the last number:";
    cin>>last_number;
    cout<<"prime numbers are : ";
    for(int start = starting_number; start <= last_number;start++){
        int count =0;
        for (int i =1;i<=start;i++){
            if(start % i == 0){
                count++;
            }
        }
            if(count == 2){
            cout<<start<<" ";
        }
    }
    cout<<endl;
    cout<<"Non prime numbers are : ";
    for(int start = starting_number;start <= last_number;start++) {
        int count = 0;
        for(int divisor =1;divisor<=start;divisor++){
            if(start % divisor == 0){
                count++;
            }
        }
        if( count != 2){
            cout<<start<<" ";
        }
    }  
        return 0;
}