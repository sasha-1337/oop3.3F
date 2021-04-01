#include "Goods.h"
Goods::Goods()
{
	name = "";
	price = 0;
	count = 0;
	number = 0;
	N = 0;
}
Goods::Goods(string n, int p, int c, int num, int N)
{
	name = n;
	price = p;
	count = c;
	number = num;
	this->N = N;
}
Goods::Goods(Goods& g)
{
	name = g.name;
	price = g.price;
	count = g.count;
	number = g.number;
	this->N = g.N;
}
Goods::~Goods() { }

bool Goods::Init(int Price, int Count, int Number)
{
	if (Price > 0)
	{
		SetPrice(Price);
		return true;
	}
	if (Count > 0)
	{
		SetCount(Count);
		return true;
	}
	if (Number > 0)
	{
		SetNumber(Number);
		return true;
	}
	else
		return false;
}

istream& operator >> (istream& in, Goods* p)
{
	int i = 0;
	do {
		cout << " Товар № " << i + 1 << ":" << endl;
		in.get();
		in.sync();
		cout << " Назва товару: "; getline(in, p[i].name);
		cout << " Ціна: "; in >> p[i].price;
		cout << " Кількість: "; in >> p[i].count;
		cout << " Номер накладної: "; in >> p[i].number;
		cout << endl << endl;
		cout << endl;
		i++;
	} while ((i < p->N) && !p->Init(p[i].price, p[i].count, p[i].number));
	cout << endl;
	return in;
}

ostream& operator << (ostream& out, Goods* r)
{
	out << "=================================================================================================="
		<< endl
		<< "|  №  |     Товар     |      Кількість      |     Ціна шт.    |    № Накладної   |     Сума      |"
		<< endl
		<< "=================================================================================================="
		<< endl;
	for (int i = 0; i < r->N; i++)
	{
		out << "| " << setw(3) << right << i + 1 << " "
			<< "| " << setw(14) << left << r[i].name
			<< "| " << setw(20) << left << r->ToString(r[i].count)
			<< "| " << setw(15) << right << r->ToString(r[i].price) << " |"
			<< setw(17) << right << r->ToString(r[i].number) << " |"
			<< setw(14) << right << r->ToString(r[i].price * r[i].count) << " |"
			<< endl
			<< "--------------------------------------------------------------------------------------------------"
			<< endl;
	}
	return out;
}

string Goods::ToString(int value)
{
	stringstream sstr;
	sstr << value;
	return sstr.str();
}

void Goods::ChangePrice(Goods* p, int num, int value) { p[num].price = value; }

void Goods::ChangeCount(Goods* p, int num, int value) { p[num].count = value; }