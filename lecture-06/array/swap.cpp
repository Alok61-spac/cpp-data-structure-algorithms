//Find maximum and minimum values present in array and swap their positions
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int value[5]{5, 7, 8, 3, 9};
    int max = INT_MIN;
    int index_max = 0;
    int index_min = 0;
    int min = INT_MAX;
    for (int index = 0; index < 5; index++)
    {
        if (value[index] > max)
        {
            max = value[index];
            index_max = index;
        }
        if (value[index] < min)
        {
            min = value[index];
            index_min = index;
        }
    }
    cout << max << endl;
    cout << min << endl;
    swap(value[index_max], value[index_min]);
    for (int index = 0; index < 5; index++)
    {
        cout << value[index] << ' ';
    }

    return 0;
}