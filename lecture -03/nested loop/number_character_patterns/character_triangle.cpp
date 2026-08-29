//printing triangle made up of alphabet
#include <iostream>
using namespace std;

int main(){
    char character=65;
    for(int i=0;i<9;i++){
        for(int z=0;z<i+1;z++){
            cout<<character<<" ";
        }
        character++;
        cout<<endl;
    }

    return 0;
}