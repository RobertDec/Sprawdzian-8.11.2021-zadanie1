#include <iostream>

using namespace std;

class przeliczanie
{
public:
	float metry;
	void przelicz() {
		cout << "Dlugosc w milach morskiech: " << (0.621371 / 1000) * metry << endl;
		cout << "Dlugosc w stopach angielskich: " << (3280.84 / 1000) * metry << endl;
	}

	void metryczka(){

		cout <<endl<< "Imie: Robert" << endl;
		cout << "Nazwisko:  Dec" << endl;
		cout << "Klasa: 3Cg" << endl;
	}

};



int main() {
	przeliczanie dane;
	cout << "Wprowadz dlugosc w metrach: ";
		cin >> dane.metry;
		dane.przelicz();
		dane.metryczka();

}
