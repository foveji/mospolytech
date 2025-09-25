// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> // Подключение библиотеки для работы с консолью
using namespace std; 


int main()
{
	// Задание 1.
	cout << "First string" << endl; // 1. Вывел строку "First string" в консоль
	setlocale(LC_ALL, "Russian"); // 3. Исправил проблему с кодировкой 
	cout << "Первая строка\n" << "Вторая строка" << endl; // 2. Вывел две строки "Первая строка" и "Вторая строка" в консоль, используя \n
	cout << "Спецсимволы " << "\"" << "\\" << "\"" << endl; // 4. Вывел строку "Спецсимволы "\"
	

	// Задание 2.
	int x = 150;
	float y = 15.933;
	int z = 250;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;


	int day = 30;
	string month = "Декабря";
	int year = 2005;
	cout << "Моя дата рождения: " << day << " " << month << " " << year << " " << endl;

	const float A = 2.3;
	const string B = "WINDOWS";
	cout << A << " " << B;
	

}
