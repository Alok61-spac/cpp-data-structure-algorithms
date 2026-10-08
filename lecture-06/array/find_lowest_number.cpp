// find the lowest number in the array.
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of storage:";
    cin >> size;
    if (size <= 0){
        cout<<"invalid size";
        return 0;
    }
    int number[size];
    cout << "Enter numbers:";
    for (int index = 0; index < size; index++)
    {
        cin >> number[index];
    }
    int lowest_number = INT_MAX;
    for (int index = 0; index < size; index++)
    {
         if(number[index] < lowest_number)
        {
            lowest_number = number[index];
        }
        cout << number[index] << endl;
    }
    cout << "Lowest number is " << lowest_number;
    return 0;
}