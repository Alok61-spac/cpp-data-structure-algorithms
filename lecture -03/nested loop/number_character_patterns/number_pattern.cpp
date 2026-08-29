
#include <iostream>
using namespace std;

int main(){
    int number=1;
    for(int i =0;i<10;i++){
           for(int z=0;z<i+1;z++){
            cout<<number<<" ";
           }
        number++;
        cout<<endl;
    }
    return 0;
}