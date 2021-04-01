#pragma once
#include "Goods.h"
class Date_public : public Goods
{
private:
	int day, month, year;
	Goods goods;
public:
	Date_public();
	Date_public(int, int, int);
	Date_public(Date_public&);
	~Date_public();
	Goods GetGoods() { return goods; }
	int GetDay() const { return day; }
	int GetMonth() const { return month; }
	int GetYear() const { return year; }

	void SetGoods(Goods goods) { this->goods = goods; }
	void SetDay(int day) { this->day = day; }
	void SetMonth(int month) { this->month = month; }
	void SetYear(int year) { this->year = year; }

	bool Init(Goods goods, int day, int month, int year);
	friend istream& operator >> (istream& in, Date_public*);
	friend ostream& operator << (ostream& out, Date_public*);
	string ToString(int value);
	void WorkWithDate(Date_public* d, int N);
	void AddDay(Date_public* d, int row, int value);
	void RemoveDay(Date_public* d, int row, int value);
	void PartOfDate(Date_public* d, int row);
	void ComparisonDate(Date_public* d, int row1, int row2);
	int Diff(Date_public* d, int row1, int row2);
	int ExpirationDate(Date_public* p, int row, int dday, int mmonth, int yyear);
};

