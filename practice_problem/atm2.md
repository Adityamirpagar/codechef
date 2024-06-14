# ATM Machine

## Problem Statement

There is an ATM. Initially, it contains a total of *K* units of money. *N* people (numbered 1 trough *N*) want to withdraw money; for each valid *i*, the *i<sup>th</sup>* person wants to withdraw *A*, unit of money.

The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else.

For each person, determine whether they will get the required amount of money or not.

## Input 

* The first line of the input contains a single *T* denoting the number of test cases.
* The first line of each test case contains two space-separated integers *N* and *K*.
* The second line contains *N* space-separated integers *A1, A2, A3....,An*.

## Output

For each test case, print a single line containing a string with length *N*. For each valid *i*, and *i<sup>th</sup>* person will successfully withdraw their money or '0' otherwise.

## Sample 1:

```cpp
Input      |   Output
-----------|-----------
2          |           
5 10       |           
3 5 3 2 1  |   11010
4 6        |           
10 8 6 4   |   0010
```

## Explanation:

**Test case 1**: The ATM initially contain 10 units of money. The first person comes and withdraw 3 units, so the amount remaining in the machine is 7. Then the second person withdraws 5 units and the remaining amount is 2. The third person wants to withdraw 3 units, but since there are only 2 units of money in the machine, it throws an error and the third person must leave without getting anything. Then the fourth person withdraw 2 units, which leaves nothing in the machine, so the last person does not get anything.

**Test case 2**: the ATM initially contains 6 units of money, so it cannot give anything to the first and second person. When the third person come, it gives them all the money it has, so the last person does not get anything either.

--------------
--------------

# Solution

## Approach 

Create 2 variables, amount of money *K* and Number of people *N*

Create a loop from 0 to *N*, inside the loop create another variable *withdraw* and take input, 

At each iteration *i* check if *withdraw* is less than or equal to *K* (i.e. *withdraw* should be strictly greater than K, to complete the transaction)

Subtract *withdraw* from *K* and assign new value to *K*, Also print 1 at the screen (it indicates the transaction is successful). 
    
Otherwise, print 0 on the screen (which indicates the transaction is not successful as there was not enough money.)

```cpp
# include <iostream>

int main() {
   int t;
   std::cin >> t;

   while(t--){
      int n,k;
      std::cin >> n >> k;

      for(int i =0; i<n; i++){
         int withdraw;  
         std::cin >> withdraw;   // take input of withdraw amount

         // if amount entered is less than or equal to k
         if(withdraw <= k){   
            k -= withdraw;
            std::cout << 1;      // transaction successful
         }
         else
            std::cout << 0;      // transaction unsuccessful (not enough money)
      }
      std::cout << std::endl;    // change line after output of each task.
   }
return 0;
}
```
