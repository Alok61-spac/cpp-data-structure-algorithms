//floyds triangle made up of numbers.
#include <iostream>
using namespace std;

int main(){
    int number=1;
    for(int row=1;row<=5;row++){
        for(int column=0;column<row;column++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    return 0;
}
