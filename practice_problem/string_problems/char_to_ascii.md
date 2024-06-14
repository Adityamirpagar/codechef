# Create a list of ORD (ASCII) values of a string

You are given a string *S*, *S* can contain any alphanumeric character *[0-9]*, *[a-z]* and *[A to Z]*.

Create new array *A*, as follows:

* For each character of string *S* - append its ORD (ordinal) values or ASCII value to the list *A*

Your need to generate and output the values in the array *A*.

## Input Format

* The first line will contain *t*- the number of test cases. Then the test cases follow

* Each line of the test case consists of a single line of input- the string *S*

## Output Format

* Output the list *A*

## Sample 1:

```cpp
input    |    output
---------|------------
3        |           
abc      |   97 98 99
MXZ      |   77 88 90
123      |   49 50 51
```

## Explanation

**Test case 1**: Ordinal value of *abc* is 97 98 99.

**Test case 2**: Ordinal value of *MXZ* is 77 88 90.

**Test case 3**: Ordinal value of *123* is 49 50 51.

-------------
-------------

# Solution

## Approach 

The above problem can be solved using 2 method:

1. Using C++ typecasting

In this method we'll typecast the string element into the integers, and append them into new array. And print them on the console. Example

```cpp
string s = "abc";
int a[s.length()]; // assigning length of string to array size 

for(int i =0; i< s.length(); i++){
   a[i] = int(s[i]);
}

for(int i : a)
   std::cout << i << " ";
std::cout << std::endl;
```

2. Using C style output (using format specifier)

In this method we'll use `printf()` function, to print the output to console. But rather using character `%c` specifier we'll use decimal `%d` specifier.

Because C does not have string data type, it uses arrangement of characters to represent string. And in C characters are stored as their ordinal or ASCII value. Hence, when we use `printf()` and use decimal `%d` specifier, it'll convert the character into its ordinal ASCII value. Example

```cpp
string s = "abc";
for(int i=0; i< s.length(); i++)
    printf("%d " ,s[i]);
std::cout << std::endl;
```

Both the methods will return the exact output.

## Code

```cpp

# include <iostream>

int main(){

   int t;
   std::cin >> t;

   while(t--){
      std::string s;
      std::cin >> s;

/*       usin c-style output
      for(int i=0; i< s.length(); i++)
         printf("%d " ,s[i]);
      std::cout << std::endl;
*/    
      // using typcasting
      int a[s.length()];

      for(int i =0; i< s.length(); i++){
         a[i] = int(s[i]);
      }

      for(int i : a)
         std::cout << i << " ";
      std::cout << std::endl;
   }

return 0;
}
```

