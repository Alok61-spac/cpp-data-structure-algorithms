//leet code question 26
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> nums = {1,3,1,7,4,5,2,7,2,8,3,8,1,9,3,4,5,4};
    int n = nums.size();
    for(int i = 0;i< n;i++){
        for(int i2 = i;i2< n;i2++){
            if(nums[i2] < nums[i]){   
                 swap(nums[i2],nums[i]);
            }
        }
    }
    int j = 0;
    for(int i = 1;i<n;i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j] = nums[i];
        }
    }
    int k = j + 1;
    for(int i = 0;i < k;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}