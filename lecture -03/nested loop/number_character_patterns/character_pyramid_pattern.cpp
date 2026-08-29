//pyramid made up of alphabet.
#include <iostream>
using namespace std;

int main(){
    for(char row='A';row<='F';row++){
        for(char space=row;space<='F';space++){
            cout<<' ';
        }
        for(char alphabet='A';alphabet<row+1;alphabet++){
            cout<<alphabet;
        }
        for(char alphabet2=row-1;alphabet2>='A';alphabet2--){
            cout<<alphabet2;
        }
        cout<<endl;
    }
    return 0;
}