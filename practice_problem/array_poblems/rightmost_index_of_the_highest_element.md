# Rightmost index of the highest element

Given an array `A` of length `N`, please perform the following operations 

* Find the largest element of the array `A`- store it as the variable large
* Find the `right-most` index of the largest element of the array - store it as the variable right

Output the largest element and the `right-most` index of the largest element of the array.

**Note:** Index in C++ starts form `0`
**Note:** -100 <= Ai <= 100 for all element in `A`

## Input Format

* The first line of input will contain a single integer `T`, denoting the number of test cases.
* Each test case consists of two lines of input
    * *1st* line contains the integer `N`
    * *2nd* line contains `N` space separated integers- denoting the array `A`

## Output Format

* For each test case, output on a single line the largest element-*large*-of the array and its right-most index-*right*

## Sample 1:

```cpp
input          |    output
---------------|----------------        
2              |
5              |
5 2 4 1 3      |     5 0
6              |
3 -3 3 -2 3 -7 |     3 4
```

## Explanation:

**Test case 1:** The largest element is 5 and its rightmost index is 0.

**Test case 2:** The largest element is 3, it occurs on 3 different indices. The rightmost index is 4.

--------------
--------------

# Solution

## Approach

We'll create a variable `largest_element` and assign it the first element i.e., `arr[0]`. We then loop through the array from `arr[1]` to `arr[n]`, and check if the value of `largest_element` is less than any element in the array, if it is then assign the new value to the `largest_element`, and also store its index in a variable named `rightmost_index`.

In same condition we'll also check if the `arr[i]` is equal to `largest_element`, if `arr[i]` is equal to `largest_element` than, we'll update the `rightmost_index` variable's value.

Finally, we'll print the `largest_element` and `rightmost_index`.


## Code

```cpp
# include <iostream>

int main() {
    
    int t;
    std::cin >> t;
    
    while(t--){
        
        int n;
        std::cin >> n;
        
        int arr[n];
        
        for(int i =0; i<n; i++)
            std::cin >> arr[i];
          
        int largest_element = arr[0];
        int rightmost_index = 0;
        
        for(int i = 1; i< n; i++){
            if((largest_element < arr[i]) || arr[i] == largest_element){
                largest_element = arr[i];
                rightmost_index = i;
            }
        }
        
        std::cout << largest_element << " "<< rightmost_index << std::endl;
        
    }
    
return 0;
}

```
