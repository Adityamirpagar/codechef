# Weight Balance

Chef weight before was `w1` kg (measured on the most accurate hospital machine) and after `M` months, when he measured his weight (on a regular sacle, which can be inaccurate), he got the reusult that his weight was `w2` kg `(w2 > w1)`.

Scientific research in all growing kids shows that their weiht increase by a value of between `x1` and `x2` kg (inclusive) per month, but not necessarily the same value each month. Chef assumes that he is a growing kid. Tell him weather his home scale could be giving correct results.


## Input 

* The first line of the input contains a single integer `T` denoting the number of test cases. The description of `T` test cases follows.

* The first and only line of each test case contains five space-separated integers `w1,w2,x1,x2,M`.


## Output

For each test case, print a single line containing the integer `1` if the result shown by the sacle can be correct or `0` if it cannot.

## Sample 

```
Input       |   Output
5           |       
1 2 1 2 2   |   0   
2 4 1 2 2   |   1   
4 8 1 2 2   |   1
5 8 1 2 2   |   1
1 100 1 2 2 |   0
```

## Explantion

**Test case 1**: Since the increase chef's weight is `2-1 = 1 kg`, and that is less than the minimum possible increse `1*2 = 2 kg`, the scale must be faulty.

**Test case 2**: Since the increase in chef's weight is `4-2 = 2 kg`, which is equal to the minimum possible increase `1*2 = 2 kg`, the scale is showing correct results.

**Test case 3**: Since the increase in chef's weith is `8-4 = 4 kg`, which is equal to the maximum possible increse `2*2 = 4 kg`, the scale is showing the correct results.

**Test case 4**: Since the increase in chef's weight `8-5 = 3 kg`, lies in the interval `[1*2, 2*2] kg`, the scale is showing the correct results.

**Test case 5**: Since the increase in chef's weight is `100 -1 = 99 kg` and that is more than the maximum possible increse `2*2 = 4 kg`, the weight balance must be faulty.

----------------
----------------

# Solution 

## Approach 

Take input,

`w1 = weightBefore`

`w2 = weightAfter`

`x1 = minGrowth`

`x2 = maxGrowth`

`M = months`


create a variable `weightGain` to store the weight gained by chef.

`weight = weightAfter - weightBefore`

create a variable `minWeightGain` and `maxWeightGain` to store the minimum and maxumum growth of a child in `M months` respectively.

`minWeightGain = minGrowth * months`

`maxWeightGain = maxGwowth * months`


Now, check if the `weightGain` is the range of `minWeightGain` and `maxWeightGain`, print `1` otherwise print `0`.

```cpp
if (minWeightGain <= weigthGain <= maxWeightGain)
    print 1
else
    print 0
```


## Code 

```cpp
# include <iostream>

void faulty_scale(){

    int weightBefore, weightAfter, minGrowth, maxGrowth, months;

    std::cin >> weightBefore >> weightAfter >> minGrowth >> maxGrowth >> months;

        int weightGain = weightAfter - weightBefore;
        int minWeightGain = minGrowth * months;
        int maxWeightGain = maxGrowth * months;

        if(minWeightGain <= weightGain && weightGain <=maxWeightGain)
            std::cout << 1 << std::endl;
        else    
            std::cout << 0 << std::endl;
}

int main(){

    int t;
    std::cin >> t;

    while(t--){
        faulty_scale();
    }
}
```

