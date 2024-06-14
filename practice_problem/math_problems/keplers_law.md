# Kepler's Law

Kepler's law state that the planets move around the sun in elliptical orbit with the sun at one focus.

Kepler's 3rd law is The law of periods, according to which:

* The **square of the time period** of the planet is directly proportional to the **cube of the semimajor axis** of its orbit.

You are given the Time periods (*T1, T2*) and semimajor Axis (*R1, R2*) of two planets orbiting the same star.

Please determine if the law of periods is satisfied or not, i.e, if the [constant of proportionality](https://en.wikipedia.org/wiki/Proportionality_(mathematics)) of both planets is the same.

## Input Format

* The first line of input contains a single integer *T*, denoting the number of test cases.

* Each test case consists a single line of input, containing four space-separated integers *T1,T2,R1,R2*.

## Output Format

For each test case, output a single line containing one string - "YES" or "NO".

## Sample 1:

```cpp
Input    |  Output
---------|----------
3        |          
1 1 1 1  |  YES
1 2 3 4  |  NO
1 8 2 8  |  YES
```

## Explanation:

* **Test case 1**: 1<sup>2</sup>/1<sup>3</sup> = 1<sup>2</sup>/1<sup>3</sup>
* **Test case 1**: 1<sup>2</sup>/2<sup>3</sup> != 3<sup>2</sup>/4<sup>3</sup>
* **Test case 1**: 1<sup>2</sup>/8<sup>3</sup> = 2<sup>2</sup>/8<sup>3</sup>

------------------
------------------

# Solution

Apply the formula as give in explanation.

```cpp
# include <iostream>
# include <cmath>
int main(){

   int t;
   std::cin >>t;

   while(t--){
      int t1,t2,r1,r2;
      std::cin >> t1 >> t2 >> r1 >> r2;

      double planet1 = (pow(t1, 2) / pow(r1,3));
      double planet2 = (pow(t2, 2) / pow(r2,3));

      if(planet1 == planet2)
         std::cout << "YES\n";
      else  
         std::cout << "NO\n";
   }
return 0;
}
```