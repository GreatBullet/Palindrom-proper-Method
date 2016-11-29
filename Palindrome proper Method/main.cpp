#include<iostream>
#include<string>
#include <sstream>
using namespace std;

template <typename T>
string NumberToString(T Number)
{
	ostringstream ss;
	ss << Number;
	return ss.str();
}

int main()
{
	short a;
	cin >> a;
	if (a > 1 && a < 32000)
	{
		string str = NumberToString<short>(a);
		string strc = str;
		short ai = str.size() - 1;
		short ini = 0;
		for (int i = str.size() / 2; i > 0; --i) {
			char tmp = str[ini];
			str[ini] = str[ai];
			ini++;
			str[ai] = tmp;
			ai--;
		}

		if (strc == str)
			cout << "Palindrom \n";
		else
			cout << "Kein Palindrom \n";

		cout << str << "\n";
		cout << strc << "\n";
	}
	else
	{
		cout << "Versuche es mit einer Ganzzahl zwischen 1 und 32000.\n";
	}

	system("Pause");
	return 0;
}