// Lab_03_2.cpp 
// < Висоцький Володимир > 
// Лабораторна робота № 3.2 
// Розгалуження, задане формулою: функція однієї змінної. 
// Варіант 1

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double a;  
	double b;  
	double c;    
	double F; 
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x; 
	// спосіб 1: розгалуження в скороченій формі
	if (x < 0 && b != 0) 
		F = a * (x * x) + b;
	
	if (x > 0  && b == 0) 
		F = (x - a) / (x - c);
	
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0)) 
		F = x / c;

	cout << "1) F = " << F << endl;


	// спосіб 2: розгалуження в повній формі
	if (x < 0 && b != 0)
		F = a * (x * x) + b;
	else if (x > 0 && b == 0)
		F = (x - a) / (x - c);
	else 
		F = x / c;
	cout << "2) F = " << F << endl;
	return 0;
}