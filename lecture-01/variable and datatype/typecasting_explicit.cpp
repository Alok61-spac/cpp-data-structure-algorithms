//typecasting of a bigger data type into smaller data type.
#include <iostream>
using namespace std;
 int main(){
    double price=100.99;
    int new_price=int(price);
    char asciivalue=char(price);
    cout<<new_price<<endl<<asciivalue;
    return 0;
 } 