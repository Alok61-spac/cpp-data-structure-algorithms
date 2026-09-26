//leet code question 15
#include<iostream>
using namespace std;

int main(){
    int a1[11] = {7,8,-1,0,4,2,-4,-7,6,-2,9};
    for(int i = 0;i < 11;i++){
        for(int i2 = i+1;i2<11;i2++){
            for(int i3 =i2 + 1;i3<11;i3++){
                if(a1[i]+a1[i2]+a1[i3] == 0){
                    cout<<"["<<a1[i]<<","<<a1[i2]<<","<<a1[i3]<<"]"<<endl;
                }
            }
        }
    }
    return 0;
}