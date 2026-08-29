# 1)Operators
**Definition of operator:**
Operators are special symbols used to perform operations on variables and values.
## Types of Operators in C++
### 1\. Arithmetic Operators
**Definition:**
These operators perform basic mathematical calculations on numerical values.
| Operator  |   Meaning        |Expression|
| - | - | -|
|   +       | Addition         |  a + b   |
|   -       | Subtraction      |  a - b   |
|   *       | Multiplication   |  a * b   |
|   /       | Division         |  a / b   |
|    %      |Remainder         |  a % b   |

**Example:**<br>
```cpp
#include <iostream>
using namespace std;
int main() {
 int a = 10, b = 3;
cout << "Addition: " << a + b << endl;
 cout << "Subtraction: " << a - b << endl;
cout << "Multiplication: " << a * b << endl;
cout << "Division: " << a / b << endl;
cout << "Remainder: " << a % b << endl;
 return 0;
}
```
### 2\. Relational (Comparison) Operators
**Definition:**
These operators compare two values and return a Boolean value: true or false. When printed using cout, true and false are displayed as 1 and 0 by default.
|Operator    |Meaning                  |Expression|
|---|---|---|
| ==         |Equal to                 | a == b   |
| !=         |Not equal to             | a != b   |
| >          |Greater than             | a > b    |
| <          |Less than                | a < b    |
| >=         |Greater than or equal to | a >= b   |
| <=         |Less than or equal to    | a <= b   |
**Example:**
int a = 10, b = 20;<br>
cout << (a < b);<br>
Output:<br>
1
### 3\. Logical Operators
**Definition:**
These operators combine or reverse conditions.
|Operator |name       |meaning|
|----|----|----|
|&&       |Logical AND| Both conditions must be true.|
| \|\|    | Logical OR| At least one condition must be true.|
|!        |Logical NOT| Reverses true/false|
**Example:**
int a = 10, b = 20;<br>
cout << (a < b && b > 15);<br>
Output:<br>
1
### 4\. Assignment Operators
**Definition:**
These operators assign values to variables.
|Operator| Example| Meaning|
|----|----|----|
| =  | a = 5        | Assign|
| += | a += 2       | Add and assign|
| -= | a -= 2       |Subtract and assign|
| *= | a *= 2       |Multiply and assign|
| /= | a /= 2       | Divide and assign|
| %= | a %= 2       |Modulus and assign|

**Example:**
int a = 10;<br>
a += 5;<br>
cout << a;<br>
Output:<br>
15
### 5\. Increment and Decrement (unary) Operators
**Definition:**
Increment and decrement operators are unary operators used to increase or decrease the value of a variable by 1.
| Operator| Meaning
|---|---
|++       |Increase by 1|
|--       |Decrease by 1|

**Example:**
int a = 5;<br>
a++;<br>
cout << a << endl;<br>
a--;<br>
cout << a;<br>
Output:<br>
6<br>
5
### 6.Bitwise Operators

