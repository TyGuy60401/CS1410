# Test cases

Input string 1 is a string that contains the 4 properties
of the resistor, each separated by spaces. The first
item is the resistor name and it most start with an
'R' or 'r'. The second and third items are the positive
and negative node names respectively, and the last item
is the value of the resistor. The value of the resistor
is either a number, or a number with a suffix denoting
the multiplier following standard metric prefixes.


| Input String 1    | Input String 2 | Expected Result         |
| --------------    | -------------- | ---------------         |
| R1 0 1 10k        | 10k            | I=1.00e+00              |
| ra 1 b 4.7meg     | 52u            | I=1.11e-11              |
| A1 0 1 1          | 10k            | Didn't start with an R  |
| R1 a b 1v         | 10k            | Invalid Suffix          |
| Rb start end -20m | 15p            | Negative Resistor Value |
| Rb 0 1            | 10k            | Bad input string        |
| Ra 0 1 abcd       | abcd           | Invalid Input Value     |
| Ra 0 1 10k        | abcd           | Invalid Input Value     |

