# Programming languages

Chef is a software developer, so he has to switch between different languages sometimes. Each programming language has some features, which are represented by integers here.

Currently, chef has to use a language with two given features `A` and `B`. He has two options -- switching to a language with two features A1 and B1, or to a language with two feature A2 and B2. All four feature of these two languages are pairwise distince.

Tell chef whether he can use the first language, the seconde language or neither of these languages (if no single language has all the required features).

## Input format

* The first line contains a single integer `T` denoting the number of test cases. Then the testcases follows

* The first and only line of each test case contains six space-separated integears `A`, `B`, `A1`, `B1`, `A2`, `B2`.

## Outpur format

For each test case, print a single line containing the integer `1` if chef should switch to the first language, or `2` if chef should swith to the second language, or `0` if chef cannot switch to either language.


## Sample

```cpp
Input           | Output
----------------|-----------
3               |       
1 2 2 1 3 4     |   1           
3 4 2 1 4 3     |   2       
1 2 1 3 2 4     |   0
```

## Explanation

**Test case 1**: The first language has the required features -- feature 1 and 2.

**Test case 2**: The second language has the required features -- feature 3 and 4.

**Test case 3**: Neither language has both features 1 and 2.

-------------
-------------

# Solution


## Approach

Take input,

`a = featureA`
`b = featureB`

FirstLanguageFeature

`a1 = featureA1`
`b1 = featureB1`

secondLanguageFeature

`a2 = featureA2`
`b2 = featureB2`


check, if features needed `(A)` and `(B)` are in the are in both first language feature and second language feature.

```cpp
if (featureA is in FirstLanguageFeature) and (featureB is in FirstLanguageFeature)
    print 1
else if (featureA is in secondLanguageFeature) and (featureB is in secondLanguageFeature)
    print 2
else
    print 0

```   

## Code

```cpp
# include <iostream>

void progammingLangugage(int featureA, int featureB, int featureA1, int featureB1, int featureA2, int featureB2){

    if((featureA == featureA1 || featureA == featureB1) && (featureB == featureA1 || featureB == featureB1))
        std::cout << 1 << std::endl;
    else if((featureA == featureA2 || featureA == featureB2) && (featureB == featureA2 || featureB == featureB2))
        std::cout << 2 << std::endl;
    else   
        std::cout << 0 << std::endl;

}

int main(){

    int t;
    std::cin >> t;
    while(t--){

        int a,b,a1,b1,a2,b2;
        std::cin >> a >> b >> a1 >> b1 >> a2 >> b2;

        progammingLangugage(a,b,a1,b1,a2,b2);
    }

}
```
