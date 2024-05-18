#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;

   cin >> nickels;
   cin >> dimes;
   cin >> quarters;
   
   dollars = quarters * 0.25 + dimes * 0.10 + nickels * 0.05;


   cout << fixed << setprecision(2);
   
   cout << "Amount: $" << dollars << endl;
   
   return 0;
}
