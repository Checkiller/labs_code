//lab_2 variant_1 zadanie_1 Dan radius okruzhnosti R, naydite dlinu okruzhnosti L i ploshchad' kruga S, ogranichennogo etoy okruzhnost'yu. L=2pR, S=pR^2
#include<iostream>
#include<clocale>
#include<iomanip>
#include<cmath>

using namespace std;
const double PI = atan(1) * 4;
int main() {
	double r;
	cout << "radius = ";
	cin >> r;

	double l = 2 * r * PI;
	double s = PI * pow(r, 2);
	cout << "Lenght =" << l << "\nSquare =" << s;
}
