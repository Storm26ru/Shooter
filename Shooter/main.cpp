#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Клавиши управления :\n"
		" W - вперед \n"
		" S - назад \n"
		" A - влево\n"
		" D - вправо\n"
		" spase - nрыжок\n"
		" enter - огонь\n";
	cout << "Для выхода из программы нажмите Esc\n";
	cout << "Нажмите клавишу: \n";
	for (;;)
	{
		char command;
		command = _getch();
		if (command == 'w') cout << "\tВперед\n";
		else if (command == 's') cout << "\tНазад\n";
		else if (command == 'a') cout << "\tВлево\n";
		else if (command == 'd') cout << "\tВправо\n";
		else if (command == 32) cout << "\tПрыжок\n";
		else if (command == 13) cout << "\tОгонь\n";
		else if (command == 27)
		{
			cout << "\tВыход";
			break;
		}
		else cout << "Нажата не верная клавиша \n";



	}