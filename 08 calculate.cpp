#include <iostream>
#include <string>
using namespace std;
int main8()
{
	int a = 1;
	int b = 1;
	int c = 3;
	cout << a + b << a - b << a * b << a / b << a % b << endl;
	cout << a++ * 10 << ++b * 10 << endl;
	//后：先运算再递增 前：先运算再递增
	cout << a << b << endl;

	//a+=2 /a=a+2  a*=2 /a=a*2

	cout << (a==b) <<(a !=b)<<(a >= b)<<(a < b)<< endl; // (a == b) 代表优先计算括号内的算式
	//cout << !a << !!a << (a && b) << a || b << endl; //非0 /非非1/与1 / 或 1

	system("pause");
	return 0;
}