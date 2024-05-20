# Test cases




| Base  | Options  | Sales Tax  | Fees    | Expected Result                                         |
| ----  | -------  | ---------  | ----    | ---------------                                         |
| 19500 | 4000     | 2500       | 800     | The base price of the car is:       $19500.00
|       |          |            |         | The price of additional options is: $4000.00
|       |          |            |         | The sales tax price is:             $2500.00
|       |          |            |         | The price of licensing fees is:     $800.00
|       |          |            |         | 
|       |          |            |         | The total price of the car is:      $26800.00
| ----- | -------- | ---------- | ------- | ------------------------------------------------------- |
| 35800 | 15000    | 3999.50    | 1250    | The base price of the car is:       $35800.00
|       |          |            |         | The price of additional options is: $15000.00
|       |          |            |         | The sales tax price is:             $3999.50
|       |          |            |         | The price of licensing fees is:     $1250.00
|       |          |            |         | 
|       |          |            |         | The total price of the car is:      $56049.50
| ----- | -------- | ---------- | ------- | ------------------------------------------------------- |
| 1     | 1        | 1          | 1       | The base price of the car is:       $1.00
|       |          |            |         | The price of additional options is: $1.00
|       |          |            |         | The sales tax price is:             $1.00
|       |          |            |         | The price of licensing fees is:     $1.00
|       |          |            |         | 
|       |          |            |         | The total price of the car is:      $4.00
| ----- | -------- | ---------- | ------- | ------------------------------------------------------- |
| -1    | 1        | 1          | 1       | You must provide all positive numbers.
| ----- | -------- | ---------- | ------- | ------------------------------------------------------- |
| 1     | a        | 1          | 1       | Bad input. Please try again.
| ----- | -------- | ---------- | ------- | ------------------------------------------------------- |
| 1     | 1        | yellow     | 1       | Bad input. Please try again.
| ----- | -------- | ---------- | ------- | ------------------------------------------------------- |
| 1     | 1        | 1          | -1e10   | You must provide all positive numbers.
