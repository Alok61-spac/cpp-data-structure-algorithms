//reverse the sequence of elements in the array.
#include <iostream>
using namespace std;

void reverse_array(int numbers[],int size){
    int start=0;
    int end=size-1;
    while(start < end){
        swap(numbers[start],numbers[end]);
        start++;
        end--;
    }
    for(int index=0;index<size;index++){
        cout<<numbers[index]<<" ";
    }
}
int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    reverse_array(numbers,size);
    return 0;
}