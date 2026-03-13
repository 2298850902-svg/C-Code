#include<iostream>
using namespace std;
int main10()
{
	int score = 0;
	cout << "please rate this movie" << endl;
	cin >> score;
	switch (score)
	{
	case 10:
	case 9:
		cout << "claasic" << endl;
		break;
	case 8:
	case 7:
		cout << "well down" << endl;
		break;
	case 6:
	case 5:
		cout << "normal" << endl;
		break;
	default:
		cout << "fuck" << endl;
	}




	system("pause");
	return 0;
}