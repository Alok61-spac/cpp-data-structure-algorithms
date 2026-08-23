//typecasting a small datatype into a big.
#include <iostream>
using namespace std;

int main(){
    int number = 61;
    double value = number;
    char alphabet ='A';
    int asciivalue= alphabet;
    cout<<value<<"\n";
    cout<<asciivalue<<"\n";
//printing the size of variables
    cout<<sizeof(number)<<"\n";
    cout<<sizeof(value);
    return 0;
}