#include <iostream>
#include <string>
#include <algorithm>
#include "SubstringDll.h"

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	string a, b;
	cout << "Введите первую строку: ";
	cin >> a;
	cout << "Введите вторую стркоу: ";
	cin >> b;
	cout << "Получить одну строку из другой ";
	if (!check_string(a, b)) cout << "не";
	cout<< "возможно" << endl;

	
	system("pause");
}