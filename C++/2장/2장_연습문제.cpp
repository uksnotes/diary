/*#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;

int main() {
	/*
	// 1�� 
	for (int i = 1; i <= 100; i++) {
		cout << i;
		if (i % 10 == 0) {
			cout << "\n";
		}
		else {
			cout << "\t";
		}
	}
	
	//2��
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}

	//3��
	int a, b;
	cin >> a >> b;
	if (a > b) cout << "ū �� = " << a;
	else cout << "ū �� = " << b;

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
	
	//5�� 
	int count = 0;
	char arr[100];
	cin.getline(arr, 100);
	for (int i = 0; i < 100; i++) 
	{
		if (arr[i] == 'x') count++;
	}
	cout << count;
	
	//6��
	string a, b;
	cin >> a >> b;
	if (a == b) 
	{
		cout << "�����ϴ�";
	}


	//7��
	string a;
	while(true) 
	{
		cin >> a;
		if (a == "yes") {
			break;
		}
	}

	//8��
	string ans;
	char name[100];
	int max = 0;
	int n = 0;
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n" << ">>";

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

	cout << "���� �� �̸��� " << ans << endl;
	

	//9��
	char name[100], address[100];
	int age;
	cout << "�̸���?\n";
	cin.getline(name, 100);
	cout << "�ּҴ�?\n";
	cin.getline(address, 100);
	cout << "���̴�?\n";
	cin >> age;
	cout << name << "," << address << "," << age << "��";
	
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
	
	//10��
	int k, n = 0;
	int sum = 0;
	cin >> k >> n;
	for (k; k <= n; k++) 
	{
		sum += k;
	}
	cout << sum;
	
	//13��
	cout << "**** �¸��� ���� �� ȯ���մϴ�\n";
	int a, b;
	while (true) 
	{
		cout << "«��:1 ¥��:2 ������:3 ����:4\n";
		cin >> a;
		if (a > 4) 
		{
			cout << "�ٽ� �ֹ��ϼ���";
		}
		else if (a == 4) 
		{
			break;
		}
		cout << "���κ�?";
		cin >> b;
		if (a == 1)
		{
			cout << "«��" << b << "�κ� ���Խ��ϴ�\n";
		}
		else if (a == 2)
		{
			cout << "¥��" << b << "�κ� ���Խ��ϴ�\n";
		}
		else if (a == 3) 
		{
			cout << "������" << b << "�κ� ���Խ��ϴ�\n";
		}
	}

	//14��
	char item[100];
	int sum = 0;
	int n;
	cout << "���������� 2000�� �Ƹ޸�ī�� 2500�� īǪġ�� 3000��" << "\n" ;
	
	while (true) 
	{
		cin >> item >> n;
		if (strcmp(item, "����������") == 0) 
		{
			cout << "��" << 2000*n << "�� �Դϴ�\n";
			sum += (2000 * n);
		}
		else if (strcmp(item, "�Ƹ޸�ī��") == 0)
		{
			cout << "��" << 2000 * n << "�� �Դϴ�\n";
			sum += (2500 * n);
		}
		else if (strcmp(item, "īǪġ��") == 0)
		{
			cout << "��" << 2000 * n << "�� �Դϴ�\n";
			sum += (3000 * n);
		}
		if (sum > 20000) 
		{
			cout << "20000�� �Ѿ ����";
			break;
		}
	}

	//15��
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

	//16��
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
	cout << "�� ���ĺ� �� : " << sum << "\n";

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