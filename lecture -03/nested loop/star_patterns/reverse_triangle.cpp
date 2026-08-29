//printing revers triangle
#include <iostream>
using namespace std;

int main(){
    for(int i=9;i<10 && i>0;i--){
        for(int z=0;z<i;z++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }
    return 0;
}
