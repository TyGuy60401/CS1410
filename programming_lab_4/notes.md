# Test cases

## Testing the add function

Invalid inputs such as strings and zero for the denominator
are tested in the input testing table. Here we are
just testing valid input to verify the expected result.

| Fraction 1    | Fraction 2    | Expected Result                         |
| Num   Den     | Num   Den     |                                         |
| ------------- | ------------- | ---------------                         |
| 10    20      | 3     5       | 11/10                                   |
| -1    30      | -5    7       | -157/210                                |
| 15    -17     | 0     1       | -15/17                                  |
| 0     1       | 0     100     | 0/1                                     |
| 99999 99998   | 99998 99999   | 19,999,400,005 / 9,999,700,002          |
|               |               |                                         |

## Testing the subtract function

Invalid inputs such as strings and zero for the denominator
are tested in the input testing table. Here we are
just testing valid input to verify the expected result.

| Fraction 1    | Fraction 2    | Expected Result                         |
| Num   Den     | Num   Den     |                                         |
| ------------- | ------------- | ---------------                         |
| 500   700     | 1     8       | 33/56                                   |
| -10   3       | -5    9       | -25/9                                   |
| 0     1       | 15    -27     | 5/9                                     |
| 0     1       | 0     100     | 0/1                                     |
| 99999 99998   | 99998 99999   | 199,997 / 99,998 / 99,999               |
|               |               |                                         |


## Testing the multiply function

Invalid inputs such as strings and zero for the denominator
are tested in the input testing table. Here we are
just testing valid input to verify the expected result.

| Fraction 1    | Fraction 2    | Expected Result                         |
| Num   Den     | Num   Den     |                                         |
| ------------- | ------------- | ---------------                         |
| 10    2       | 3     6       | 5/2                                     |
| -1    30      | -5    7       | 1/42                                    |
| 15    -17     | 0     1       | 0/1                                     |
| 0     1       | 0     100     | 0/1                                     |
| 99999 99998   | 99998 99999   | 1/1                                     |
|               |               |                                         |


## Testing the divide function

Invalid inputs such as strings and zero for the denominator
are tested in the input testing table. Here we are
just testing valid input to verify the expected result.

| Fraction 1    | Fraction 2    | Expected Result                         |
| Num   Den     | Num   Den     |                                         |
| ------------- | ------------- | ---------------                         |
| 1     20      | 4     5       | 1/16                                    |
| -1    3       | 5     77      | -77/15                                  |
| 15    -17     | -2    1       | 15/34                                   |
| 0     1       | 0     100     | Can't divide by zero.                   |
| 99999 99998   | 99998 99999   | 9,999,800,001 / 9,999,600,004           |
|               |               |                                         |


## Testing the read fraction function

| Numerator  | Denominator | Expected result                |
| ---------  | ----------- | ---------------                |
| 10         | 20          | 1/2                            |
| -10        | 20          | -1/2                           |
| 0          | 30          | 0/1                            |
| 5          | 7           | 5/7                            |
| word       | 1           | Bad input                      |
| 1          | 0           | Bad input, no zero denominator |
| -30        | -40         | -3/4                           |
| 221        | 323         | 13/19                          |
