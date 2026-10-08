// find the largest number in the array.
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    cout << "Enter your storage size:";
    cin >> size;
    if (size <= 0)
    {
        cout << "invalid size";
        return 0;
    }
    int number[size];
    cout << "Enter numbers:";
    for (int index = 0; index < size; index++)
    {
        cin >> number[index];
    }
    int largest_number = INT_MIN;
    for (int index = 0; index < size; index++)
    {
        if (number[index] > largest_number)
        {
            largest_number = number[index];
        }
        cout << number[index] << endl;
    }
    cout << "Largest number is " << largest_number;
    return 0;
}