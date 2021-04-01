#pragma once
#include "Goods.h"
class Date_private : private Goods
{
private:
	int day, month, year;
public:
	using Goods::SetN;
	using Goods::GetN;

	Date_private();
	Date_private(int, int, int);
	Date_private(Date_private&);
	~Date_private();
	int GetDay() const { return day; }
	int GetMonth() const { return month; }
	int GetYear() const { return year; }

	void SetDay(int day) { this->day = day; }
	void SetMonth(int month) { this->month = month; }
	void SetYear(int year) { this->year = year; }

	bool Init(int day, int month, int year);
	friend istream& operator >> (istream& in, Date_private*);
	friend ostream& operator << (ostream& out, Date_private*);
	string ToString(int value);
	void WorkWithDate(Date_private* d, int N);
	void AddDay(Date_private* d, int row, int value);
	void RemoveDay(Date_private* d, int row, int value);
	void PartOfDate(Date_private* d, int row);
	void ComparisonDate(Date_private* d, int row1, int row2);
	int Diff(Date_private* d, int row1, int row2);
	int ExpirationDate(Date_private* p, int row, int dday, int mmonth, int yyear);
};

