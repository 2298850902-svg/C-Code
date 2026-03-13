#include <iostream>
#include <string> //使用C++风格字符串时候需要带上前缀
using namespace std;
int main5()
{
	//float:seven num/  double fifteen-sixteen num 
	//default:output float/double just six num  / ex.3.14159
	float f1 = 3.14f;
	double f2 = 3.14;
	cout << "f1 is: " << f1 << " and memory is:" << sizeof(f1) << endl;
	cout << "f2 is: " << f2 << " and memory is:" << sizeof(f2) << endl;
	// float:4 / double:8
	
	// science counting below

	float f3 = 3e2;//3*10*10
	float f4 = 3e-2;//3*0.1*0.1
	cout << f3 <<"  " << f4 << endl;

	char ch1 = 'A';
	cout << ch1 << endl;
	cout << sizeof(char) << endl;
	// char memory:1

	//ASCII CODE below a:97 b:98 A:65 B:66
	cout << int(ch1) << endl;

	//C风格字符串
	//注意：char 字符串名后加[] ex.char str[] = "abcd"
	char ch2[] = "ab";
	cout << ch2 << endl;
	cout << sizeof(ch2) << endl;
	cout << int(ch2[1]) << endl;

	//C++风格字符串
	//注意：
	string ch3 = "AB";
	cout << ch3 << endl;
	cout << sizeof(ch3) << "\n" << int(ch3[1]) << endl;



	// 换行符\n ; 反斜杠\\：可以输出斜杠 ; 水平制表\t:可以整齐的输出数据
	cout << "hello\nworld"  << endl;
	cout << "\\\\" << "value" << endl;
	cout << "a\t" << "value" << endl;
	cout << "aa\t" << "value" << endl;
	cout << "aaa\t" << "value" << endl;



	system("pause");
	return 0;

}