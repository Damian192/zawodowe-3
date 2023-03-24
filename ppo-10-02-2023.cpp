#include <iostream>
using namespace std;

//C-STRUKTURY JAKO PARAMETRY FUNKCJI

struct Pracownik {
	int id;
	char imie[20];
	char nazwisko[30];
};
//Prototypy funkcji
void pobierzDane(Pracownik&);//Parametr przekazywany przez referencję
void wyswietlDane(const Pracownik&);
//Parametr przekazywany przez referencję do stałej const typu Pracownik
int main() {
	setlocale(LC_ALL, "pl_PL");
	//Deklaracja zmiennej p1 należącej do typu strukturowego Pracownik
	Pracownik p1;
	cout << "Wprowadź dane wejściowe: " << endl;
	pobierzDane(p1);
	cout << "Wprowadzone dane: " << endl;
	wyswietlDane(p1);//zmienna typu Pracownik jest traktowana jako const
	return 0;
}
//Definicje funkcji
void pobierzDane(Pracownik& p) {
	//Parametr odgrywa rolę wyjścia
	cout << "Numer id: ";
	cin >> p.id;
	cout << "Imię: ";
	cin >> p.imie;
	cout << "Nazwisko: ";
	cin >> p.nazwisko;
}
void wyswietlDane(const Pracownik& p) {
	//Parametr odgrywa rolę wejścia
	cout << "Numer id: " << p.id << endl;
	cout << "Imię: " << p.imie << endl;
	cout << "Nazwisko: " << p.nazwisko << endl;
}

//Zmodyfikuj program - dane wejściowe (zmienne członkowskie) C-struktury p1 mają być wprowadzane 
//z klawiatury za pomocą funkcji pobierzDane(), która przekazuje wspomnianą C-strukturę jako wartość zwracaną.











========================================
  
  
  #include <iostream>
using namespace std;

struct Pracownik {
	int id;
	char imie[20];
	char nazwisko[30];
};

void pobierzDane(Pracownik&);

int main() {
	setlocale(LC_ALL, "pl_PL");

	Pracownik p1;
	pobierzDane(p1);

	return 0;
}

void pobierzDane(Pracownik& p) {

	cout << "Wprowadź dane wejściowe: " << endl;
	cout << "Numer id: ";
	cin >> p.id;
	cout << "Imię: ";
	cin >> p.imie;
	cout << "Nazwisko: ";
	cin >> p.nazwisko;

	cout << "Wprowadzone dane:" << endl;
	cout << "Numer id: " << p.id << endl;
	cout << "Imię: " << p.imie << endl;
	cout << "Nazwisko: " << p.nazwisko << endl;
}

//Zmodyfikuj program - dane wejściowe (zmienne członkowskie) C-struktury p1 mają być wprowadzane 
//z klawiatury za pomocą funkcji pobierzDane(), która przekazuje wspomnianą C-strukturę jako wartość zwracaną.

#include <iostream>

using namespace std;

void pole(float r, float pi = 3.14 ) {
	cout << "Pole koła wynosi = " << pi * r *r << endl;
} 

void obowod(float r, float pi = 3.14) {
	cout << "Obwód koła wynosi = " << 2 * pi *r << endl;
}
int main() {
	setlocale(LC_ALL, "");
	float r;

	cout << "Podaj promień: ";
	cin >> r;
	pole(r);
	obowod(r);

	return 0;
}
//Napisz program pozwalający obliczyć pole i obwód koła. 
// Wykorzystaj zdefiniowane samodzielnie funkcje pole() i obwod(). 
//Każda z wymienionych funkcji powinna mieć po dwa parametry
//wejściowe: jeden odpowiadający stałej pi, a drugi - długości promienia koła.
//Parametr formalny reprezentujący stałą pi należy zdefiniować jako domyślny.
