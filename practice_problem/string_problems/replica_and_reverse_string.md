# Create a replica string

You are given a string *S* consisting of only **lowercase** English characters.
You need to generate 2 separate string *A* and *B*

* String *A* need to be an exact replica of string *S* - it has to be created by starting with an empty string.
* String *B* is **reverse** of string *S*.

## Input Format

* The first line will contain *t*- the number of test cases. Then the test cases follow
* Each line of the test case consists of a single line of input - the string *S*

## Output Format

* Each test case will contain 2 lines of output
    * Line 1: Output string *A*
    * Line 2: Output string *B*

## Sample 1:

```cpp
Input   | Output
--------|-------
3       |
abcde   |abcde
        |edcba
        |
aaaaa   |aaaaa
        |aaaaa
        |
aaaab   |aaaab
        |baaaa
```

## Explanation:

**Test case 1**: *S* is *abcde*

* *A* becomes *abcde*
* *B* becomes *edcba*

**Test case 3**: *S* is *aaaab*

* *A* becomes *aaaab*
* *B* becomes *baaaa*

---------------
---------------

# Solution

## Approach

String in CPP act as an array, so we can use some methods to get its size and choose any element in a string just like an array.

*Condition one is, that we need to create exact replica of string *S* and assign it to an empty string *A*.

As we know that string act like array, so there is method `length()`, that will return the size of array. We will create a for loop that goes through 0 to `length()` of the string *S*, and each element to an empty string *A*. Example given below:

```cpp
//
for(int i =0; i< s.length();i++)
    a+=s[i];
```

* Condition two is, we need to reverse the string *S* an assign it to another empty string *B*.

For this we'll just use for loop from `length()` of the string *S*, to 0. Each time decrementing the length of string by 1. Example given below:

```cpp
for(int i = s.length(); i>=0; i--)
    b+=s[i];
```

## Code

```cpp
# include <iostream>
# include <string>

int main() {
    
    int t;
    std::cin >> t;
    
    while(t--){
        
        std::string s,a,b;
        std::cin >> s;
        
        // copying string S to A
        for(int i =0; i< s.length(); i++)
            a += s[i];
            
        // reversing the string S and assigning it to string B
        for(int i = s.length()-1; i>=0; i--)
            b+= s[i];
        
        std::cout << a << " \n"<< b << std::endl;
    }
    
return 0;
}
```