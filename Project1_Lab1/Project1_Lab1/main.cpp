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

void Hello()
{
	string s;
	cout << "Input your name: ";
	//cin >> s;
	getline(cin, s); // захват строки с пробелами
	cout << "Hello " << s << endl;

}

struct Student {
	string name;     //создание собственного типа данных     
	double score;
};

int main() {
	//Hello();
	//LearnTypes();
	int mass[5][2] = { };//инициализаци€ массивов.—татический массив
	vector </*int*/ Student> group;//ћассив, в котором есть данные и их размер. ѕосле создание собственного типа данных мы можем задать vector<student> v;
	size_t n = 0;
	cin >> n;
	group.resize(n);
	/*Student s = { "ivan",5 };// отдаем значени€ дл€ нашего типа данных, которые после исполнени€ вывод€тс€ в массив
	group[0] = s;
	s.score -= 0.5;// »зменение среднего балла*/

	group[0] = { "ivan", 5 };//ќптимизаци€. избавились от лишних элементов
	group[0].score -= 0.5;
	system("pause");
	return 0;
}