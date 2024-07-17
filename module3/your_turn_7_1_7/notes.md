# Test cases

Testing the constructors
function on the right as a result

| Inputs                                     | Expected printMouse                               |
| ------                                     | ----------------------                            |
| Mouse newMouse;                            | Age:         0                                    |
|                                            | Weight:      1.000000                             |
|                                            | Growth rate: 1.500                                |
| Mouse otherMouse(40);                      | Age:         0                                    |
|                                            | Weight:      1.000000                             |
|                                            | Growth rate: 40.000                               |
| Mouse otherMouse(-1);                      | Age:         0                                    |
|                                            | Weight:      1.000000                             |
|                                            | Growth rate: -1.000                               |
|                                            |                                                   |
|                                            |                                                   |


Testing the growMouse functions
Given the following input mouse:
Age:         0
Weight:      1.000000
Growth rate: 1.500000

| Grow mouse function                        | Expected printMouse                               |
| ------                                     | ----------------------                            |
| growMouse()                                | Age:         1                                    |
|                                            | Weight:      2.500000                             |
|                                            | Growth rate: 1.500                                |
| growMouse(5)                               | Age:         6                                    |
|                                            | Weight:      8.500000                             |
|                                            | Growth rate: 1.500                                |
| growMouse(-1)                              | Age:         1                                    |
|                                            | Weight:      1.000000                             |
|                                            | Growth rate: 1.500                                |
|                                            |                                                   |

Tests show that the program accepts negative growth
rates for the mice.
