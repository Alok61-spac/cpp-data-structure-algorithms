## Topic-Nested Loops
#### Definition-
A nested loop is a loop inside another loop. 
#### Syntax
```cpp
for (initialization; condition; update) {      // Outer Loop
  for (initialization; condition; update) {  // Inner Loop

       // Statements
   }
}
```
#### Outer Loop
The outer loop controls the rows.<br>
It executes once for each row.
#### Inner Loop
The inner loop controls the columns.
The inner loop executes completely for every iteration of the outer loop.
#### How It Works
```cpp
for (int i = 1; i <= 3; i++) {      // Rows
   for (int j = 1; j <= 4; j++) {  // Columns
     cout << " * ";
   }
  cout << endl;
}
```
**Execution process**<br>
Row 1: Inner loop prints 4 stars.<br>
Row 2: Inner loop prints 4 stars.<br>
Row 3: Inner loop prints 4 stars.<br>
**Output**  <br>
\* \* \* \* <br>
\* \* \* \* <br>
\* \* \* \* <br>

#### Example 1: Print Row and Column Numbers
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 4; j++){
          cout << "(" << i << "," << j << ") ";
     }
      cout << endl;
   }
return 0;
}
```
**Output**<br>
(1,1) (1,2) (1,3) (1,4)<br>
(2,1) (2,2) (2,3) (2,4)<br>
(3,1) (3,2) (3,3) (3,4)<br>
#### Key Points
A nested loop is a loop inside another loop.<br>
The outer loop controls the rows.<br>
The inner loop controls the columns.<br>
For every one iteration of the outer loop, the inner loop executes completely.
#### Nested loops are mainly used for
Printing star patterns.<br>
Printing number patterns.<br>
Working with rows and columns.<br>
Creating multiplication tables.<br>