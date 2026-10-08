## Array

An array is the data structure which <u>**stores elements of the same data type in contiguous memory locations**</u>.

### Syntax

dataType arrayName[arraysize];

#### 1. Full initialization

int marks[5] = {47,87,45,58,35};

#### 2. Omit size(compiler automatically determines the array  size from the number of element)

int marks[] = {28,8,21,71};

#### 3. Partial initialization(after providing values, if any space remains, rest default to 0)

int marks[5] = {5,7}//Elements : 5,7,0,0,0

#### 4. Initialization of all elements to 0

int marks[4] = {0};

### Accessing elements

#### 1. By indexing

```cpp
#include <iostream>
using namespace std;

int main(){
    int marks[5] = {3,8,6,5,7};
    cout<<marks[0]<<endl<<marks[1];
    return 0;
}
```

**Output:**
3
8

### Key Points

1.Array stores multiple values of the same data type.<br>
2.Elements are stored in contiguous memory locations.<br>
3.Indexing starts from 0.<br>
4.Last index = array size - 1.<br>
5.Array size is fixed after declaration.<br>
6.Example: int marks[5] has indices 0 to 4.
