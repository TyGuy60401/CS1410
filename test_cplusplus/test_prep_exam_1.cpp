#include <iostream>
using namespace std;

enum myEnum {
	val0, val1, val2
};

struct myStruct {
	myEnum val;
	int x = 10;
};


int main() {
	myEnum dub = val2;
	cout << dub << endl;

	myStruct strct;
	cout << strct.val << " " << strct.x << endl;
	strct.val = val1;
	cout << strct.val << " " << strct.x << endl;
	strct.x = 100;
	cout << strct.val << " " << strct.x << endl;
}
