## Topic: Conditional statements
### Definition
Conditional statements are used to make decisions in a program. They allow the program to execute different blocks of code depending on whether a condition is true or false.
### Different Conditional Statements
#### 1\. if Statement
Executes a block of code only if the condition is true.
#### Syntax:
if (condition) {<br>
    // code<br>
}
##### Example:
```cpp
#include <iostream>
using namespace std;

int main(){
    int age = 18;
    if (age >= 18) {
        cout << "Eligible to vote";
    }
}
```
#### 2\. else Statement
The else statement executes a block of code when the if condition is false.
##### Example:
```cpp
#include <iostream>
using namespace std;

int main(){
    int num = 5;
        if (num % 2 == 0) {
          cout << "Even";
}         else {
            cout << "Odd";
}
return 0;
}
```
#### 3\. else if 
The else if statement is used to check multiple conditions. If the previous if or else if condition is false, the program checks the next condition.
##### Example:
```cpp
#include <iostream>
using namespace std;
int main(){
    int marks = 85;
    if (marks >= 90) {
        cout << "Grade A";
}       else if (marks >= 75) {
             cout << "Grade B";
}            else {
              cout << "Grade C";
}
return 0;
}
```






