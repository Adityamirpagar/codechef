# Richie rich

Chef aims to be the richest person in chefland by his new restaurant franchise. Currently, his assets are worth *A* billion dollars and have no liabilities. He aims to increse his assets by *X* billion dollars per year. 

Also all the richest people in Chefland are not palnning to grow and miantain their current worth.

To be the richest peron in chefland, he need to be worth at least *B* billion dollars. How many years will it take chef to reach his goal if his value increses by *X* billion dollars each year?

## Input format

* The first line contains an integer T, the number of test cases, then the test cases follow

* Each test case contains a single line of input, three integer *A, B, X*

## Output format

For each test case, output in a single line the answer to the problem

## Sample 1:

```cpp
Input       |   output
------------|---------
3           |   
100 200 10  | 10
111 199 11  | 8
190 200 10  | 1  
```

## Explaination:

**Test Case 1** : Chef need to increse his worth by *200 - 100 = 100* billion dollars and his increment per year being 10 billion dollar, so it will take him *100/10 = 10* years to do so.

**Test Case 2** : Chef need to increse his worth by *199 - 111 = 88* billion dollars and his increment per year being 11 billion dollars, so it will take him *88/11 = 8* years to do so.

**Test Case 3** : Chef needs to increase his worth by *200 - 190 = 10* billion dollars and his increment per year being 10 billion dollars, so it will take him *10/10 = 1* year to do so.

-------------------
-------------------

# Solution

## Approach

Take input 

`a = currentAssets`
`b = richestPersonAssets`
`x = yearOnYearIncrease`


to find the time needed to become rich i.e, make his `currentAssets` greater than or equal to `richestPersonAssets`, is equal to `currentAssets` minus `richestPersonAssets` divided by `yearOnYearIncrease`.

``` formula
timeNeedToBecomeRich = (currentAssets - richestPersonAssets)/yearOnYearIncrease

print timeNeedToBecomeRich

```
## code 

```cpp
# include <iostream>

void becomeRich(int currentAssets, int richestPersonAssets, int yearOnYearIncrease){

    int timeNeedToBecomeRich = abs(currentAssets - richestPersonAssets)/yearOnYearIncrease;

    std::cout << timeNeedToBecomeRich << std::endl;
}

int main(){
    int t;
    std::cin >>t;

    while(t--){
        
        int a,b,x;
        std::cin >> a >> b >> x;

        becomeRich(a,b,x);
    }
}
```