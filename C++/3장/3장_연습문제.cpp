#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "3_pratices.h"
using namespace std;

/*
// 1번
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
	cout << "높이는" << myTower.getHeight() << "미터";
	cout << "높이는" << seoulTower.getHeight() << "미터";
}



// 2번
Date::Date(int a, int b, int c) { //정수 매개변수를 갖는 생성자
	year = a; month = b; day = c;
}
Date::Date(string a) { // 문자열 매개변수를 갖는 생성자
	year = stoi(a.substr(0, 4));
	month = stoi(a.substr(5, 7));
	day = stoi(a.substr(7, 10));
}
void Date::show() {
	cout << year << "년" << month << "월" << day << "일" << endl;
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

// 3번
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
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
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
	cout << "커피 머신 상태, 커피: " << cof << "물:" << wat << "설탕:" << sug << "\n";
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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
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
	cout << "Oval 소멸 : width" << width << "height" << height;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}
*/

