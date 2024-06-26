# Test cases

The user is prompted to input 2 sterlings. They 
do so by inputting either 1 number and then any
non-numeric input or by entering 3 numbers. If 
they are entering 3 numbers then the program
checks to make sure that they are proper sterling
values (no more than 19 shillings or more than
11 pence).

Some example additions:
    £4.13.2
  + £3.19.10
  ----------
     8.13.0

    £2.18.5
  +  £3.3.9
  ----------
      6.2.2

| Sterling 1     | Sterling 2     | Expected Result                  |
| ----------     | ----------     | ---------------                  |
| 4 13 2         | 3 19 10        | £4.13.2 + £3.19.10 = £8.13.0     |
|                |                |                                  |
| 2 18 5         | 3 3 9          | £2.18.5 + £3.3.9 = £6.2.2        |
|                |                |                                  |
| 100 10 11      | 560 end        | £100.10.11 + £2.6.8 = £102.17.7  |
|                |                |                                  |
| 100 25 10      | 10 1 5         | Enter a number between 0-19 for  |
|                |                | the amount of shillings.         |
|                |                |                                  |
| 10 14 9        | 10 3 15        | Enter a number between 0-11 for  |
|                |                | the amount of pence.             |
|                |                |                                  |
| 10 10 word     | 1 1 1          | Please enter a number.           |
|                |                |                                  |
| 1 1 1          | word 2 10      | Please enter a number.           |
|                |                |                                  |
|                |                |                                  |

