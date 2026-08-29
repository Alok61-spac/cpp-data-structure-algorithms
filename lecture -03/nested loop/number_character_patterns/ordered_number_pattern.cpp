//print triangle pattern
#include <iostream>
using namespace std;

int main(){
    for(int row=1;row<10;row++){
        int number =1;
        for(int column=0;column<row;column++){
            cout<<number;
            number++;  
        }
        cout<<endl;
    }
    return 0;
}