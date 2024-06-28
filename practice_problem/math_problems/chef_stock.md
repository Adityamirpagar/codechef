# Chef and Stock Prices

Chef wants to but a stock whose price was `S` rupees when the market opened. He will buy the stock if and only if its price is in the range `[A,B]`. The price of the stock has changed by `C`% by the time he was trying to buy the stock. Will he be able to buy the stock?

## Input format

* First line of the input contains, `T` the number of test cases. Then the test cases follow.

* Each test case contains 4 space separated integers `S`, `A`, `B`, `C` in a single line

## Output format

For each test case, if chef buys the stock print "YES", other wise print "NO"


## Sample:

```
Input           |   Output
3               |   
100 93 108 7    |   Yes
100 94 100 -7   |   No
183 152 172 -17 |   No
```

## Explanation

* **Test case 1**: The price of the stock after gaining 7% will become 107, which is in chef's range of [93,108]. Hence chef will buy the stock

* **Test case 2**: The price of the stock after falling 7% will become 93, which is not in chef's range of [94,100]. Hence, chef will not buy the stock

* **Test case 3**: The price of the sotck after falling 17% will become 151.89, which is not in chef's range of [152,172]. Hence, chef will not buy the stock.

------------
------------

# Solution

## Approach

Take input,

`s = initialStockPrice`

`a = minPrice`

`b = maxPrice`

`c = rateOfChange`

create a varible `stockPriceAtMarket` that stores the changed price of the stock

```
stockPriceAtMarket = initialStockPrice + ((double(rateOfChange)/100) * initialStockPrice)
```

> Example: 
>
>>100 plus (10 percent of 100) = 100 + 10 = 110
>>>same as, 100 + ((double(10)/100)* 100) = 100 +10 = 110
>>>

now check if the new price i.e, `stockPriceAtMarket` is the range of `[minPrice, maxPrice]`. print Yes. Otherwise print No.


```cpp
if (minPrice <= stockPriceAtMarket <= maxPrice)
    print Yes
else
    print No
```

## Code

```cpp
# include <iostream>

void stocksDecider(){

    int initialStockPrice, minPrice, maxPrice, rateOfChange;

    std::cin >> initialStockPrice >> minPrice >> maxPrice >> rateOfChange;

    double stockPriceAtMarket = initialStockPrice + ((double(rateOfChange)/100 ) * initialStockPrice);

    // std::cout << stockPriceAtMarket << std::endl;

    if(minPrice <= stockPriceAtMarket && stockPriceAtMarket <= maxPrice)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}

int main(){

    int t;
    std::cin >> t;

    while(t--){
        stocksDecider();
    }

return 0;
}
```