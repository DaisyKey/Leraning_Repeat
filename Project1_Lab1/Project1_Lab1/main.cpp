#include <iostream>
#include <string>
#include <vector>

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

void Hello()
{
	string s;
	cout << "Input your name: ";
	//cin >> s;
	getline(cin, s); // ������ ������ � ���������
	cout << "Hello " << s << endl;

}

struct Student {
	string name;     //�������� ������������ ���� ������     
	double score;
};

int main() {
	//Hello();
	//LearnTypes();
	int mass[5][2] = { };//������������� ��������.����������� ������
	vector </*int*/ Student> group;//������, � ������� ���� ������ � �� ������. ����� �������� ������������ ���� ������ �� ����� ������ vector<student> v;
	size_t n = 0;
	cin >> n;
	group.resize(n);
	/*Student s = { "ivan",5 };// ������ �������� ��� ������ ���� ������, ������� ����� ���������� ��������� � ������
	group[0] = s;
	s.score -= 0.5;// ��������� �������� �����*/

	group[0] = { "ivan", 5 };//�����������. ���������� �� ������ ���������
	group[0].score -= 0.5;
	system("pause");
	return 0;
}