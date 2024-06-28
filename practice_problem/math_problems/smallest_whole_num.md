# Smallest Possible Whole Number

Your are give two integers `N` and `K`. You may perform the followin operatin any number of times (includin zero)

Change `N` to `N-K`, i.e, subtract `K` from `N`. Find the smallest non-negative value of `N` you can obtain this way.

## Input

* The fist line of the input contains a single integer `T` denoting the number of test cases. the description of `T` cases follows.

* The fist and only line of each test case contains two space separated integers `N` and `K`.

## Output

For each test case, print a single line containing one integer - the smallest value you can get.

## Sample

```
Input       |   Output
------------|-----------
3           |           
5 2         |   1
4 4         |   0   
2 5         |   2
```

## Explanation

Example case 1:

* First, we change `N = 5` to `N-K = 5-2 = 3`.

* Then, we have `N = 3` and we change it to `N-k 3-2 = 1`.

Since `1<K`, the process stops here and the smallest value is `1`

**Example case 2**: We change `N = 4` to `N-K = 4-4 = 0`. Since `0 < K` , the process stops here and the smallest value is `0`.

**Example case 3**: Since `2 < K` initially, we should not perform any operatin and the smallest value is `2`.

--------------------
--------------------

# Solution 

## Approach

while the n > 0

The code repeatedly subracts `k` from `n` as long as `n` is greater than or equal to k.

this process continues until `n` becomes less than `k`.

```cpp
while(n>0){
     if(n >=k){
         n-=k;
     }
     else
         break;
}
std::cout << n << std::endl;

```
This code is explicitly using the modulo operation for the final value of n, which achieves the similar result, but in a single operation instead of loop.

```cpp
if(k==0){
        std::cout << n << std::endl;
   }
   else
    std::cout << n%k << std::endl;
```

Using the loop will result in time exceed error, hence modulo operator is used

## Code

```
# include <iostream>

void smallestWholeNumber(int n , int k){
    
    // It's a trick for modulo opration
    //  while(n>0){
    //     if(n >=k){
    //         n-=k;
    //     }
    //     else
    //         break;
    // }
    // std::cout << n << std::endl;


   if(k==0){
        std::cout << n << std::endl;
   }
   else
    std::cout << n%k << std::endl;

}

int main(){

    int t;
    std::cin >> t;

    while(t--){
        int n,k;
        std::cin >> n >> k;
        smallestWholeNumber(n,k);
    }
}
```