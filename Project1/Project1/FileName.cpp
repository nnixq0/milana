#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int firstNumber{}, secondNumber{};
	cout << "������� ������ �����";
	cin >> firstNumber;
	cout << "������� ������ �����";
	cin >> secondNumber;
	cout << "����� = " << firstNumber + secondNumber;
	cout << "\n�������� = " << firstNumber - secondNumber;
	cout << " \n������������ = " << firstNumber + secondNumber;
	cout << "\n��. �����. = " << (firstNumber + secondNumber) / 2;

	int tc ;
	cin >> tc;
	cout << "����������� � �����������: " << tc * 9 / 5 + 32;


}