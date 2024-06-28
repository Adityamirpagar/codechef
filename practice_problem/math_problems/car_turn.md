# Turn It

Chef is playing need for speed. Currently his car is running on  straight road with a velocity `U` meters per second and approaching a 90 degree turn which is `S` meters away from him. To succesfully cross the turn, velocity of the car when entering the turn must not excedd `V` meters per second.

The brakes of chef's car allow him to slow down with a deceleration (negetive acceleration) no exceeding `A` meters per second squared. Tell him whether he can cross the turn successfully.

The velocity `v` when entering the turn can be determined from Newton's 2nd law of motion i.e., $v^2 = U^2 + 2aS$. If the car is moving with a uniform acceleration `a`.

## Input 

* The first line of the input contains a single integer T denoting the number of test cases. The description of T tese cases follows

* The first and only line of each test case contains four space separated integers U, V, A, S.

## Output

For each test case, print a single line containing the string "Yes" if chef can cross the turn successfully or "No" if he cannot.

## Sample

```cpp
Input       |   Otput
3           |   
1 1 1 1     |   Yes
2 1 1 1     |   No
2 2 1 1     |   Yes
```

## Explanation

Test case 1: Since U = V = 1, chef does not need to brake and will be albe to turn successfully.

Test case 2: The samllest velocity chef's car can have eve with the maximum deceleration is $\sqrt{2 *2 - 2*1*1} = \sqrt{2}$, which is greater than the allowed velocity for safe turn.

Test case 3: The smallest velocity chef's car can have with the maximum deceleratin is again $\sqrt{2}$, which is smaller than the minimum allowed velocity for a safe turn.

---------------
---------------

# Solution

## Approach

Take input,

`u = currentVelocity` (current speed at which vehicle is traveling)

`v = maxTurnVelocity` (maximum speed at which vechicle can turn)

`a = maxDeceleration` (maximum deceleratin achieved by hiting brakes)

`s = distanceFromTurn` (distance from the turn)

create a variable `approachTurnVelocity`, the velocity of car when approaching can be calculates using $v^2 = u^2 + 2as$, or $v = \sqrt{u^2 + 2as}$, (a is negetive when deceleration) i.e, $v^2 = u^2 + 2(-a)s$, or $v^2 = u^2 - 2as$ or, $v = \sqrt{u^2-(2as)}$

`approachTurnVelocity` = $\sqrt{u^2 - (2as)}$

if the `approachTurnVelocity` is greater than maxTurnVelocity then chef cannot make turn hence print No, otherwise print Yes.

```cpp
if (approachTurnVelocity > maxTurnVelocity)
    print Yes
else
    print No
```

## Code 

```cpp
# include <iostream>
# include <cmath>

void turnIt (){
    double currentVelocity, maxTurnVelocity, maxDeceleration,distanceFromTurn;

    std::cin >> currentVelocity >> maxTurnVelocity >> maxDeceleration >> distanceFromTurn;

        double approachTurnVelocity = sqrt(pow(currentVelocity,2) - (2*maxDeceleration*distanceFromTurn));

        if (approachTurnVelocity > maxTurnVelocity)
            std::cout << "No\n";
        else
            std::cout << "Yes\n";
}

int main(){
    
    int t;
    std::cin >> t;

    while(t--){
        turnIt();
    }
    

return 0;
}
```