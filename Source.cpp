#include <iostream>
#include <string>
#include <algorithm>
#include "SubstringDll.h"

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	string a, b;
	cout << "������� ������ ������: ";
	cin >> a;
	cout << "������� ������ ������: ";
	cin >> b;
	cout << "�������� ���� ������ �� ������ ";
	if (!check_string(a, b)) cout << "��";
	cout<< "��������" << endl;

	
	system("pause");
}