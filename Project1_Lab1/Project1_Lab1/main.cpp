#include <iostream>
#include <string>

using namespace std;

void LearnTypes()
{
	cout << "Please enter value" << endl;
	int x = 0;
	float f = 0;
	double d = 0;
	char ch = 'd';
	bool b = true;
	cin >> x;// >> f >> d >> ch >> b;

	cout << x + 1 << endl
		<< x - 1 << endl
		<< x * 2 << endl
		<< /*(double) */x / 2. << endl// ������� �������������� ����� � ������� �������, ����� �� ����� �� ����, � ��� � ��� ���,������ ��� ������������� � ����
		<< x % 2 << endl;
	//x += 2 ���� �����, ��� � x= x+2;
	// x ++ like x= x+ 1
	// x-- like x= x-1. ���������� ���������� ��������. ���������� ��� ������
	//�������� int a = x++ - ������ � � ��������� ����������� ���, � ��� ����� ��� �������� ����������
	// ���� ����� int a = ++x - ������ � � ��������� ��� ���������� ���
	cout << (x >> 2) << endl;
	cout << (x << 1) << endl;

}

int main() {
	string s;

	cout << "Input your name: ";
		//cin >> s;
		getline(cin , s); // ������ ������ � ���������
	cout << "Hello " << s << endl;
	LearnTypes();
	system("pause");
	return 0;
}