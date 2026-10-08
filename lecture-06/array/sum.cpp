// Sum of numbers in array.
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter size of array:";
    cin >> size;
    int number[size];
    int sum = 0;
    cout << "enter numbers :";
    for (int index = 0; index < size; index++)
    {
        cin >> number[index];
        cout << number[index] << ' ';
        sum += number[index];
    }
    cout << endl;
    cout << "sum:" << sum << endl;
    return 0;
}