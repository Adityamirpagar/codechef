# Maximum Length Even Subarray

You are given an integer `N`. Consider the sequence containing the integer `1,2,... N` in increasing order (exactly once). Find the maximum lenght of it contiguous sebsequence with and even sum.

## Input Format

* The first line of the input contains a single integer `T` denoting the number of test cases. the description of `T` test cases follows

* The first and only line of each test case conatins a single integer `N`.

## Output Format

FOr each test case, print a single line containing one integer -- the maximum length of a contiguous subsequence with even sum.


## Sample 

```cpp
Input   |   Output
3       |       
3       |   3
4       |   4
5       |   4
```

## Explanation

Example case 1: The optimal choice is to choose the entire sequence, since the sum of all its elements is `1+2+3=6`. which is even

Example case 3: One of the optimal choices is to choose the subsequence [1,2,3,4] which has an even sum.

--------------
--------------


# Solution 

## Approach 1

take input `n`,

create an array `arr` of size `n`, store the sequence in increasing order in the array.

```cpp
vector<int>arr(n)

for(int i=0; i<n; i++){
    arr[i] = i+1;
}
```

add all the elements of the array, and store it in `sum`

```cpp
for(int i =0; i<arr.size(); i++){
    sum += arr[i];
}
```

if `sum` or all array elements is even, print size of array i.e, `n`. Otherwise print `n-1`.

```cpp
if sum is even 
    print n
else
    print n-1
```    

**Note:** Time complexity is (O)n, linear

## Code 1
```cpp
# include <iostream>
# include <vector>

void maxLengthEvenSumArray(){

    int n;
    std::cin >> n;

    std::vector<int>arr(n);

    // creating an increasing sequence inside array
    for(int i =0; i< arr.size(); i++){
        arr[i] = i+1;
    }

    // adding all the elements
    int sum = 0;
    for(int i =0; i<arr.size();i++){
        sum += arr[i];
    }

    // check if the sum is even or not
    if((sum%2) == 0)
        std::cout << n << std::endl;
    else
        std::cout << n-1 << std::endl;
}

int main(){
    int t;
    std::cin >> t;

    while(t--){
        maxLengthEvenSumArray();
    }
    return 0;
}
```

## Approach 2

take input `n`,

using the formula for sum of n natural numbers $\sum\limits_{1=1}^n= \frac{n(n+1))}2$

```cpp
sum = (n*(n+1))/2;
```
if `sum` or all array elements is even, print size of array i.e, `n`. Otherwise print `n-1`.

```cpp
if sum is even 
    print n
else
    print n-1
```    

**Note:** Time complexity is (O)1 constant.


## Code 2

```cpp
#include <iostream>

void maxLengthEvenSumArray(){

    int n;
    std::cin >> n;

    // sum of n natural numbers 
    int sum = (n*(n+1))/2;


// checking if the sum is even or not
    if((sum%2) == 0)
        std::cout << n << std::endl;
    else
        std::cout << n-1 << std::endl;
}

int main(){
    int t;
    std::cin >> t;

    while(t--){
        maxLengthEvenSumArray();
    }
    return 0;
}
```