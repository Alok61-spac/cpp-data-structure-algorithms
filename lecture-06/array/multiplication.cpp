// product of all elements in the array.
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    if (size <= 0)
    {
        cout << "invalid size";
        return 0;
    }
    int numbers [size];
    int product = 1;
    cout<<"Enter numbers : ";
    for (int index = 0; index < size; index++)
    {
        cin >> numbers[index];
        product *= numbers[index];
    }
    cout << product;
    return 0;
}