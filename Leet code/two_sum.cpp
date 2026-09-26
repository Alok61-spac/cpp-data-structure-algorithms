//leet code question 1
#include<iostream>
using namespace std;

int main(){
    int nums[6] = {3,6,2,7,8,5};
    int targated_num = 11;
    int size = sizeof(nums)/sizeof(nums[0]);
    for(int index = 0;index < size;index++){
        for(int index2 = index + 1;index2 < size;index2++){
            if(nums[index] + nums[index2] == targated_num){
                cout<<index<<","<<index2<<endl;
            }
        }
    }
    return 0;
}