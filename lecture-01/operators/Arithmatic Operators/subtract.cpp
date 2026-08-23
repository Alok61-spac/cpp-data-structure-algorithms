//count profit loss by using subtraction.

#include <iostream>
using namespace std;

int main(){
    int price;
    float newprice;
    cout <<"Enter Your Price:";
    cin >>price;
    cout <<"Enter Your newprice:";
    cin >>newprice;
    int price_diffrence = price - newprice;
    if(price_diffrence>0){
        cout<<"Net profit is "<<price_diffrence;
    }
    else if(price_diffrence == 0){
        cout<<"Price is same as befor.";
    }
    else{
        cout<<"Net loss is "<<price_diffrence;
    }
    return 0;
}