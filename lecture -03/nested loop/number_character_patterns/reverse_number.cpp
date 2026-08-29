//printing number in triangle shape in reverse manner.
#include <iostream>
using namespace std;

int main(){
    for(int count=1;count<=6;count++){
        for(int number=count;number>=1;number--){
            cout<<number;
        }
        cout<<endl;
    }
    return 0;
}