#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "������� ���������� :\n"
		" W - ������ \n"
		" S - ����� \n"
		" A - �����\n"
		" D - ������\n"
		" spase - n�����\n"
		" enter - �����\n";
	cout << "��� ������ �� ��������� ������� Esc\n";
	cout << "������� �������: \n";
	for (;;)
	{
		char command;
		command = _getch();
		if (command == 'w') cout << "\t������\n";
		else if (command == 's') cout << "\t�����\n";
		else if (command == 'a') cout << "\t�����\n";
		else if (command == 'd') cout << "\t������\n";
		else if (command == 32) cout << "\t������\n";
		else if (command == 13) cout << "\t�����\n";
		else if (command == 27)
		{
			cout << "\t�����";
			break;
		}
		else cout << "������ �� ������ ������� \n";



	}