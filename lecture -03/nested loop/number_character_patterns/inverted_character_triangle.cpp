//inverted triangle made up of alphabet
#include <iostream>
using namespace std;

int main(){
    char alphabet='A';
    for(int row=1;row<=6;row++){
        for(int space=1 ;space<row;space++){
            cout<<" ";
        }
        for(int character=6;character>=row&&character>0;character--){
            cout<<alphabet;
        }    
        alphabet++;
        cout<<endl;
    }
    return 0;
}
