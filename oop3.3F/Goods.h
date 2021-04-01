#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <Windows.h>

using namespace std;

class Goods
{
private:
	string name;
	int price;
	int count;
	int number;
	int N;
public:
	Goods();
	Goods(string, int, int, int, int);
	Goods(Goods&);
	~Goods();

	string GetName() const { return name; }
	int GetPrice() const { return price; }
	int GetCount() const { return count; }
	int GetNumder() const { return number; }
	int GetN() { return N; }

	void SetN(int N) { this->N = N; }
	void SetName(string name) { this->name = name; }
	void SetPrice(int price) { this->price = price; }
	void SetCount(int count) { this->count = count; }
	void SetNumber(int number) { this->number = number; }

	friend istream& operator >> (istream&, Goods*);
	friend ostream& operator << (ostream&, Goods*);
	string ToString(int value);

	bool Init(int Price, int Count, int Number);
	void ChangePrice(Goods* p, int num, int value);
	void ChangeCount(Goods* p, int num, int value);
};

