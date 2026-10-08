// Search for a target number in the array.
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number you want to search  :";
    cin >> number;
    bool found = false;
    int values[13] = {47, 86, 74, 557, 57, 64, 16, 98, 56, 78, 35, 24, 15};
    for (int index = 0; index < 13; index++)
    {
        if (number == values[index])
        {
            found = true;
            cout << "Number found at index:" << index;
        }
    }
    if(!found){
        cout<<"Number is not available";
    }
    return 0;
}
