//printing of square pattern by using letter.
#include <iostream>
using namespace std;

int main(){
    char character =65;
    int number=3;
    for(int i = 1;i<=number;i++){
        for(int z = 1;z<=number;z++){
            cout<<character;
            character++;
        }
        cout<<endl;
    }






    return 0;
}