#include <iostream>
using namespace std;
int main()
{
	enum DaysOfWeek {
		monday =1,
		tuesday,
		wednessday,
		thursday,
		friday,
		saturday,
		sunday
	};
	cout <<"узнайте, в честь чего назван день недели!"<<endl;
	cout << "введите номер дня недели: ";
	int day =monday;
	cin >> day;
	switch (day)
	{
		case monday:
			cout << "понедельник - луна";
			break;
		case tuesday:
			cout << "вторник - марс";
			break;
		case wednessday:
			cout << "среда - меркурий";
			break;
		case thursday:
			cout << "четверг - юпитер";
			break;
		case friday:
			cout << "пятница - венера";
			break;
		case saturday:
			cout << "суббота - сатурн";
			break;
		case sunday:
			cout << "воскресенье - солнце";
			break;
		default:
			cout <<"ты глупый или что-то?" << endl;
			break;
		}
}
	
	


