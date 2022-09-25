#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
	cout << "введите строку "<< endl;
	string userinput;
	cin >> userinput;
	if (userinput.length() < 20) {
		cout << "спасибо";
	} else {
		cout << "превышение размера строки";
	}
	return 0;
}

