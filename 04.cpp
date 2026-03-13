#include<iostream>
using namespace std;

int main4()
{
	//short;int;long;long long
	//sizeof(数据类型/变量) 例子：下文中的sizeof(num1/short)都可以
	short num1 = 10;
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;
	cout << "short memory is:" << sizeof(num1) << endl;
	cout << "int memory is:" << sizeof(num2) << endl;
	cout << "long memory is:" << sizeof(num3) << endl;
	cout << "long long memory is:" << sizeof(num4) << endl;
	system("pause");
	return 0;
}