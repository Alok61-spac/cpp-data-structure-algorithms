//printing of pyramid pattern made up of stars.
#include <iostream>
using namespace std;

int main(){
    for(int row=1;row<=5;row++){
        for(int space=row;space<=5;space++){
            cout<<" ";
        }
        for(int star=1;star<=2*row-1;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}