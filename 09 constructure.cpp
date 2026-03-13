#include <iostream> 
#include <string>
using namespace std;
int main9() 
{
	int score = 0;
	cout << " please input your score:" << endl;
	cin >> score;
	if (score > 600)
	{
		cout << "i enter one uni!" << endl;
		
		if (score > 700)
		{
			cout << "i enter beida uni" << endl;
		}
		else if (score > 650)
		{
			cout << "i enter qinghua uni" << endl;
		}
		else
		{
			cout << "i enter renda uni" << endl;
		}
		
		
	 }
	else if (score > 500)
	{
		cout << "i enter two uni~" << endl;
	 }
	else if (score > 400)
	{
		cout << "i enter three uni" << endl;
	 }
	else
	{
		cout << " i don't enter uni" << endl;
	}
	cout << score << endl;
		system("pause");
		return 0;
	
}
