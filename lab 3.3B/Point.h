#pragma once
#include "Pair.h"
#include <iostream>
#include <string>
using namespace std;

class Point : public Pair
{
	double x, y;
public:
	Point(); // ����������� �� ����������
	Point(double, double); // ����������� �����������
	Point(const Point&); //���������
	~Point();

	double Angle();
	double Origin();

	friend bool operator== (const Point& s1, const Point& s2);
	friend bool operator!= (const Point& s1, const Point& s2);

	Point& operator = (const Point&); // ���������
	friend istream& operator >> (istream&, Point&); //�������� � ���������
	friend ostream& operator << (ostream&, const Point&); //���� �� �����
	operator string() const; //���������� ���� � ������������ � ������� �����

	Point& operator ++(); // ���������� ���������
	Point operator ++(int); // ����������� ���������
	Point& operator --(); // ���������� ���������
	Point operator --(int); // ����������� ���������
};
