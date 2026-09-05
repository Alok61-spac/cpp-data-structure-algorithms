## Topic - Binary number system
</hr>

**The binary number system is a  base-2 number system that uses only<u> 0 and 1 </u>to represent numbers.**<br>
**The binary number system is often called <u>language of  computers </u>because  computers process and store information using binary numbers (0 and 1).**
### Conversion process : Decimal To binary
<hr>
1. Decimal / 2<br>
2. Write down the remainder (0 or 1).<br>
3. Divide the quotient by 2 again.<br>
4. Repeat until the quotient is 0.<br>
5. Arrange the remainders from bottom to top.This gives the binary number.

#### Example
decimal = 13
13 / 2 = 6,remainder = 1
6 / 2 = 3,remainder = 0
3 / 2 = 1,remainder = 1
1 / 2 = 0,remainder = 1
Arrangement of remainders from bottom to top = 1101
Binary form of 13 = 1101
#### code form
```cpp
#include <iostream>
using namespace std;

int main(){
    int number = 13;
    int power = 1;
    int binary_number = 0;
    while(number > 0){
    int remainder = number % 2;
    number /= 2;
    binary_number += remainder * power;
    power *= 10;
    }
    cout<<binary_number;
    return 0;
}
```
output:1101
### Conversion process : Binary to Decimal
<hr>
1. Write the binary number.<br>
2. Starting from rightmost digit ,assign positions :0,1,2,3....<br>
3. Calculate
2<sup>0</sup>,2<sup>1</sup>,2<sup>2</sup>,2<sup>3</sup>.....<br>
4. Multiply each binary digit by its corresponding power of 2.<br>
5. Add all the results.

#### Example
Binary number = 1101
Decimal = (1 * 2<sup>3</sup>) + ( 1 * 2<sup>2</sup>) + (0 * 2<sup>1</sup>) + (1 * 2<sup>0</sup>) = 13
 #### Code form
```cpp
#include <iostream>
using namespace std;

int main(){
    int binary = 1101;
    int power = 1;
    int decimal = 0;
    while(binary > 0){
    int remainder = binary % 10;
    binary /= 10;
    decimal += remainder * power;
    power *= 2;
        }
        cout<<decimal;
    return 0;
    }
```
output:13
### Two's complement 
**Two's complement is a method used by computers to represent signed integers including ,negative numbers.**
* MSB (most significant bit) represents the sign of the number.
* If the MSB is `0`,the number is **positive** .
* If the MSB is `1`, the number is **negative**.
#### Process to find two's complement
1.write the binary number
2.find the 1's complement
 <u>**change 0 -> 1 and 1 -> 0**</u>
 3. 2's complement = add 1 to the 1's complement.
 #### Example 
 binary number = 1010
 1's complement = 0101
 2's complement = 0101 + 1 = 0110



