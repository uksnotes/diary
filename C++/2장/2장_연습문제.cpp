/*#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;

int main() {
	/*
	// 1번 
	for (int i = 1; i <= 100; i++) {
		cout << i;
		if (i % 10 == 0) {
			cout << "\n";
		}
		else {
			cout << "\t";
		}
	}
	
	//2번
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}

	//3번
	int a, b;
	cin >> a >> b;
	if (a > b) cout << "큰 수 = " << a;
	else cout << "큰 수 = " << b;

	double arr[5];
	double max = 0;

	for (int i = 0; i < 5; i++) 
	{
		cin >> arr[i];
		if (i == 0) 
		{
			max = arr[i];
		}
		if (arr[i] > max) 
		{
			max = arr[i];
		}
	}
	cout << max;
	
	//5번 
	int count = 0;
	char arr[100];
	cin.getline(arr, 100);
	for (int i = 0; i < 100; i++) 
	{
		if (arr[i] == 'x') count++;
	}
	cout << count;
	
	//6번
	string a, b;
	cin >> a >> b;
	if (a == b) 
	{
		cout << "같습니다";
	}


	//7번
	string a;
	while(true) 
	{
		cin >> a;
		if (a == "yes") {
			break;
		}
	}

	//8번
	string ans;
	char name[100];
	int max = 0;
	int n = 0;
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n" << ">>";

	for (int i = 1; i <= 5; i++)
	{
		cin.getline(name, 100, ';');
		cout << i << " : " << name;
		cout << endl;

		if (max < strlen(name))
		{
			max = strlen(name);
			n = i;
			ans = name;
		}

	}

	cout << "가장 긴 이름은 " << ans << endl;
	

	//9번
	char name[100], address[100];
	int age;
	cout << "이름은?\n";
	cin.getline(name, 100);
	cout << "주소는?\n";
	cin.getline(address, 100);
	cout << "나이는?\n";
	cin >> age;
	cout << name << "," << address << "," << age << "세";
	
	string a;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++) 
	{
		for (int j = 0; j <= i; j++)
		{
			cout << a[j];
		}
		cout << "\n";
	}
	
	//10번
	int k, n = 0;
	int sum = 0;
	cin >> k >> n;
	for (k; k <= n; k++) 
	{
		sum += k;
	}
	cout << sum;
	
	//13번
	cout << "**** 승리장 오신 걸 환영합니다\n";
	int a, b;
	while (true) 
	{
		cout << "짬뽕:1 짜장:2 군만두:3 종료:4\n";
		cin >> a;
		if (a > 4) 
		{
			cout << "다시 주문하세요";
		}
		else if (a == 4) 
		{
			break;
		}
		cout << "몇인분?";
		cin >> b;
		if (a == 1)
		{
			cout << "짬뽕" << b << "인분 나왔습니다\n";
		}
		else if (a == 2)
		{
			cout << "짜장" << b << "인분 나왔습니다\n";
		}
		else if (a == 3) 
		{
			cout << "군만두" << b << "인분 나왔습니다\n";
		}
	}

	//14번
	char item[100];
	int sum = 0;
	int n;
	cout << "에스프레소 2000원 아메리카노 2500원 카푸치노 3000원" << "\n" ;
	
	while (true) 
	{
		cin >> item >> n;
		if (strcmp(item, "에스프레스") == 0) 
		{
			cout << "총" << 2000*n << "원 입니다\n";
			sum += (2000 * n);
		}
		else if (strcmp(item, "아메리카노") == 0)
		{
			cout << "총" << 2000 * n << "원 입니다\n";
			sum += (2500 * n);
		}
		else if (strcmp(item, "카푸치노") == 0)
		{
			cout << "총" << 2000 * n << "원 입니다\n";
			sum += (3000 * n);
		}
		if (sum > 20000) 
		{
			cout << "20000원 넘어서 종료";
			break;
		}
	}

	//15번
	int a, b;
	char c;
	while (true) {
		cout << "? ";
		cin >> a >> c >> b;
		switch (c)
		{
		case '+': cout << a << " " << c << " " << b << "=" << a + b << "\n"; break;
		case '-': cout << a << " " << c << " " << b << "=" << a - b << "\n"; break;
		case '*': cout << a << " " << c << " " << b << "=" << a * b << "\n"; break;
		case '/': cout << a << " " << c << " " << b << "=" << a / b << "\n"; break;
		}
	}

	//16번
	char c[10000];
	int sum = 0;
	char alpha[27] = { 0 };

	cin.getline(c, 10000, ';');

	for(int i = 0; i <strlen(c); i++) 
	{
		if (isalpha(c[i]))
		{
			if (c[i] < 91)
			{
				c[i] = tolower(c[i]);
			}
			sum++;
			alpha[c[i] - 97]++;
		}
	}
	cout << "총 알파벳 수 : " << sum << "\n";

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << "(" << alpha[i] << ")";
		cout << "\t:    ";
		for (int j = 1; j <= alpha[i]; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	

}
*/