# Chef and Happy string

chef has a string *S* with him consisting of only lowercase alphabets.

chef is happy if the string contains **contiguous substring** of length **strictly greater** than 2 in which all its characters are vowels.

Determine whether chef is happy or not.

NOTE: in english alphabet, vowels are a,e,i,o,u.

## Input Format

* First line will contain *T*, number of test cases. Then the test case follow.
* Each test case contains of a single line of input, a string *S*.

## Output Format

For each test case, if chef is happy, print HAPPY else print SAD.

## Sample 1:

```cpp
Input        |  Output
-------------|-----------
4            |          
aeiou        |  HAPPY
abxy         |  SAD
aebcdefghij  |  SAD
abcdeeafg    |  HAPPY
```

## Explanation:

**Test case 1**: Since the string *aeiou* is a contiguous substring and consists of all vowels and has a length >2, chef is happy.

**Test case 2**: Since none of the contiguous substring of the string consist of all vowel and have a length > 2, chef is sad.


**Test case 3**: Since none of the contiguous substring of the string consist of all vowel and have a length > 2, chef is sad.


**Test case 1**: Since the string *eea* is a contiguous substring and consists of all vowels and has a length >2, chef is happy.

-----------------------
-----------------------

# Solution

## Approach

We create a variable mood and assign it value 0, and after comparison we'll change the mood value to 1.

We'll use for loop from 0 to length of the array, with each iteration we'll check if *S[i] && S[i+1] && S[i+2] == 'a' || 'e' || 'i' || 'o' || 'u'*.

```cpp
# include <iostream>

int main(){

   int t;
   std::cin >> t;

   while(t--){
      std::string s;
      std::cin >> s;

      int mood = 0;
      for(int i =0; i<s.length(); i++){
         if( s[i] =='a'|| s[i] =='e'|| s[i] =='i'|| s[i] =='o'|| s[i] =='u'){
            if (s[i+1] =='a'|| s[i+1] =='e'|| s[i+1] =='i'|| s[i+1] =='o'|| s[i+1] =='u'){
               if(s[i+2] =='a'|| s[i+2] =='e'|| s[i+2] =='i'|| s[i+2] =='o'|| s[i+2] =='u'){
                  mood = 1;
               }
            }
         } 
      }
      if (mood == 1)
         std::cout << "HAPPY\n";
      else
         std::cout << "SAD\n";
   }

return 0;
}
```