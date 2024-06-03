# Test cases

Program prompts the user for a number between 0 and
50000 (exclusive) and prints out the final investment
cost and number of years it took to get to $50k at 
3.5% interest annually.


| Length | Width  | Expected Result                                         |
| ------ | -----  | ---------------                                         |
| 1      | 1      | Length: 1 ft. Width: 1 ft. Area: 1 square feet.         |
| 0.1    | 0.1    | Length: 1 ft. Width: 1 ft. Area: 1 square feet.         |
| 12     | 15     | Length: 12 ft. Width: 15 ft. Area: 180 square feet.     |
| word   | N/A    | Error: Bad input string                                 |
| 10     | word   | Error: Bad input string                                 |
| -1     | N/A    | Error with input number: -1                             |
| 10     | 20     | Error with input number: 20                             |
|        |        |                                                         |
