#include <iostream>
#include <string>
using namespace std;

int main() {
   string login;
   string first;
   string last;
   int number;
   string numberString;
   int firstSlice;


   cin >> first;
   cin >> last;
   cin >> number;

   firstSlice = (first.length() >= 6) ? 6 : first.length();

   numberString = to_string(number);

   login = first.substr(0, firstSlice) + last.at(0) + "_" + numberString.at(numberString.length() - 1);

   cout << "Your login name: ";
   cout << login << endl;


   return 0;
}  
