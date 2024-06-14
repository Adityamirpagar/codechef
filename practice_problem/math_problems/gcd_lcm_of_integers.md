# Find the GCD and LCM of 2 integers

You are given two integer *A* and *B*

You need to compute and output the [Greatest common divisor](https://www.cuemath.com/numbers/hcf-highest-common-factor/) and [Least common multiple](https://www.cuemath.com/numbers/lcm-least-common-multiple/) of these 2 numbers and store them in the variables *gcd* and *lcm*

## Input Format

* The first line of input will contain a single integer *T*, denoting the number of test cases.
* * Each test case consists of a single line of input- the integer *A* and *B*

## Output Format

* For each test case, output the *gcd* and *lcm* on one line

## Sample 1:

```cpp
Input  |  Output
2      |          
4 9    |  1 36  
24 32  |  8 96
```

--------
--------

# Solution

## Approach 

The Highest Common Factor (HCF) of two numbers is the highest possible number that divides both the numbers completely. The Highest Common Factor (HCF) is also called the Greatest Common Divisor (GCD). 

In this method we'll list the factor that completely divide both the integers and among them, we determine the highest factor.

For this we'll use vector and push the factors that are completely divisible by both, and determine the biggest number.

```cpp
# include <iostream>
# include <algorithm>
# include <vector>

int main() {
   int t;
   std::cin>> t;

   while(t--){
      int a,b;
      std::cin >> a >> b;

      std::vector<int>gcd;

      for(int i =1; i<= std::min(a,b); i++){
         if(a%i ==0 && b%i ==0)
            gcd.push_back(i);
      }

      int hcf = *max_element(gcd.begin(), gcd.end());
      int lcm = (a*b)/hcf;

      std::cout << hcf << " " << lcm << std::endl;
   }

return 0;
}                                                  
```

There is also a function in algorithm library *__gcd()*,

```cpp
#include <iostream>
#include <algorithm>

int main(){
int a,b;
std::cin >> a >> b;

int hcf = std::__gcd(a,b); // using gcd function
std::cout << hcf;
}
```