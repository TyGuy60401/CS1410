# Test cases

User input is prices given as floats one at a time
and they need to provide at least 5 prices. The program
then finds the lowest price provided and what index it
was provided at.


| User input        | Expected Result                        |
| ----------        | ---------------                        |
| 1                 | The lowest price listed was $1.00 at   |
| 2                 | index 0. What a deal!                  |
| 3                 | The total cost of all the given prices |
| 4                 | was $15.00.                            |
| 5                 |                                        |
| 0                 |                                        |
|                   |                                        |
| ------            |                                        |
| 40                |                                        |
| 20                |                                        |
| 35                |                                        |
| 10.25             |                                        |
| word              | Error: Input could not be processed    |
| 150               | as a number.                           |
| 0                 | The lowest price listed was $10.25 at  |
|                   | index 3. What a deal!                  |
|                   | The total cost of all the given prices |
|                   | was $265.25.                           |
|                   |                                        |
| ------            |                                        |
| 1                 |                                        |
| 2                 |                                        |
| 0                 | Error: You've only input 2 numbers,    |
| 3                 | input at least 5.                      |
| 4                 |                                        |
| 5                 |                                        |
| 0                 | The lowest price listed was $1.00 at   |
|                   | index 0. What a deal!                  |
|                   | The total cost of all the given prices |
|                   | was $15.00.                            |
|                   |                                        |
|                   |                                        |
| ------            |                                        |
| 1                 |                                        |
| 2                 |                                        |
| -1                | Error: -1 is not a positive number.    |
| 3                 |                                        |
| 4                 |                                        |
| 5                 |                                        |
| 0                 | The lowest price listed was $1.00 at   |
|                   | index 0. What a deal!                  |
|                   | The total cost of all the given prices |
|                   | was $15.00.                            |

