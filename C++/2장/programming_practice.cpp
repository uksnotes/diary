#include <iostream>
#include <string.h>
#include <cstring>
#include <string>
//2장 연습 
/*
using namespace std;

double area(int r);

double area(int r) {
	return 3.14*r*r;
}

int main() {
	// 출력 연습 
	int n = 10;
	char c = '#';
	cout << "Hello\n" << c << n << area(10) << "\n";

	// 높이 너비 면적 
	cout << "너비를 입력: ";
	int width;
	cin >> width;

	cout << "높이를 입력: ";
	int height;
	cin >> height;

	int area = width * height;
	cout << "면적: " << area << "\n";

	for (int n = 0; n < 10; n++) {
		cout << n;
	} 

	/*char name1[6] = { 'G', 'r', 'a', 'c', 'e', '\0' };
	char name2[5] = { 'G', 'r', 'a', 'c', 'e' };

	int a = strlen("Hello");
	
	//키보드 문자열 입력 출력
	cout << "이름 입력:";
	char name[11];
	cin >> name; 
	cout << "이름은 " << name << " 입니다";*/

	//암호 일치 시 프로그램 종료 
	/* char password[10];
	while (true) {
		cout << "암호 입력: ";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "정답\n";
			break;
		}
		else {
			cout << "오답\n";
		}
	} */

	// 공백자 포함
	/* char address[100];
	cout << "주소 입력: ";
	cin.getline(address, 100);
	cout << "주소는 " << address << "입니다"; */

	// 노래 맞추기 
	/*
	string song("Loving you");
	string elvis("Elvis Presley");
	string singer;

	cout << song << "부른 가수는";
	cout << "힌트: 첫 글자" << elvis[0] << "\n";

	getline(cin, singer);
	if (singer == elvis) {
		cout << "정답";
	}
	else {
		cout << "오답";
	} */
