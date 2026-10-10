//
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> marks = {0,4,6,9,7,3,2,1};
    int start = 0;
    int end = marks.size()-1;
    while(start <= end){
        int mid = (start + end )/2;
        if(marks[mid] > marks[mid+1] && marks[mid-1]<marks[mid]){
            cout<<"peak elemement "<<marks[mid]<<" found at index "<<mid;
            break;
        }
        if(marks[mid]<marks[mid-1]){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }

    return 0;
}