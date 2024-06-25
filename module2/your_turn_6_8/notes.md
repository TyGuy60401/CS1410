# Test cases

Testing the input number portion


| Number  | Expected Result                  |
| ------  | ---------------                  |
| 1       | Works as expected                |
| 20      | Works as expected                |
| 30      | Works as expected                |
| apple   | Please enter a number:           |
| -500    | Works as expected                |
| -1000   | Works as expected                |
| 0       | Works as expected                |
| apple   | End of loop                      |
|         |                                  |
|         |                                  |

When you enter something that isn't a number and you
haven't put at least 5 numbers in it yet, then you get
"Please enter a number:" and it continues to prompt
you. If there has already been at least 5 numbers,
then it just ends the user input loop.


| Numbers      | Expected Result                  |
| -------      | ---------------                  |
| 1 2 3 4 5    | Smallest is 1 and largest is 5   |
| 10 20 30 4 1 | Smallest is 1 and largest is 30  |
| -1 -9 1 2 50 | Smallest is -9 and largest is 50 |
|              |                                  |


