#include <iostream>
#include <string>
using namespace std;
int main7()
{
	//1. int
	int a = 0;
	cout << "please input a value" << endl;
	cin >> a;
	cout << "a=" << a << endl;
	//2. float
	float b = 1;
	cout << "please input b value" << endl;
	cin >> b;
	cout << "b=" << b << endl;
	//3. char
	char c = 'a';
	cout << "please inputchar c:" << endl;
	cin >> c;
	cout << "char c=" << c << endl;
	//4. string
	string d = "abcd";
	cout << "please input string d:" << endl;
	cin >> d;
	cout << "string d =" << d << endl;
	//5. bool
	bool e = true;
	cout << "please input bool value:" << endl;
	cin >> e;
	cout << " bool e = " << e << endl;


	system("pause");
	return 0;
}