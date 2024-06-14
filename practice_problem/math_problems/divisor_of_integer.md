# Divisor Of Integer in Ascending order.

You are given an integer *N*.

You need to create and output to the console all the **divisors** of this integer in **ascending** order.

## Input Format

* The first line of input will contain a single integer *T*, denoting the number of test cases.
* Each test case consists of a single line of input - the integer *N*.

## Sample 1:

```cpp
Input   |  Output
--------|-----------
2       |          
12      |  1 2 3 4 6 12
21      |  1 3 4 21
```

------------
------------

# Solution 

We'll just use a for loop from *i to N*, where i is 1. And if *N % i == 0*, print *i*.

```cpp
# include <iostream>

int main(){

   int t;
   std::cin >> t;

   while(t--){
      int n;
      std::cin >> n;

      for(int i = 1; i<=n; i++){
         if ((n%i) == 0)
            std::cout << i << " ";
      }
      std::cout << std::endl;
   }
return 0;
}
```