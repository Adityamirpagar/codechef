# Dish serving

Chef will have `N` guests in his house today. He wants to server at least one dish to each of the `N` guests. Chef can make two types of dishes. He needs *one fruit and one vegetable to make the first type of dish* and *one vegatable and one fish to make the second type of dish*. Now chef has `A` fruits, `B` vegetables, and `C` fishes in his house. Can he prepare at least `N` dishes in total?

## Input format

* First line will contain, `T`, number of testcases. Then the testcases follow.

* Each test case contains of a single line of input, four integers `N`, `A`, `B`, `C`

## Output format

For each test case, print `"YES"` if chef can prepare at least `N` dishes, otherwise print `"NO"`.

## Sample

```cpp
Input       | Output
------------|---------       
4           |          
2 1 2 1     | YES            
3 2 2 2     | NO           
4 2 6 3     | YES        
3 1 3 1     | NO        
```

## Explanation:

**Test case 1**: Chef prepares one dish of the first type using one fruit and one vegetable and another dish of the second type using one vegetable and one fish.

**Test case 2**: Chef prepares two dishes of the first type using two fruit and two vegetable. Now all the vegetables are exhausted, hence he can't prepare any other dishes.

**Test case 3**: Chef can prepare a total of 5 dishes, two dishes of the first type and three dishes of the second type.

-------------
-------------

# Solution 

## Approach 1

Take input ,

`n = guest`
`a = fuit`
`b = vegetable`
`c = fish`

also create variable , 

`firstDish` and `secondDish`

iterate the loop for each `guest`, 

```cpp
for(i = 0; i< guest ; i++)
```
check if `vegetable` and `fruit` are both greater than 0. and increment `firstDish`, and decrement `vegetable` and `fruit`

```cpp
if(fruit > 0 and vegetable > 0)
    fistDish++
    vegetable--
    fruit--
```
else if, check `vegetable` and `fish` are both greater than 0, and increment `secondDish`, and decrement `vegetable` and `fish`.

```cpp
else if (fish > 0 and vegetable > 0)
    secondDish++
    vegetable--
    fish++
```

Now, check if sum of `firstDish` and `seconDish` is greater than or equal to `guest`, print `"YES"`, otherwise print `"NO"`

```cpp
if ((firstDish + secondDish) >= guest)
    print "YES"  
else
    print "NO"
```

## Code 1

```cpp
# include <iostream>

void serving(int guest, int fruit, int vegetable, int fish){

    int firstDish = 0, secondDish = 0;

    for(int i =0; i<guest; i++){
        if(vegetable >0 && fruit > 0){
            firstDish++;
            vegetable--;
            fruit--;
        } else if(vegetable >0 && fish > 0){
            secondDish++;
            vegetable--;
            fish--;
        }
    }

    // int count = firstDish+ secondDish;
    // if (count >= guest) 
    //     std::cout << "YES\n"; 
    // else 
    //     std::cout << "NO\n";
    
    // or
    
    std::cout <<  (((firstDish+secondDish) >= guest)?"Yes\n":"NO\n");
}

int main(){
    int t;
    std::cin >>t;

    while(t--){
        int n,a,b,c;
        std::cin >> n >> a >> b >> c;    
        serving(n,a,b,c);
    }    
 return 0;
}
```
* Time complexity (0)n

## Approach 2

Take input ,

`n = guest`
`a = fuit`
`b = vegetable`
`c = fish`

check if the supplies are enough for all the guest or not,

first dish needs one fruit and one vegetable.
second dish needs one fish and one vegetable.


both the dishes need at least one vegetable, thus vegetable should always be greater than or equal to guest.

each dish needs 2 distinct ingredient fish and fruit in either of the dish, hence fish+fruit should be greater than guest with vegetable

```cpp
if(((fish+fruit)>= guest) && vegetable >= guest)
    print "YES"
else 
    print "NO"
```

## Code 2

```cpp
# include <iostream>

void serving(int guest, int fruit, int vegetable, int fish){

    if((fruit+fish) >= guest && vegetable >= guest)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}

int main(){
    int t;
    std::cin >>t;

    while(t--){
        int n,a,b,c;
        std::cin >> n >> a >> b >> c;    
        serving(n,a,b,c);
    }    
 return 0;
}
```
* Time complexity = (0)1

------------------------