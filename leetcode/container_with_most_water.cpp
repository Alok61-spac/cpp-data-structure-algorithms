#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector<int> numbers = {19,10,9,4,6,3,7,9,5};

    int index1 = 0;
    int index2 = 8;

    int m = INT_MIN;
    int s = 0;
    int M = INT_MIN;

    while(index1 < index2){

        m = min(numbers[index1], numbers[index2]);

        s = m * (index2 - index1);

        M = max(s, M);

        if(numbers[index1] < numbers[index2]){
            index1++;
        }
        else{
            index2--;
        }
    }

    cout << M;

    return 0;
}