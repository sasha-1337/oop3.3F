#include "Date_public.h"
#include "Date_private.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n, MenuItem;
	Goods a; //Date_public b; 
			   Date_private b;
	do {
		cout << " ������ ������� ����� �������: "; cin >> n;
		if (n < 0) { cout << " ������ ����� ����� �� ����" << endl << endl; }
	} while (n < 0);

	Goods* p = new Goods[n];
	p->SetN(n);
	//Date_public* d = new Date_public[n];
	Date_private* d = new Date_private[n];
	d->SetN(n);

	do {
		cout << endl << endl << endl;
		cout << "������� ��:" << endl << endl;
		cout << " [1] - �������� ����� � ���������" << endl;
		cout << " [2] - ���� ����� �� �����" << endl;
		cout << " [3] - ������ ������� ������" << endl;
		cout << " [4] - ������ ���� ������" << endl;
		cout << " [5] - ��������� � ������" << endl;
		cout << endl << endl;
		cout << " [0] - ����� �� ���������� ������ ��������" << endl << endl;
		cout << "������ ��������: "; cin >> MenuItem;
		cout << endl << endl;

		switch (MenuItem)
		{
		case 1:
			cin >> p;
			cin >> d;
			break;
		case 2:
			cout << p;
			cout << d;
			break;
		case 3:
			int num_1; int value_1;
			do {
				cout << " ������ ����� �����: "; cin >> num_1;
				if (n < num_1)
				{
					cout << " ����� �� �������� " << num_1 << " �� ����! " << endl;
				}
			} while (n < num_1);
			cout << " ���� �������: "; cin >> value_1;
			a.ChangeCount(p, num_1 - 1, value_1);
			break;
		case 4:
			int num_2; int value_2;
			do {
				cout << " ������ ����� �����: "; cin >> num_2;
				if (n < num_2)
				{
					cout << " ����� �� �������� " << num_2 << " �� ����! " << endl;
				}
			} while (n < num_2);
			cout << " ���� ����: "; cin >> value_2;
			a.ChangePrice(p, num_2 - 1, value_2);
			break;
		case 5:
			b.WorkWithDate(d, n);
			break;
		case 0:
			break;
		default:
			cout << "�� ����� ��������� ��������! "
				"��� ������ ����� - ����� ��������� ������ ����" << endl;
		}
	} while (MenuItem != 0);

	return 0;
}