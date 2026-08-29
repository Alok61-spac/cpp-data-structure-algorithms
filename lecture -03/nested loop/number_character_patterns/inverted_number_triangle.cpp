// inverted triangle made up of numbers.
#include <iostream>
using namespace std;

int main(){
    int num=1;
    for(int row=1;row<6;row++){ 
        for(int space=1;space<row;space++){
            cout<<" ";
        }
            for(int number=5;number>row;number--){
           cout<<num;
        }
        num++;
        cout<<endl;
    }       
    return 0;
}