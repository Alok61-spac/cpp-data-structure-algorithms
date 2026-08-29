# Basic concepts of C++
## 1. Steps of the c++ code execution process
i. **Writing the Code:** write the source code in a file with the .cpp extension.<br>
ii. **Preprocessing:** The preprocessor handles directives such as #include.<br>
iii. **Compilation:** The compiler checks the code for errors and converts it into object code .<br>
                      This can be done by executing the command: g++ filename.cpp<br>
iv. **Linker:** The linker connects your compiled program with the required library code and creates the final executable file.<br>
v. **Execution:** The operating system runs the executable file, and the program produces the output.<br>
### >> Flow of Execution
Source Code (.cpp)
↓
Preprocessor
↓
Compiler
↓
Linker
↓
Executable File
↓
Program Output
## 2.#include, iostream and std.
### Definition of #include
\#include is a preprocessor directive. It tells the processor to include the contents of header file before compilation.
### Definition of iostream
iostream is a header file in C++ that provides input and output functionality.
### 2 major Functions in iostream
\* cout<< – Used to display output on the screen.
\* cin>> – Used to take input from the user.
### Definition of std
"std" stands for **standard namespace**.
Most of the standard C++ library features, such as cout, cin, string, and endl,etc are inside the std namespace.
### Two common ways to use std:
i)
std::cout << "Hello";<br>
std::cin >> x;<br>
ii)
using namespace std;<br>
cout << "Hello";<br>
cin >> x;<br>
### 3\. Boilerplate Code in C++
\*Boilerplate code is the basic template or starting structure of a C++ program.
### >>Boilerplate Structure<br>
\#include <iostream><br>
using namespace std;<br>

int main() {<br>
code<br>
return 0;<br>
}<br>
\* **#include <iostream>->** Includes the input/output library.<br>
\* **using namespace std;->**  Allows the use of standard library names without writing std:: every time.<br>
\* **int main()->** The main function where program execution begins.<br>
\* **{ }->** Curly braces define the body of the function.<br>
\* **return 0;->** Indicates that the program finished successfully.<br>

