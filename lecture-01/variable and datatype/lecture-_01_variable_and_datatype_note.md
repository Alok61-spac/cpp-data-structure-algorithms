## 1\. Variables and Data Types
#### Definition of variable<br>
A variable is a named memory location used to store data. Its value can change during program execution.
**Example:**<br>
age = 18;<br>
grade = 'A';
### Rules for Naming Variables-
-Cannot start with a numberlike this salary= 25000.50;<br>
-Must begin with a letter or underscore (\_).<Br>
-Cannot contain spaces or special symbols (except \_).<br>
-Keywords like int, float, if cannot be used as variable names.<br>
-Variable names are case-sensitive (Age and age are different).<br>
### Data Types in C++>>
#### Definition<br>
A data type specifies the type of data that a variable can store. It also determines how much memory is typically needed to store that data.
| Data Type| Description |Example| Storage Size|
|---|---|---|---|
|int |Stores whole numbers| 25| 4 Bytes|
|float |Stores decimal numbers |12.5 |4 Bytes|
|double| Stores decimal numbers with greater precision |123.456789 |8 Bytes|
|char |Stores a single character |'A' |1 Byte|
|bool |Stores true or false |true |1 Byte|

**Example Program-**
```cpp
#include <iostream>
using namespace std;
int main() {
 int age = 18;
 float height = 5.8f;
char grade = 'A';
 cout << age << endl;
 cout << height << endl;
cout << grade << endl;
return 0;
}
```
Output:<br>
18<br>
5.8<br>
A
## 2\. Type Casting
#### Definition<br>
Type casting is the process of converting one data type into another.
Types of Type Casting-
### i\. Implicit Type Casting (Automatic)
-The compiler automatically converts one data type into another.
**Example:**<br>
int a = 10;<br>
float b = a;<br>
cout << b;<br>
Output:<br>
10
### ii\. Explicit Type Casting (Manual)
-The programmer converts the data type using the cast operator.
**Example:**<br>
float x = 9.8;<br>
int y = (int)x;<br>
cout << y;<br>
Output:<br>
9<br>
**Another Example:**<br>
int a = 10;<br>
int b = 3;<br>
float result = (float)a / b;<br>
cout << result;<br>
Output:<br>
3.33333
