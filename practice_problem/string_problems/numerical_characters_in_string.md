# Numerical characters in strings

You are given an integer A

Can the digits of *A*, be rearranged such that the resulting number is divisible by 5?

## Input Format

* The first line will contain *t*- the number of test cases. Then the test cases follow.

* Each line of the test case consists of a single line of input - the number *A*.

## Output Format

* For each test case output "YES" if the number A can be rearranged such that it becomes divisible by 5, and "NO" otherwise.

## Sample 1:

```cpp
input    |  output
---------|--------                
3        |                    
12345    |   YES
11011    |   YES
12346    |   NO
```
## Explanation:

**Test case 1**: *12345* is already divisible by 5- Hence output is YES.

**Test case 2**: *11011* can be rearranged as *11110*, which is divisible by 5- Hence the output is YES

**Test case 3**: No arrangement of *12346* makes it divisible by 5- Hence output is NO.

-------------
-------------

# Solution

## Approach

We know that if any number has 0 or 5 as unit digit (end digit), then that number is divisible by 5.

We use this for solve our problem, the problem simply ask us that is it possible to rearrange the given input such that it is divisible by 5.

To determine if a string is divisible by 5, we only need to check if it contains 0 or 5. If either of them is present, then it's possible to rearrange the string in such a way that it's divisible by 5. Otherwise, it's not possible to rearrange the string in a way that it's divisible by 5.

## Code

```cpp
# include <iostream>

int main(){

   int t;
   std::cin >> t;

   while(t--){
      std::string s;
      std::cin >> s;
      
      bool divisible;

        // iterating through the string 
      for(int i =0; i<s.length(); i++){
            //cheking if the s[i] elment is 0 or 5
         if(s[i] == '0' || s[i] == '5'){
            divisible = true;
            break; // breaking the loop so that divisible vallue does not change
         }
         else
            divisible = false;
      }

        // printing the output to the console
      if(divisible == true)
         std::cout << "YES\n";
      else
         std::cout << "NO\n";

   }
return 0;
}
```
