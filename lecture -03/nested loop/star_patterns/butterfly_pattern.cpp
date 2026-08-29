//butterfly pattern made up of star.
#include<iostream>
using namespace std;

int main(){
    for(int row=1;row<=7;row++){
        for(int star=1;star<=row;star++){
            cout<<'*';
        }
        for(int space1=13;space1>row*2;space1--){
            cout<<' ';
        }
        for(int star2=1;star2<=row&&star2<7;star2++){
            cout<<'*';
        }
        
        cout<<endl;
    }
    for(int row2=1;row2<7;row2++){

        for(int star2=6;star2>=row2;star2--){
            cout<<'*';
        }
        for(int space2=1;space2<row2*2;space2++){
            cout<<' ';
        }
        for(int star3=6;star3>=row2;star3--){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}