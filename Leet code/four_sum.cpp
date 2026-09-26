//leet code question 18
#include<iostream>
using namespace std;

int main(){
    int num[7] = {2,5,1,-6,8,-3,7};
    int targated_num = 0;
    for(int i = 0;i<7;i++){
        for(int i2 = i+1;i<7;i2++){
            for(int i3 = i2 + 1;i3<7;i3++){
                for(int i4 = i3+1;i4<7;i4++){
                    int sum = num[i] + num[i2] + num[i3] + num[i4];
                    if(sum == targated_num){
                    cout<<"["<<num[i]<<","<<num[i2]<<","<<num[i3]<<","<<num[i4]<<"]"<<endl; 
                    }       
                }
            }
        }
    }
    return 0;
}