//count profit loss by using subtraction.

#include <iostream>
using namespace std;

int main(){
    float purchase_price;
    float selling_price;
    cout <<"Enter your purchase price:";
    cin >>purchase_price;
    cout <<"Enter your selling price:";
    cin >>selling_price;
    double price_difference = selling_price - purchase_price;
    if(purchase_price < 0 ||  selling_price < 0){
        cout<<"price cannot be negative."<<endl;
    }
    else if( price_difference > 0){
        cout<<"Net profit is "<<price_difference;
    }
    else if(price_difference == 0){
        cout<<"Price is same as before.";
    }
    else{
        cout<<"Net loss is "<<(-price_difference);
    }
    return 0;
}