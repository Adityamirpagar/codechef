# Reverse array in groups

Given an array arr[ ] of positive integers of size N. Reverse every sub-array group of size K. 

* NOTE: If at any instance, there are no more subarray of size greater than or equal to K, then reverse the last subarray (irresptive of its size.) You shouldn't return any array, modigy the given array in-place.

**Example 1:**

```
Input:

N = 5, K = 3
arr[] = {1,2,3,4,5}

Output: 3 2 1 5 4

Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.
```

**Example 2:**


```
Input:

N = 4, K = 3
arr[] = {5,6,8,9}

Output: 8 6 5 9

Explanation: First group consists of elements
5, 6, 8. And there is no Second group, hence 9.
```

---------------
---------------

# Solution


### Approach


Breif: We've and array `arr[]` of size `N`, and task is to reverse the array in groups K,  

**The two pointers start at the beginning and end of the array, respectively. They then iterate towards each other, swapping the elements at each index as they go. This process continues until the two pointers meet in the middle of the array, at which point the array is reversed.**


we can do this using *two pointer* technique, the outer for loop will iterate over the array starting at index 0 and incrementing by K with each time.

We then assign value to both pointers (variable) `left` and `right`, where left is at the current index (i,e i ==0), and right is assigned the minimum of the current index `i+(k-1)`. 


The inner while loop has a swap function which will swap the left elment with the right element, until they cross or meet each other, which will terminate the inner while loop leaving the array reversed.



### Code 

```cpp

#include <iostream>
#include <vector>


void reverse_arr(std::vector<int>& arr, int n, int k);

int main(){

    int n,k;

    std::cin >> n; // size of the array

// initialize a array
    std::vector<int> arr(n);

// putting elements in the array
    for(int i =0; i<n; i++)
        std::cin >> arr[i];


// taking size of the sub array
    std::cin >> k;


    reverse_arr(arr, n,k);

return 0;
}



void reverse_arr(std::vector<int>& arr, int n, int k){

// reverse array in groups
    for(int i =0; i<n; i+=k){
        int left = i;
        int right = std::min(i+(k-1), (n-1));

        while(left <= right){
            std::swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

// output the reversed array
    for(auto i : arr)
        std::cout << i << " ";
    std::cout << std::endl;
    
}

```





















