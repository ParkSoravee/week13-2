#include<iostream>
#include <string>
using namespace std;

void getStr(string*);
void check(string*);

int main()
{
	string str[10];
	string *pStr = str;
	getStr(pStr);

	/*cout << endl;
	for (int i = 0; i < 10; i++)
		cout << str[i] << endl;*/

	check(pStr);
	return 0;
}

void getStr(string* pStr)
{
	for (int i=0;i<10;i++)
	{
		getline(cin, *(pStr + i));
	}
}
void check(string* pStr)
{
	int goSt = 0;
	for(int i=0;i<10;i++)
	{
		if (*(pStr + i) == "Go straight" and *(pStr + i + 1) == "Go straight" and *(pStr + i + 2) == "Go straight")
		{
			cout << "Welcome to Chiang Mai!!!";
			goSt = -1;
			break;
		}
		else if (*(pStr + i) == "Go straight")
		{
			goSt++;
		}
	}
	if (goSt > 1)
		cout << goSt * 10 << " " << "minute.";
	else if(goSt == 0)
		cout << "Good job Mean!!!";
}