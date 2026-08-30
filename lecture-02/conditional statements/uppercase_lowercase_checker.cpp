//find the character is lowercase or uppercase
#include <iostream>
using namespace std;
 int main(){
    char character;
    cout<<"Enter your character:";
    cin>>character;
    if ( character >= 'a' && character <= 'z'){
        cout <<"The character is lowercase"<<endl;
    }
    else if(character >= 'A'&& character <= 'Z'){
        cout<<"The character is uppercase"<<endl;
    }
    else{
        cout<<"The character is not a letter";
    }
    return 0;

 }