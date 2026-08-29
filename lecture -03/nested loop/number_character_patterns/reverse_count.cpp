//printing alphabet in triangle shape in revers manner.
#include <iostream>
using namespace std;

int main(){
     for(int count=1;count<=6;count++){
        for(char character=64+count;character>=65;character--){
            cout<<character;
        } 
        cout<<endl;
        }
    return 0;
}