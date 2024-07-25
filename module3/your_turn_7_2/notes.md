# Test cases

Test cases are for the overloaded == operator of the
two distance objects. Because I am not testing user
input, I won't be testing edge cases that include
string input, I will only be testing input that would be
accepted as valid constructors.


| d1             | d2             |                         |
| feet inches    | feet inches    | Expected Result         |
| -----------    | -----------    | ---------------         |
| 0    0         | 0    0         | Equal                   |
| 12   6.5       | 0    0         | Not equal               |
| 12   6.5       | 12   6.5       | Equal                   |
| 12   6.5       | 13   -5.5      | Equal                   |
| 12   6.5       | 0    150.5     | Equal                   |
| 12   6.5       | 13   -5.1      | Not equal               |
| -6   0         | 6    0         | Not equal               |
|                |                |                         |
