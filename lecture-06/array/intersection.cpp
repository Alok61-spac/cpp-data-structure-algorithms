// Print the common elements of two arrays.
#include <iostream>
using namespace std;

int main()
{
    int array1[]{5, 7, 2, 6, 4};
    int array2[]{7, 9, 1, 5, 4, 3};
    for (int index = 0; index < 5; index++)
    {
        for (int index2 = 0; index2 <= 5; index2++)
        {
            if (array1[index] == array2[index2])
            {
                cout << array2[index2] << " ";
            }
        }
    }
    return 0;
}
