// print unique values in array.
#include <iostream>
using namespace std;

int main()
{
    int numbers[]{5, 5, 8, 7, 8, 9, 4, 3, 3};
    for (int index = 0; index < 9; index++)
    {
        int frequency = 0;
        for (int index2 = 0; index2 < 9; index2++)
        {
            if (numbers[index] == numbers[index2])
            {
                frequency++;
            }
        }
        if (frequency == 1)
        {
            cout << numbers[index] << endl;
        }
    }

    return 0;
}