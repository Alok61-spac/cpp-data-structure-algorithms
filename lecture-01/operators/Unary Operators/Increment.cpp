
#include <iostream>
using namespace std;

int main(){
//a++ = a+1(first work then update)
    int price = 65;
    int newprice = price++;
    cout<< newprice << endl;//65
    cout<< price <<endl;//66
//++a = a+1(first update then work)
    int value =45;
    int newvalue = ++value;
    cout<< newvalue <<endl;
    cout<< value;
    return 0;

}
