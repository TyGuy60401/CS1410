# Test cases

Program to draw a tree takes user input
for the size of the tree. It is an int between
3 and 15.


| Size | Expected Result                      |
| ---- | ---------------                      |
| 3    |    /\                                |
|      |   /  \                               |
|      |  /    \                              |
|      |  ------                              |
|      |    ||                                |
|      |                                      |
|      |                                      |
| 15   |                  /\                  |
|      |                 /  \                 |
|      |                /    \                |
|      |               /      \               |
|      |              /        \              |
|      |             /          \             |
|      |            /            \            |
|      |           /              \           |
|      |          /                \          |
|      |         /                  \         |
|      |        /                    \        |
|      |       /                      \       |
|      |      /                        \      |
|      |     /                          \     |
|      |    /                            \    |
|      |    ------------------------------    |
|      |                  ||                  |
|      |                  ||                  |
|      |                  ||                  |
|      |                  ||                  |
|      |                  ||                  |
|      |                  ||                  |
|      |                  ||                  |
|      |                                      |
|      |                                      |
|      |                                      |
| 6    |         /\                           |
|      |        /  \                          |
|      |       /    \                         |
|      |      /      \                        |
|      |     /        \                       |
|      |    /          \                      |
|      |    ------------                      |
|      |         ||                           |
|      |         ||                           |
|      |         ||                           |
|      |                                      |
| 2    | Error: 2 is not a positive integer   |
|      | between 3 and 15 (inclusive).        |
|      |                                      |
| -1   | Error: -1 is not a positive integer  |
|      | between 3 and 15 (inclusive).        |
|      |                                      |
| 16   | Error: 16 is not a positive integer  |
|      | between 3 and 15 (inclusive).        |
|      |                                      |
| word | Input could not be processed as a    |
|      | number.                              |
|      |                                      |
