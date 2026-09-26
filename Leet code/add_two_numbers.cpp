//leet code question 2
#include<iostream>
using namespace std;

int reverse_number(int n){
    int reverse_num =0;
    while(n > 0){
        int remainder = n % 10;
        reverse_num = (reverse_num * 10) + remainder ;
        n /= 10;
    }
    return reverse_num;
}
int main(){
    int num1 = 574;
    int num2 = 275;
    int r1 = reverse_number(num1);
    int r2 = reverse_number(num2);
    int sum = r1 + r2;
    int rsum = reverse_number(sum);
    cout<<rsum;
    return 0;
}