//print squar pattern
#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of row:";
    cin>>row;
    int column;
    cout<<"Enter the number of column:";
    cin>>column;
    for(int r = 1;r<=row;r++){//outer loop for row
        
        for(int c=1;c<=column;c++ ){//inner loop for column
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}