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
		<< /*(double) */x / 2. << endl// не€вное преобразование типов в большую сторону, «десь мы делим на дабл, а икс у нас инт,«начит инт преобразуетс€ в дабл
		<< x % 2 << endl;
	//x += 2 тоже самое, что и x= x+2;
	// x ++ like x= x+ 1
	// x-- like x= x-1. —уществуют префиксные указани€. Ќеобходимо дл€ циклов
	//ƒопустим int a = x++ - значит в а запишетс€ изначальный икс, а уже потом его значение помен€етс€
	// ≈сли будет int a = ++x - значит в а запишетс€ уже увличенный икс
	cout << (x >> 2) << endl;
	cout << (x << 1) << endl;

}

int main() {
	string s;

	cout << "Input your name: ";
		//cin >> s;
		getline(cin , s); // захват строки с пробелами
	cout << "Hello " << s << endl;
	LearnTypes();
	system("pause");
	return 0;
}