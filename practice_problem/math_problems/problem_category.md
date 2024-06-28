# Problem category

Chef prepared a problem. The admin has rated this problem for `x` points.

A problem is called:

1. Easy if `1 <= x < 100`
2. Medium if `100 <= x < 200`
3. Hard if `200 <= x <= 300`

Find the category to which chef's problem belongs.

## Input format

* The first line contains `T` denotng the number of test cases. Then the test cases follow.

* The first and only line of each test case contains a single integer `x`

## Output format

For each test case, output in a single line the category of the chef's problem, i.e, whether it is an Easy, Medium or Hard problem.


## Sample

```cpp
Input       |   Output
------------|----------         
3           |
50          | Easy
172         | Medium
201         | Hard
```

## Explanation

Test case 1: The problem with rating `x = 50`, is an easy problem as `1 <= 50 < 100`.

Test case 2: The problem with rating `x = 172`, is a medium problem as `100 <=172 < 200`.

Test case 3: The problem with rating `x = 201`, is a hard problem as `200 <= 201 <=300`.

-----------------------
-----------------------

# Solution 


## Approach

Take input x,

```
check, 

if (1 is less than or equal to x and x is less than 100)
    print "Easy"
else if (100 is less than or equal to x and x is less than 200)
    print "Medium"
else if (200 is less than or equal to x and x is less than 3)
    print "Hard"

```

NOTE: We are just keeping x in range of 1 to 99 in first case, 100 to 199 is second case, and 200 to 299 in third case.

```cpp
if 1<=x && x<100
    print "Easy"
else if (100 <= x && x <200)
    print "Medium"
else if(200 <= x && x <300)
    print "Hard"
```
 
## Code

```cpp
#include <iostream>

void problemCategory(int x){
    
        if ((1<=x && x<100))
            std::cout << "Easy\n";

        else if ((100<=x && x<200))
            std::cout << "Medium\n";

        else if((200<=x && x<=300))
            std::cout << "Hard\n";
    }
    
int main(){

    int t;
    std::cin >> t;

    while(t--){
        int x;
        std::cin >> x;

        problemCategory(x);
    }

return 0;
}
```