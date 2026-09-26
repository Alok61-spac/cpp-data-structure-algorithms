//leet code question 4
#include <iostream>
using namespace std;

int main(){
    int num1[4] = {3,5,7,2};
    int num2[4] = {1,6,4,9};
    int num3[8] ;
    //add two array
    for(int i = 0;i < 4;i++){
        num3[i] = num1[i];
    }
    for(int i = 0;i < 4;i++){
        num3[i + 4] = num2[i];
    }
    //short the array
     for(int i = 0;i<8;i++){
        int min = i;
        for(int index = i;index<8;index++){
            if(num3[index] < num3[min]){
                swap(num3[index],num3[min]);
            }
        }
     }
     //median of the array
     int start = 0;
     int end = sizeof(num3)/4;
     int median = (start + end)/2;
     if(median % 2 != 0){
        cout<<num3[median]/2.0;
     }
     else{
        cout<<(num3[median] + num3[median - 1])/2.0;
     } 
    return 0;
}