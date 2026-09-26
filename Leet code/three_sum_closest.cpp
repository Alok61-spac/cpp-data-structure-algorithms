//leet question 16
#include<iostream>
using namespace std;

int main(){
    int num[9] = {1,4,-1,7,6,-3,2,-8,-4};
    int targated_num = 1;
    for(int i = 0;i < 9;i++){
        for(int i2 = i+1;i2<9;i2++){
            for(int i3 = i2+1;i3<9;i3++){
                int sum = num[i] + num[i2] + num[i3];
                if(sum == targated_num - 1 || sum == targated_num + 1){
                    cout<<num[i]<<","<<num[i2]<<","<<num[i3]<<endl;
                }
            }
        }
    }
    return 0;
}