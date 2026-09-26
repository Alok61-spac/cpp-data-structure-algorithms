//leet code question 14
#include<iostream>
#include<string>
using namespace std;

int main(){
    string n1 = "flower";
    string n2 = "flotyr";
    string n3 = "fltuo";
    for(int i = 0;i < 6;i++){
        if(n1[i]==n2[i] && n2[i]==n3[i]){
        cout<<n1[i];
        }
    }
    return 0;
}