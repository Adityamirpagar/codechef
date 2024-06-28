# Hoop Jump


You and your friend are playing a game with hoops. There are *N* hoops (Where *N* is odd) in a row. You jump into hoop 1, and your friend jumps into hoop *N*. Then you jump into hoop 2, and after that, your friend jumps into hoop *N-1*, and so on.

The process ends when someone canno make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.

## Input

* The first line containd and integer *T*, the number of test cases. The the test cases follows.

* Each test case contains a single line of input, a single integer *N*.

## Output

```cpp
Input  |   Output
-------|-------------
2      |               
1      |   1
3      |   2
```
## Explaination:

**Test case 1**: Since there is only 1 hoop, that's the only one to be jumped into.

**Test case 2**: The first palyer jumps into hoop 1. the second player jumps into hoop 3 and finaly the first player jumps into hoop 2. Then the second player cannot make another jump, so the process stops.

---------------------
---------------------

# Solution

## Approach 1 
Take input *n* (no. of hoops)
Take two variable *firstPlayer* and *secondPlayer*

firstPlayer = 0; (at the begining of the hoop)
secondPlayer = n; (at the end of the hoop)

create a loop that from 0 to n;
    increment firstPlayer
    decrement secondPlayer

check,  

if firsPlayer is less than secondPlayer
    print secondPlayer
else
    print firstPlayer

## Code 1

```cpp
#include <iostream>

void hoop(int n){

    // std::cout << ((n+1)/2) << std::endl;

    int firstPlayer = 0;
    int secondPlayer = n;

    for(int i = 0; i<n; i++){
        firstPlayer++;
        secondPlayer--;

        if(firstPlayer < secondPlayer){
            std::cout << secondPlayer << std::endl;
            break;
        }
        else{
            std::cout << firstPlayer << std::endl;
            break;
        }
    }
}

int main(){
    int t;
    std::cin >> t;
    
    while(t--){
        int n;
        std::cin >> n;
        hoop(n);
    }
}
```

## Approach 2

The input *n* is always odd, hence there will only be one hoop in the middle that either the player will enter. Thus,

take input *n*;

```psuedocode
print the middle of the *n*;
    print (n+1)/2; 
```

## Code 2

```cpp
#include <iostream>

void hoop(int n){

    std::cout << ((n+1)/2) << std::endl;
}

int main(){
    int t;
    std::cin >> t;
    
    while(t--){
        int n;
        std::cin >> n;
        hoop(n);
    }
}
```