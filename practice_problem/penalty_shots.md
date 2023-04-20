# Task

It's the soccer match finals in Chefland and as always it has reached the penalty shootouts.

* Each team is given 5 shots to make and the team scoring a goal on the maximum number of the shots wins the game.
* If both the team's scores are equal, then the game is considered a draw, and we would have 2 champions.

Given ten integers `A1,A2,......,A10`, determine the winner or find if the game ends in a draw.

* The odd indexed integer `(A1,A3,A5,A7,A9)` represent the outcome of the shots made by team 1.

* The even indexed integer `(A2,A4,A6,A8,A10)` represent the outcome of the shots made by team 2.

Note that here `Ai = 1` indicates that it's a goal and, `Ai = 0` indicates a miss.

## Input Format

* The first line of input contains single integer `T` denoting the number of the test cases. The description of `T` test cases follows.

* The first and only line of each test case contains ten space-separated integers `A1,A2,......,A10.`

## Output Format

For each test case, print a single line containing one integer - `0` if the game ends in a draw or, `1` if the first team wins or, `2` if the second team wins.

## Sample 1:

```cpp
Input                   | output
------------------------|--------
4                       |
0 0 0 0 0 0 0 0 0 0     |   0
0 0 0 0 0 0 0 0 0 1     |   2
1 0 1 0 0 0 0 0 0 0     |   1
1 1 1 1 1 1 1 1 1 0     |   1
```


## Explanation

* **Test case 1:** Not team scores any goal, so the game ends in a draw.

* **Test case 2:** The second team is able to score in their final shot, while the first has scored `0` goals and hence the second team wins.

* **Test case 3:** The first team is successfully able to make their first shots count and whereas the second team has not scored any goals. Therefore, the first team wins.

* **Test case 4:** Team `2` misses their final shot and hence team 1 wins the game with the final score of `5-4`.

------------------------------------------------------------

# Solution 

## Approach 1 (Simplest but hard coded)

We know,
The array size is fixed at `10`.
Team 1 is placed at odd positions in the array and,
Team 2 is placed at even positions in the array.

So,
we can just hard code the addition of the elements in the array. e.g., 
`team 1 = a1 + a3 + a5 + a7 + a9`
`team 2 = a2 + a4 + a6 + a8 + a10`

And find the which team `(team 1 or team 2)` has the maximum no. of score.

```cpp
# include <iostream>

int main() {
    
    int t;
    std::cin >> t;
    
    while(t--){
        
        int a[10]; // declaring the array
        int n = 10; // size of the array
        
        
        // taking elements as an input form the user
        for(int i = 0; i<n; i++)
            std::cin >> a[i];
        
        // remmber that the array starts from 0, so, first element is a[0]
        int team_1 = a[0] + a[2] + a[4] + a[6] + a[8]; 
        int team_2 = a[1] + a[3] + a[5] + a[7] + a[9];
        
       /* just for conforming the scores
        for(auto i : a)
            std::cout << i << " ";
        std::cout << std::endl;
        */
        
        if (team_1 > team_2)
            std::cout << 1 << std::endl;
        else if (team_2 > team_1)
            std::cout << 2 << std::endl;
        else
            std::cout << 0 << std::endl;
        
    }
return 0;
}

```

```cpp
Input                   | output
------------------------|--------
4                       |
0 0 0 0 0 0 0 0 0 0     |   0
0 0 0 0 0 0 0 0 0 1     |   2
1 0 1 0 0 0 0 0 0 0     |   1
1 1 1 1 1 1 1 1 1 0     |   1
```

"I got confused because of the array indexing in the above code. Team 1 is odd, but the array indexes are even. To get over with the confusion I'll utilize the 2nd approach."


## Approach 2

Place any element on the `a[0]`, and start from `a[1]....a[10]`, hence the array size will also increase by `1`. But this will resolve the array indexing confusion (at least for me)

```cpp
# include <iostream>

int main() {
    
    int t;
    std::cin >> t;
    
    while(t--){
        
        int n = 10; //size of the array
        int a[n+1]; // declaring the array
        
        a[0] = 10;
        n++;
        std::cout <<"Size of the array is: " << n << std::endl;
        
        // taking elements as an input form the user
        for(int i = 1; i<n; i++)
            std::cin >> a[i];
        
        int team_1 = a[1] + a[3] + a[5] + a[7] + a[9];
        int team_2 = a[2] + a[4] + a[6] + a[8] + a[10];
        
        /* just for confoming the scores
        for (int i =1; i<n; i++)
            std::cout << a[i] << " ";
        std::cout << "\n";
        */
        
        if (team_1 > team_2)
            std::cout << 1 << std::endl;
        else if (team_2 > team_1)
            std::cout << 2 << std::endl;
        else
            std::cout << 0 << std::endl;
            
        
    }
    
return 0;
}

```

```cpp
Input                   | output
------------------------|--------
4                       |
0 0 0 0 0 0 0 0 0 0     |   0
0 0 0 0 0 0 0 0 0 1     |   2
1 0 1 0 0 0 0 0 0 0     |   1
1 1 1 1 1 1 1 1 1 0     |   1
```


Now if we want to make code more dynamic i.e, it can handle any length of the array and can calculate the outcome. We can do it, just iterating through the length of the array and checking if the element at that index is `1` or `0`.
Suppose, if we are at an even index and element at that index is `1`,then we'll increment `team_1` by `1`. Else, we are at odd index, and we'll increment `team_2` by `1`.

At last, we'll compare the score of `team_1` and `team_2`. Whoever's score is higher that team wins, if the scores are same than it's a draw.

```cpp
# include <iostream>

int main(){
    
    int t;
    std::cin >> t;
    
    while(t--){
        
        int n = 10;
        int arr[n+1];
        arr[0] = 10;
        n++;
        
        for (int i =1; i< n; i++)
            std::cin >> arr[i];
            
        int team_1 =0, team_2 =0;
        
        for(int i =1; i< n; i++){
            
            if(i%2 == 0){       // even index
                if(arr[i] == 1)
                    team_2++;
            }
            else{               // odd index
                if(arr[i] == 1)
                    team_1++;
            }
            
        }
        
        if(team_1 == team_2)
            std::cout << "0\n";
        else if(team_1 > team_2)
            std::cout << "1\n";
        else 
            std::cout << "2\n";
            
    }
    
return 0;
}

```


```cpp
Input                   | output
------------------------|--------
4                       |
0 0 0 0 0 0 0 0 0 0     |   0
0 0 0 0 0 0 0 0 0 1     |   2
1 0 1 0 0 0 0 0 0 0     |   1
1 1 1 1 1 1 1 1 1 0     |   1
```

All three codes are valid and return the same output, but it depends on the time and space complexity, if there is a time limit then 1st approach is good because it is hard coded and uses no loops to check for winning team.

If there is no time limit and the array size is changing then 3rd approach is good enough (not the best).