# Make A and B equal

Chef has two number *A* and *B*

In one operation, chef can choose either *A* or *B* and multiply it by 2.

Determine whether he can make both *A* and *B* equal after any number (possibly, zero) of moves.

## Input Format

* The first line of input will contain a single integer *T*, denoting the number of test cases.
* Each test case consists of two space-separated integers *A* and *B*.

## Output Format

For each test case, output YES if chef can make both numbers equal, No otherwise.

## Sample 1:

```cpp
Input   |   Output
--------|---------
4       |           
5 20    |   YES
6 6     |   YES
12 2    |   NO
50 20   |   NO
```

## Explanation:

*Test case 1*: Chef can multiply *A* by 2 twice and both *A* and *B* will become 20.

*Test case 2*: Both number are already equal.

*Test case 3*: It can be shown that *A* and *B* cannot be made equal.

**Test case 4**: It can be shown that *A* and *B* cannot be made equal.

-------------
-------------

# Solution 

## Approach

We'll use `min()` and `max()` function to find the minimum and maximum value between *A* and *B*, and assign them to *min_val* and *max_val* respectively.

Also create a variable *is_equal* and assign it 0. We'll use it for comparison. 

We'll then use while loop with condition *min_val <= max_val*. In while loop we'll check, if the min_val == max_val, then *is_equal = 1*.

With each iteration we'll multiply min_val by 2.

```cpp
# include <iostream>

int main(){
   int t;
   std::cin >> t;

   while(t--){

      int a ,b;
      std::cin >> a >> b;

      int min_val = std::min(a,b);
      int max_val = std::max(a,b);

      int is_equal = 0;
      while(min_val <= max_val){
         
         if(min_val == max_val){
            is_equal =1;
         }
         min_val*=2;
      }

      if (is_equal == 1)
         std::cout << "YES\n";
      else
         std::cout << "NO\n";

   }
return 0;
}
```
