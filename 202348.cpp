#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	float degree = 0, minute = 0, second = 0;
	const float translate = 60;
	cout << "Enter a latitude  in degree, minutes, and sceonds:\n";
	cout << "First,enter the degrees:"; cin >> degree;
	cout << "Next,enter the minutes of arc:"; cin >> minute;
	cout << "Finallu,enter the seconds of arc:"; cin >> second;
	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << degree + minute / translate + second / translate / translate << "degrees";
	return 0;
}