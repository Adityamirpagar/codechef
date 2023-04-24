# Binary strings

You are given 2 separate binary string - *A* and *B*, both equal length.

You need to output the following

* Count of 1's in each string
* Count of indices *(i)* where *A[i] = B[i]*

## Input Format

* The first line will contain *t*- the number of test cases. Then the test cases follow
* Each test case consists of two lines of input
    * The string *A* on the 1st line and,
    * The string *B* on the 2nd line.

## Output Format

* Each test case should contain 1 line of output, with three space separated integers
    * Count of 1's in string *A*
    * Count of 1's in string *B*
    * Count of indices *(i)* where *A[i] = B[i]*

## Sample 1:

```cpp
input    |   output
---------|-----------
2        |
10001    |       
10000    |   2 1 4
10101    |   
00110    |   3 2 2
```

## Explanation :

**Test case 1**: The number of 1's in *A* is 2.
The number of 1's in *B* is 1.
For 4 indices *A[i] = B[i]*.


**Test case 2**: The number of 1's in *A* is 3.
The number of 1's in *B* is 2.
For 2 indices *A[i] = B[i]*.

----------------
----------------

# Solution

## Approach

We are provided with 3 tasks:

1. Count 1's in string *A*.
2. Count 1's in string *B*.
3. Count the indices where *A[i] = B[i]*.  

Let's solve first two tasks, these are pretty simple. For both the tasks we'll create two variable `a_count`, and `b_count`, which will store the total number's of 1's encountered in string *A* and *B* respectively.
    Now will iterate the loop from 0 to length of the string, and if we encounter 1, we'll increment `a_count` or `b_count` by 1, depending on the string we are iterating. Example code given below:

```cpp
// for string A
for(int i =0; i < a.length(): i++){
    if (a[i]=='1')
        a_count++;
}

// for string B
for(int i =0; i < b.length(): i++){
    if (b[i]=='1')
        b_count++;
}

```
Now in third condition we have to count the number of indices that have common element in both the strings *A* and *B*. For this we'll create another variable `common`. 

It is given in the statement that the length of both the strings are same. Hence, we'll iterate through any string, lets iterate through string *A* from 0 to `A.length()`. At each *A[i]* we'll check if *A[i] = B[i]* (i.e., element of string *A* is equal to the element of string *B*). If they are equal we'll increment the `common` by 1.

At last, we'll print all the variable (`a_count, b_count, common`) on the screen.

## Code 

```cpp
#include <iostream>

int main() {
   
   int t;
   std::cin >> t;
   
   while(t--){

      std::string a,b;
      std::cin >> a >> b;

      int a_count = 0, b_count = 0;

      // count of 1's in string a
      for(int i =0; i<a.length(); i++){
         if(a[i] == '1')
            a_count++;
      }

      // count of 1's in string b
      for(int i = 0; i< b.length(); i++){
         if(b[i] == '1')
            b_count++;
      }

      // incrementing index by 1, each time a[i] == b[i] (i.e, value of both strings are equal)
      int index = 0;
      for(int i =0; i< a.length();i++){
            if(a[i] == b[i])
               index++;

      }

      // printing the output to the console
      std::cout << a_count << " " << b_count << " " << index << std::endl;
   }
   
return 0;
} 
``` 