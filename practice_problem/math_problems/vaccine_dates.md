# Vaccine Dates

Chef has taken his first dose of vaccine *D* days ago. He may take the seond dose no less than *L* days and no omore than *R* days since his first dose.

Determine if chef is too early, too late, or in the correct range for taking his second dose.

## Input format

* First line will contain *T*, number of testcases. Then the testcases follow.

* Each testcase contains of a single line of input, three integers *D,L,R*.

## Outpur format

For each test case, print a single line containing one string - "Too early" if it's too early to take the vaccine, "Too late" if ts too late to take the vaccine, "Take second dose now" if it's the correct time to take the vaccine.

## Sample 1:

```cpp
Input           |   Output
----------------|----------
4               |           
10 8 12         |   Take second dose now
14 2 10         |   Too late
4444 5555 6666  |   Too early
8 8 12          |   Take second dose now
```

## Explaination:

**Test case 1**: The second dose need to tkae withing 8 to 12 days and since the day 10 lies in this range, we can take the second dose now.

**Tese case 2**: The second dose need to be take within 2 to 10 days since day 14 lies after this range, it is too late now.

**Test case**: The second dose needs to be take within 5555 to 6666 days and since the Days 4444 lies prior to this range, it is too early now.

-------------
-------------

# Solution

## Approach 

Take the input 

`d = firstDoseTakenDaysAgo`
`l = seondDoseMinDays`
`r = secondDoseMaxDays`

```
check 

if firstDoseTakenDaysAgo is in range of secondDoseMinDays and secondDoseMaxDays 
    print "Take second dose now"
else if firstDoseTakenDaysAgo is less than secondDoseMinDays
    print "Too Early"
else 
    print "Too late" for other cases
```


same as this 

```pseudocode
    if the (l<=d && d<=r)
        "Take second dose now"
    else if (d < l)
        "Too Early"
    else 
        "Too Late"
```

## Code 

```cpp
#include<iostream>

void vaccineRemainder(int FirstDoseTakenDaysAgo, int secondDoseMinDays, int secondDoseMaxDays){

        // l <= d <= r
        if(secondDoseMinDays <= FirstDoseTakenDaysAgo && FirstDoseTakenDaysAgo <= secondDoseMaxDays)
            std::cout << "Take second dose now \n";
        // d < l
        else if (FirstDoseTakenDaysAgo < secondDoseMinDays)
            std::cout << "Too Early \n";
        // d > r
        else 
            std::cout << "Too Late \n";
}

int main() {
   int t;
   std::cin >> t;

   while (t--){
        int d,l,r;
        std::cin >> d >> l >> r;

        vaccineRemainder(d,l,r);
   }
return 0;
}
````