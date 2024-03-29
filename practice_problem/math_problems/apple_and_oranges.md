# Apples and oranges

Rushitote went to a programming contest to distribute apples and oranges to the contestants. He has *N* apples and *M* oranges, which need to be divided equally amongst the contestant. Find the maximum possible number of contestants such that:

* Every contestant gets an equal number of apples; and
* Every contestant gets an equal number of oranges.

Note that every fruit with Rushitote must be distributed, there cannot be any left over.

For example, 2 apples and 4 oranges can be distributed equally to two contestants, where each one receives 1 apple and 2 oranges.

However, 2 apples and 5 oranges can only be distributed equally to one contestant.

## Input Format

* The first line of input will contain a single integer *T*, denoting the number of test cases.
* The first and only line of each test case contains two space-separated integers *N* and *M* - the number of apples and oranges, respectively.

## Output Format

For each test case, output on a new line the answer: the maximum number of contestants such that everyone receives an equal number of apples and an equal number of oranges. 

## Sample 1:

```cpp
Input  |  Output
-------|---------
3      |      
1 5    |  1
2 4    |  2
4 6    |  2
```

## Explanation:

**Test case 1**: There is only one apple, so distributing to more than one person is impossible.

**Test case 2**: As explained in the statement, 2 people can each receive 1 apple and 2 oranges.

**Test case 3**: 2 people can each receive 2 apples and 3 oranges. It's not possible to distribute equally to more than two people.

--------------
--------------

# Solution

## Approach

The problem ask us to divide apples and orange N and M respectively to a number of people, such that there is not left over.

This is same definition as gcd, GCD represents the largest possible number of equal shares that can be divided between *N* and *M* without any remainder.

Hence, we just have to find the gcd of *N* and *M*.

```cpp
# include <iostream>
# include <algorithm>

int main(){
   int t;
   std::cin >> t;

   while(t--){
      int n,m;
      std::cin >> n >> m;

      int share = std::__gcd(n,m);

      std::cout << share << std::endl;
   }

return 0;
}
```