# Count the Holidays

A particular month has 30 days, numbered from 1 to 30. Day 1 is Monday, and the usual 7-day is followed. So day 2 is Tuesday, day 3 is Wednesday, and so on.

Every Saturday and Sunday is a holiday. 
There are *N* festival days, which are also holidays.

Note: That it is possible for a festival day to occur on a Saturday or Sunday.

You are given the dates of the festival. Determine the total number of holiday in this month.

## Input format

* The first line of input contains a single integer *T*, denoting the number of test cases. The description of *T* test cases follows.

* The first line of each test case contains an integer *N* denoting the number of festival days. 
* The second line of each test case contains *N* distinct space-seperated integers *A1,A2.... An*, denoting the festival days. Note that the *Ai* are not necessarily given in sorted order.

## Output Format

For each test case, output a new line containing the total number of holiday.

## Sample 1:

```cpp
input       |    Output
------------|-------------                                
3           |           
2           |                                    
5 7         |     9                
3           |           
23 1 6      |    10     
2           |           
13          |     8     
```

## Explanation:

**Test case 1**: Days 6,13,20,and 27 are Saturdays, and days 7,14,21,28 are Sundays. The festival fall on days 5 and day 7, but day 7 is already a Sunday. This gives us 9 holiday in total days 5,6,7,13,14,20,21,27,28.

**Test case 2**: Days 6,13,20,and 27 are Saturdays, and days 7,14,21,28 are Sundays. The festival fall on the day 1, day 6, and day 23. This gives us 10 holiday in total days 1,6,7,13,14,20,21,23,27,28.

**Test case 3**: Days 6,13,20,and 27 are Saturdays, and days 7,14,21,28 are Sundays. The only festival day is 13, which is already a holiday. This gives us 8 holidays in total days 6,7,13,14,20,21,27,28

-----------------
-----------------

# Solution

## Approach

We know the total weekend (i.e., Saturdays and Sundays) are 8. So we just have to check if the input day is a part of the weekends or not. We can do this by dividing the input number with 7, and if the remainder is 0 or 6, then it is part of the weekend. If the remainder is not equal to 0 or 6 then we'll increment the weekend by 1, because the number (day) is not on Saturday or Sunday.
    We'll create a variable named weekend and assign it 8. (representing the holidays on Saturday and Sunday)

> If dividing the number by 7 gives us remainder 6, then the number falls on Saturday which is a holiday.
> And if dividing the number by 7 gives us remainder of 0, then the number falls on Sunday which is also a holiday.
> We'll only increment weekend by 1, if the given number when divided by 7 will not give 6 or 0, as a remainder. (because remainder 6 and 0 implies that the number (day) falls on Saturday or Sunday.)

## Code 

```cpp

# include <iostream>

int main() {
    
    int t;
    std::cin >> t;
    
    while(t--){
        
        int n;
        std::cin >> n;
        
        int arr[n];
        
        for(int i =0; i<n; i++) 
            std::cin >> arr[i];
            
        int weekend = 8;
        
        for(int i = 0; i<n; i++){
            
            if ((arr[i]%7 != 6) && (arr[i]%7 != 0))
                weekend++;
        }
        
        std::cout << weekend << std::endl;
        
    }
    
    
return 0;
}

```