#include <iostream>
#include <vector>

 using namespace std;
 int main()
 {
	 setlocale(LC_ALL, "Russian");
	 vector<int> dynArrNums(3);
	 
	 dynArrNums[0] = 344;
	 dynArrNums[1] = -142;
	 dynArrNums[2] = 100;

	cout << "nums in massive: " << dynArrNums.size() << endl;
	
	cout << " введите новое число для вставки в массив: ";
	int anotherNum = 0;
	cin >> anotherNum;
	dynArrNums.push_back(anotherNum);
	
	cout << "чисел в массиве : ";
	cout << "последний элемент массива: ";
	cout << dynArrNums[dynArrNums.size() - 1] << endl;
	return 0;
}
