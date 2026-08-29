//
#include<iostream>
using namespace std;

int main(){
    for(int row = 0;row<8;row++){
        for(int space = 8;space>row;space--){
            cout<<" ";
        }
            for(int star = 1;star <= (row*2)+1;star++){
                cout<<"*";
           }
            cout<<endl;
    }
    for(int row2 = 1;row2<=7;row2++){
        for(int space2 = 0;space2<=row2;space2++){
            cout<<" ";
        }
            for(int star2 = 1;star2<=15-row2*2;star2++){
                cout<<"*";
            }
            cout<<endl;
        }
    
    return 0;
}