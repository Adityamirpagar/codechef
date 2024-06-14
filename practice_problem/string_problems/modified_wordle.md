# Modified Wordle

There is hidden word *S* and a guess word *G*, both of length 5.

Chef defines a string *M* to determine the correctness of the guess word. For the i<sup>th</sup> index:

* If the guess at the i<sup>th</sup> index is correct, the i<sup>th</sup> character of *M* is *G*.
* If the guess at the i<sup>th</sup> index is incorrect, the i<sup>th</sup> character of *M* is *B*.

Given the hidden word *S* and guess *G*, determine string *M*.

## Input Format

* First line will contain *T*, number of test cases. Then the test cases follows.

* Each test case contains two lines of input
    * First line contain the string *S* - the hidden word.
    * Second line contains the string *G* - the guess word.

## Output Format

For each test case, print the value of string *M*.

## Sample 1:

```CPP
Input   |  Output
--------|----------
3       |          
ABCDE   |  
EDCBA   |  BBGBB
ROUND   |   
RINGS   |  GBBBB
START   |  
STUNT   |  GGBBG
```

## Explanation

**Test case 1**: Given string *S* = *ABCDE* and *G* = *EDCBA*. The string *M* is:
* Comparing the first indices *A* != *E*, thus, *M[1]* = *B*.
* Comparing the second indices *B* != *D*, thus, *M[2]* = *B*.
* Comparing the third indices *C* == *C*, thus, *M[3]* = *G*.
* Comparing the fourth indices *D* != *B*, thus, *M[4]* = *B*.
* Comparing the fifth indices *E* != *A*, thus, *M[5]* = *B*.

    * Thus, *M* = *BBGBB*

**Test case 2**: Given string *S* = *ROUND* and *G* = *RINGS*. The string *M* is:
* Comparing the first indices *R* == *R*, thus, *M[1]* = *G*.
* Comparing the second indices *O* != *I*, thus, *M[2]* = *B*.
* Comparing the third indices *U* != *N*, thus, *M[3]* = *B*.
* Comparing the fourth indices *N* != *G*, thus, *M[4]* = *B*.
* Comparing the fifth indices *D* != *S*, thus, *M[5]* = *B*.

    * Thus, *M* = *GBBBB*

**Test case 3**: Given string *S* = *START* and *G* = *STUNT*. The string *M* is:
* Comparing the first indices *S* == *S*, thus, *M[1]* = *G*.
* Comparing the second indices *T* == *T*, thus, *M[2]* = *G*.
* Comparing the third indices *A* != *U*, thus, *M[3]* = *B*.
* Comparing the fourth indices *R* != *N*, thus, *M[4]* = *B*.
* Comparing the fifth indices *T* == *T*, thus, *M[5]* = *G*.

    * Thus, *M* = *GGBBG*

-----------------
-----------------

# Solution

## Approach

We know the size of both the strings *S* and *G* is same, so we'll use for loop from 0 to N (length of array), at each index i we'll check if the *S[i] == G[i]*.

If *S[i]* == *G[i]*, then M[i] = *G*.
else if *S[i]* != *G[i]*, then *M[i]* = *B*.

And finally print the string M.

```cpp
# include <iostream>

int main(){

   int t;
   std::cin >> t;

   while(t--){
      std::string s,g,m;
      std::cin >> s >> g;

      // loop through lenght of the array
      for(int i =0; i< s.length(); i++){
         //check if s[i] is equal to g(i)
         if(s[i] == g[i])
            m+= 'G'; // if true
         else
            m+= 'B'; // if false
      }

      std::cout << m << std::endl;
   }

return 0;
}
```