#include <iostream>
using namespace std;

void printMas(int mas[5]){
	for (int i = 0;i < 5;i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int numbers[5] = {10,-3,107503120};
	printMas(numbers);
	cout << "какой эллемент массива вы хотите переписать?";
	int index = 0;
	cin >> index;
	int newValue = 0;
	cout <<"на что вы хотите перезаписать?";
	cin >> newValue;
	numbers[index] = newValue;
	cout << numbers[0] << " " <<numbers[1] << " " << numbers[2] << " " << numbers[3] << " " << numbers[4];
	printMas(numbers);
	return 0;
}
