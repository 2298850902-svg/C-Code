#include<iostream>
using namespace std;
int main()
{
	int x = rand() % 100 + 1; // random 1~100
	int y = 0;
	while (x != y)
	{
		cout << "please input your num: " << endl;
		cin >> y; // begin
		if (y > x)
		{
			cout << "x is smaller than you think plz go on" << endl;
		}
		else if (y < x)
		{
			cout << "x is bigger than you think plz go on" << endl;
		}
	  }
	cout << "correct!congrats!!!" << endl;
	system("pause");
	return 0;
}