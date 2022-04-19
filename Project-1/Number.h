#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Number
{
protected:
	vector<int> bigNum;
	bool negative = false;
	int point = 0;

	void clearZero();
	bool isZero() const;
	void pushLeft();	//�p���I�Ը�0
	void pushRight();	//��ƫe����0
public:
	Number();
	Number(const string& rhs);
	Number(const Number& rhs);

	void factorial();

	Number& operator=(const Number& rhs);
	Number operator+(const Number& rhs);
	Number operator-(const Number& rhs);
	Number operator*(const Number& rhs);
	Number operator/(const Number& rhs);
	Number operator^(const Number& rhs);

	bool operator==(const Number& rhs) const;
	bool operator<(const Number& rhs) const;
	bool operator>(const Number& rhs) const;

	friend ostream& operator<<(ostream& os, const Number& rhs);
	friend istream& operator>>(istream& is, Number& rhs);

};
