//pyramid pattern made up of numbers.
#include <iostream>
using namespace std;

int main(){
    for(int row=1;row<=6;row++){
        for(int space=7;space>0&&space>row;space--){
            cout<<" ";
        }
        for(int number=1;number<row+1;number++){
            cout<<number;
        }
        for (int number2=row-1;number2>=1;number2--){
            cout<<number2;
        }
        cout<<endl;
    }
    return 0;
}