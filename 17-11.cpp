#include <iostream>
#include <ctime>
using namespace std;
/*Proc1.Описать функцию PowerA3(A), 
вычисляющую третью степень числа A и возвращающую ее(параметр вещественный).С помощью этой функции найти третьи степени пяти случайных чисел.
double powerA3(double a) {
	return a * a * a;
}
int main(){
	srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		int x = rand() % 11;
		double x3 = powerA3(x);
		cout << "x = " << x << " x^3 = " << x3 << endl;
	}
	return 0;
	}
	Proc2.Описать 2 функции powerA2(А), powerA4(A),
		вычисляющию вторую и четвертую степень числа A и возвращающию эти степени(параметры являются вещественными).
		С помощью этих функций найти вторую и четвертую степень пяти случайных чисел
double powerA2(double a) {
	return a * a;
}
double powerA4(double a) {
	return a * a * a * a;
}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		int x = rand() % 11;
		cout << "x = " << x << " x^2 = " << powerA2(x) << " x^4 = " << powerA4(x) << endl;
	}
	return 0;
}
Proc3.Описать 2 функции aMean(X, Y), gMean(X, Y), вычисляющие среднее арифметическое aMean = (X + Y) / 2 
и среднее геометрическое gMean = √ X·Y двух положительных чисел X и Y(X и Y — входные параметры вещественного типа).
С помощью этих функций найти среднее арифметическое и среднее геометрическое для 10 пар случайных чисел.
double aMean(double a, double b) {
	return (a + b) / 2;
}
double gMean(double a, double b) {
	return sqrt(a * b);
}
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));
	for (int i = 1; i <= 10; i++) {
		double x = rand() % 101 * 0.1;
		double y = rand() % 101 * 0.1;
		cout << "x = " << x << " y = " << y <<  " Среднее арифм. = " << aMean(x,y) << " Среднее геометрическое = " << gMean(x,y) << endl;
	}
	return 0;
}
Proc4.Описать 2 функции triangleP(a) и triangleS(a), 
вычисляющие по стороне a равностороннего треугольника его периметр P = 3·a и площадь S = a 2 · √ 3 / 4 (параметры являются вещественными).
С помощью этих функций найти периметры и площади трех равносторонних треугольников с данными сторонами(стороны ввести с клавиатуры).
double trianglrP(double a) {
	return 3 * a;
}
double trianglrS(double a) {
	return a * a * sqrt(3)/4;
}
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));
	int a, b, c;
	for (int i = 1; i <= 3; i++) {
		cin >> a;
		cout << "P = " << trianglrP(a) << " S = " << trianglrS(a) << endl;
	}
	return 0;
}
Proc5.Описать 2 функции rectP(x1, y1, x2, y2) и rectS(x1, y1, x2, y2), 
вычисляющие периметр P и площадь S прямоугольника со сторонами, параллельными осям координат, по координатам(x1, y1), (x2, y2) его противоположных вершин.
С помощью этих функций найти периметры и площади трех прямоугольников с данными противоположными вершинами.*/
double rectP(double x1, double y1, double x2, double y2) {
	return abs(x2 - x1) + abs(y2 - y1);
}
double rectS(double x1, double y1, double x2, double y2) {
	return abs(x2 - x1) * abs(y2 - y1);
}
int main() {
	double x3, x4, y3, y4;
	for (int i = 1; i <= 3; i++) {
		cin >> x3 >> y3 >> x4 >> y4;
		cout << "P = " << rectP(x3, y3, x4, y4) << " S = " << rectS(x3, y3, x4, y4) << endl;
	}
	return 0;
}

