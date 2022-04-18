#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Integer
{
private:
	vector<int> bigNum;
	bool negative = false;
	void clearZero();
	bool isZero() const;
public:
	Integer();
	Integer(const Integer& rhs);
	Integer(const string& rhs);
	Integer(const char* rhs);

	void factorial();
	
	Integer& operator=(const Integer& rhs);
	Integer& operator=(const char* rhs);
	Integer& operator=(const string& rhs);
	Integer operator+(const Integer& rhs);
	Integer operator-(const Integer& rhs);
	Integer operator*(const Integer& rhs);
	Integer operator/(const Integer& rhs);
	Integer operator^(const Integer& rhs);

	bool operator==(const Integer& rhs) const;
	bool operator<(const Integer& rhs) const;
	bool operator>(const Integer& rhs) const;
	
	friend ostream& operator<<(ostream& os, const Integer& rhs);
	friend istream& operator>>(istream& is, Integer& rhs);
};

