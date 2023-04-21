# Move the smallest element of the array to the left

Given an array A of the length N, Please perform the following operations

* Find the smallest element of the array and move it to the leftmost position
* Output the updated array A

**Note:**
If the array has multiple occurrences of the smallest element-then multiple answers are possible!

## Input Format

* The lines of the input will contain a single integer T, denoting the number of test cases.
* Each test case consist of two lines of input
    * 1st line contains the integer N
    * 2nd line contains N space separated integer -denoting the array A

## Output Format

* For each test case, output on a single line the updated array A

### Sample 1:

```cpp
input               | output
--------------------|-------
2                   |   
5                   |
5 2 4 1 3           |1 5 2 4 3   
6                   |   
3 -3 2 -2 1 -7      |-7 3 -3 2 -2 1
```
--------------
--------------

# Solution

## Approach 1.

Create two variables, min_element and min_element_index. we'll assign the first element  and it's index to min_element and min_element_index (i.e., at a[0]) respectively. So that we have something to compare with, beacause we are assuming that the first element is the smallest element in the array.

After creating the variable's, we'll go through array skipping the first index (i.e., a[i+1]....a[n]), this is because we've already stored the first element and its index on the variable min_element and min_element_index.

while we go through the loop till n, we'll check that if a[i] is less than min_element, if it is than we will replace the min_element value with new value and also change the min_element_index to the index of new value. This will go through array until we reach the last element. Hence after the execution of this loop we'll get the min_element as well as it's index.

Now, we have to shift the min_elemnet to the leftmost position of the array, without changing the order of the rest element.
    we can do this by using swap method, we know the index of the min_element i.e., min_element_index. We'll use this value to rearrange the array.

    ```cpp
    int temp = arr[i]
    arr[i] = arr[i-1]
    arr[i-1] = temp

    ```
    we'll run this swap funtion until i > 0. Hence, this will result in shifting the array to the leftmost position of the array.

## code 

```cpp
# include <iostream>

int main() {
    
    int t; 
    std::cin >> t;
    
    while(t--){
        
        int n;
        std::cin >>n;
        
        int arr[n];
        
        for(int i =0; i< n;i++)
            std::cin >> arr[i];
            
        int min_element = arr[0];
        int min_element_index = 0;
        
        for (int i=1; i<n; i++){
            
            if(arr[i]<min_element){
                
                min_element = arr[i];
                min_element_index = i;
                
            }
        }
        
        int i = min_element_index;
        
        while(i>0){
            
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            
            i--;
        }
        
        for(int i : arr)
            std::cout << i << " ";
        std::cout << std::endl;
        
    }
    
return 0;
}

```
