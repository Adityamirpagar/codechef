# Numerical characters in strings

You are given 2 integers *A* and *B*- they contain the same number of digits.

You need to determine if these numbers are **reverse** of each other.

## Input Format

* The first line will contain *t*- the number of test cases. Then the test cases follow
* Each line of the test case consists of a two line of input
    * the number *A* on the 1st line and
    * the number *B* on the 2nd line

## Output Format

* Each test case output "YES" if the numbers are reverse of each other and "NO" otherwise.

## Sample 1:

```cpp
input    |  output
---------|---------
2        |  
1005     |  
5001     |  YES
12345    |   
53321    |  NO
```

## Explanation:

**Test case 1**: *5001* when reversed gives us *1005*. Hence, we output "YES".

**Test case 2**: *12345* when reversed gives us *54321*. Hence, we output "NO".

------------
------------

# Solution

We've to compare two string *A* and *B*. We have to check if given string *A*, when reversed is equal to *B* or not. If it is then print "YES", else print "NO". To do this we can either do it manually using a *for loop* or an existing function called `reverse()` (in algorithm header file).

## Approach 1 (using manual for loop)

Using a for loop to reverse the string a and then comparing the two if they are equal.

```cpp
# include <iostream>

int main(){

   int t;
   std::cin >> t;

   while(t--){
      std::string a,b;
      std::cin >> a >> b;

      // reversing string a
      std::string reversed_s;
      
      for(int i=a.length()-1; i>=0; i--)
         reversed_s += a[i];

      //comparing strings a and b
      if(reversed_s == b)
         std::cout << "YES\n";
      else
         std::cout << "NO\n";
   }
return 0;
}
```

## Approach 2 (using `reverse()` function)

We'll use the `reverse()` function from the algorithm header file. The function allow us to reverse a string. e.g.,

```cpp
# include <iostream>
# include <algorithm>

int main(){

   int t;
   std::cin >> t;

   while(t--){
      std::string a,b;
      std::cin >> a >> b;

      // reversing string a
      std::reverse(a.begin(), a.end());

      //comparing strings a and b
      if(a == b)
         std::cout << "YES\n";
      else
         std::cout << "NO\n";
   }
return 0;
}
```

> NOTE: The `reverse()` function does not produce any output, it just modifies the input string in-place. Hence, it cannot directly get assigned to any variable, that'll give an error e.g,

```cpp
std::string s;
std::string reversed_s = std::reverse(a.begin(), a.end());
// this will produce an error
```
To assign the value of the `reverse()` function to any varialbe we use alternate method. e.g,

```cpp
string s;
string reversed_s = s; // assigned string to reversed_s variable

// reverse the reversed_s variable
std::reverse(reversed_s.begin(), reversed_s.end());
```

This way the string is reversed, and the main string variable is still intact.

