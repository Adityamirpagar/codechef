# Output all digits of a number

You are given an integer *N*.

You need to create and output to the console all the digits of the integer, each separated by a space.

## Input format

* The first line of input will contain a single integer *T*, denoting the number of test cases. 
* Each test case consists of a single line of input - the integer *N*.

## Sample 1:

```cpp
Input   |  Output
--------|---------
2       |          
123     |  1 2 3
4567    |  4 5 6 7
```
----------
----------

# Solution

## Approach 1

We'll divide the `num` by 10, and store its remainder into the vector. And assign the quotient to the `num`. We'll do this until num > 0.

```cpp
# include <iostream>
# include <vector>
# include <algorithm>

int main(){
   int t;
   std::cin >> t;

   while(t--){
      std::vector<int> arr;

      int n;
      std::cin >> n;

      while(n >0){
         int num = 0;
         num = n%10;
         n/=10;
         arr.push_back(num);
      }
      std::reverse(arr.begin(), arr.end());

      for(int i : arr)  
         std::cout << i << " ";
      std::cout << std::endl;
   }
return 0;
}
```

## Approach 2

We can treat the `num` as a string and use a for loop print out its element with a space. 

```cpp
# include <iostream>

int main(){
   int t;
   std::cin >> t;

   while(t--){
      std::string s;
      std::cin >> s;

      for(int i =0; i<s.length(); i++){
         std::cout << s[i] << " ";
      }
      std::cout << std::endl;
   }
return 0;
}
```

> my thoughts: approach 1 is more efficient for large number as it go through the vector only one time. And approach 2 is not as efficient as approach 1. As it'll take more time to go through the string.