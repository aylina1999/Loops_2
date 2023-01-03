#include<iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;


#define Escape 27

//#define FACTORIAL
//#define DEGREE
//#define ASCII
void main()
{
	//setlocale(LC_ALL, "");

#ifdef FACTORIAL
	int n;
	double f = 1;
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! =";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL


#ifdef DEGREE
	
	double a;         //основание степени
	int n;         //показатель степени
	double N = 1;     //степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;	

#endif // DEGREE


#ifdef ASCII
	setlocale(LC_ALL, "");
	cout << "Таблица ASCII-символов: \n";
	

	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << "";
	}
	cout << endl;

#endif // ASCII

}