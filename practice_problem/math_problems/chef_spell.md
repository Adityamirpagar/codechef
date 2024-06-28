# Chef and spell

Chef has three spells. Their powers are `A`, `B`, and `C` respectivelly. Initially, chef has `0` hit points, and if he uses a spell with power `P`, then his number of hit points increses by P.

Before going to sleep, chef wants to use exactly two spells out of thses three. Find the maximum number of hit points chef can have after using the spells.

## Input format

* First line of the input contains a singlel integer `T` denoting the number of test cases. Then the test cases follows

* The first and only line of each test case contains three space-separated integers `A`, `B`, `C`.

## Output Format

For each test case, print a single line containing one integer- the maximum number of hit points.


## Sample

```cpp 
Input       |   Output  
------------|-----------
2                       
4 2 8       |   12  
10 14 18    |   32  
```

## Explanation

Test case 1: Chef has three possible options:

* use the first and second spell and have 4+2 = 6 hitpoints
* use the second and thrid spell and have 2+8 = 10 hitpoints
* use the first and third spell and have 4+8 = 12 hitpoints

chef should choose the third option and use the spell withe power 4 and 8 to have 12 hitpoints

Test case 2: Chef should use the spell with power 14 and 18.

-----------------
-----------------

# Solution

## Approach

Create a container (array) for storing the 3 `spellValue` (power of each spell).

```cpp
    vector<int>spellStorage(3);
```

sort the container in desending order. The largest and second largest `spellValue` will be at index 0 and 1 respectively.

```cpp
    sort(spellStorage.begin(),spellStorage.end(), std::greater<>());
```

Now add the element at `index[0]` and `index[1]`, and print the output.

```
    cout << spellStorage[0] + spellStorage[1];
```

## Code

```cpp

#include <iostream>
#include <vector>
#include <algorithm>

void chefSpell(){

    // value(power) of each spell
    int spellValue;

    // container for storing and sorting spellValue
    std::vector<int>spellStorage(3);

    // storing spellValue in a container
    for(int i =0; i< spellStorage.size(); i++){
        std::cin >> spellValue;
        spellStorage[i] = spellValue;
    }

    // sort the container in desending order
    sort(spellStorage.begin(), spellStorage.end(), std::greater<>());

        // largest and second largest value of array will be at 0 and 1 index repectively

        // print the sum of largest and second largest value as hitpoint  
        std::cout << spellStorage[0] + spellStorage[1]  << std::endl; 
}

int main(){

    int t;
    std::cin >> t;

    while(t--){
        chefSpell();
    }
}
```

