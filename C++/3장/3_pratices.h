#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// 1¹ø
/*
class Tower {
public:
	int meter;
	Tower();
	Tower(int meter);
	int getHeight();
};

// 2¹ø
class Date {
public:
	int year, month, day;
	Date(int year, int month, int day);
	Date(string date);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

// 3¹ø
class Account {
private:
	string name;
	int id, money;
public:
	Account(string a, int b, int c);
	string getOwner();
	int withdraw(int w);
	int deposit(int p);
	int inquiry();
};

class CoffeeMachine {
private:
	int cof, wat, sug;
public:
	CoffeeMachine(int a, int b, int c);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
	void show();
};

class Random {
public:
	Random();
	int next();
	int nextInRange(int a, int b);
};

class Oval {
private:
	int width, height;
public:
	Oval();
	Oval(int a, int b);
	void set(int w, int h);
	int getWidth();
	int getHeight();
	void show();
	~Oval();
};
*/

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};
