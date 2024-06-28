# The Two Dishes

Chef prepared two dishes yesterday. Chef has assigned the **tastiness** *T1* and *T2* to the first and to the second dish respectively. The testiness of the dishes be any integer between 0 and N (both inclusive).

Unfortunately, chef has forgotten the values of *T1* and *T2* that he had assigned to the dishes. However, he remembers the sum of the testiness of bothe the dishes - denoted by *S*.

Chef wonders, what can be maxmimum possible absolute difference between the testiness of the two dishes. Can you help the chef in finding the maximum absolute difference?

it is guranteed that at leat one pair *{T1,T2}* exist such that *T1+T2 = S, O<=T1, T2 <=N*

## Input format

* THe first line of input contains a single integer *T*, denoting the number of testcases. The description of the *T* testcases follows.

* The first and only line of each test case contains two space-separated integers *N*, *S*, denoting the maximum tastiness and the sum of the testiness of the two dishes, respectively.

## Output Fomat

For each testcase, output a single line containing the maximum absolute difference between the tastiness of the two dishes.


## Sample 

```cpp
Input       | Output
------------|---------
3           |           
3 1         |   1   
4 4         |   4
2 3         |   1
```

## Explanation

**Test case 1**: The possible pare of {T1, T2} are {0,1} and {1,0}. Difference in both the cases is 1, hence the maximum possible absolute difference is 1.

**Test case 2**: The possible pairs of {T1, T2} are {0,4}, {1,3}, {2,2}, {3,1} and {4,0}. The maximum possible absolute difference is 4.

**Test case 3**: The possible pare of {T1, T2} are {1,2} and {2,1}. Difference in both the cases is 1, and hence the maximum possible absolute difference is 1.

---------------
---------------

# Solution

## Approach

We've 

`T1` = `tastiness of first dish,`

`T2` = `tastiness of second dish,`

`S` = `sum of tastiness of both dishes` (`T1 + T2 = S`)

`*N*` = `maximum tastiness` (upper limit of `T1` and `T2`)

we've also have a variable `maxAbs = 0`, to store the maximum tastiness

take the input `N` and `S`

we'll loop from 0 to N,

```cpp
for(i =0; i<=n; i++)
    j = s-i;
```
during this loop we will get the `T1` that is i, and `T2` that is `j`.

the `j = s-i`, will confirm that `j` gets assigned the value that satisfies `i+j = s`.

now that we have T1 and T2, we will compare it's each pairs for maximum absolute difference.

`maxAbs = max(maxAbs,abs(i-j))`

this will gets the maximum absolute difference for each pair.

finally print the maxAbs.

## code 

```cpp
# include <iostream>

void maxDiff(int n, int s){
    
    int maxAbs = 0;
    
    for(int i =0; i<=n; i++){
        int j = s-i; // j will only get value i.e, i+j = s, (j = s-i)

        if(j >= 0 && j <= n) // check if j is the range of 0 to n
            maxAbs = std::max(maxAbs, abs(i-j)); // compare the maxvalue and the absolute of i-j till loop continue
    }
    std::cout << maxAbs << std::endl;
}


int main(){

    int t;
    std::cin >> t;
    
    while(t--){
        int n,s;
        std::cin >> n >> s;

        maxDiff(n,s);
    }

    return 0; 
}
```