#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "3_pratices.h"
using namespace std;

/*
// 1��
Tower::Tower():Tower(1) {}

Tower::Tower(int h) {
	meter = h;
}

int Tower::getHeight() {
	return meter;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴�" << myTower.getHeight() << "����";
	cout << "���̴�" << seoulTower.getHeight() << "����";
}



// 2��
Date::Date(int a, int b, int c) { //���� �Ű������� ���� ������
	year = a; month = b; day = c;
}
Date::Date(string a) { // ���ڿ� �Ű������� ���� ������
	year = stoi(a.substr(0, 4));
	month = stoi(a.substr(5, 7));
	day = stoi(a.substr(7, 10));
}
void Date::show() {
	cout << year << "��" << month << "��" << day << "��" << endl;
}
int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}
int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}

// 3��
Account::Account(string s, int a, int b) {
	name = s;
	id = a;
	money = b;
}

int Account::deposit(int a) {
	money += a;
	return money;
}

string Account::getOwner() {
	return name;
}

int Account::withdraw(int a) {
	money -= a;
	return money;
}

int Account::inquiry() {
	return money;
}

int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}


CoffeeMachine::CoffeeMachine(int a, int b, int c) {
	cof = a;
	wat = b;
	sug = c;
}

void CoffeeMachine::drinkAmericano() {
	cof -= 1;
	wat -= 1;
}

void CoffeeMachine::drinkEspresso() {
	cof -= 1;
	wat -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
	cof -= 1;
	wat -= 2;
	sug -= 1;
}

void CoffeeMachine::fill() {
	cof = 10;
	wat = 10;
	sug = 10;
}

void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��: " << cof << "��:" << wat << "����:" << sug << "\n";
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	int n = rand();
	return n;
}

int Random::nextInRange(int a, int b) {
	int n;
	n = a + (rand() % (b - a + 1));
	return n;
}

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}


Oval::Oval():Oval(1,1) {
}


Oval::Oval(int a, int b) {
	width = a;
	height = b;
}

void Oval::set(int w, int h) {
	width = w;
	height = h;
}

int Oval::getWidth() {
	return width;
}

int Oval::getHeight() {
	return height;
}

void Oval::show() {
	cout << "width = " << width << "height" << height;
}

Oval::~Oval() {
	cout << "Oval �Ҹ� : width" << width << "height" << height;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}
*/

