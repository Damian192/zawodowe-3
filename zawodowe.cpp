#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "PL_pl");

	char napis[20] = "napis";
	char napis2[20] = "napis2";

	//okreslanie długosci napisow

	cout << "Długość pierwszego napisu w znakach: " << strlen(napis) << endl;
	cout << "Długość drugiego napisu w znakach: " << strlen(napis2) << endl;

	//okreslanie rozmiaru napisów

	cout << "Rozmiar pierwszego napisu w znakach: " << sizeof(napis) << endl;
	cout << "Rozmiar drugiego napisu w znakach: " << sizeof(napis2) << endl;

	//porównanie c-napisu napis z c-napisem napis2

	cout << "Czy napisy sa identyczne? " << strcmp(napis, napis2) << endl;

	//skopiowanie znakow do zmiennych napis i napis2

	strcpy_s(napis, "to jest ");

	cout << "napis: " << napis << endl;
	strcpy_s(napis2, "to też jest ");

	cout << "napis: " << napis2 << endl;

	//dodanie znakow do c-napisu na koncu

	strcat_s(napis, "a");
	cout << napis << endl;

	//sprawdzanie czy ciąg znaków jest podlancuchem c-napisu

	cout << "Napis \" jest\" stanowi podłańcuch łancucha " << napis << "w miejscu " << strstr(napis, "jest");

	//sprawdzenie czy znak 'j' jest zawarty w napisie

	cout << "Znak 'j' jest w zawarty w łańcuchu: " << napis << "od pozycji " << strchr(napis, 'j') << endl;



	return 0;
}

	string napis = "text"; 
	0string napis2("text");
	string napis3 = ("text");


#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "PL_pl");
	string lancuch, lancuch2;
	cout << "Podaj nazwę dwuczłonową języka programowania:"; cin >> lancuch;
	cout << "Podano nazwę: " << lancuch << endl;
	cin.ignore(numeric_limits < streamsize >::max(), '\n');
	cin >> lancuch2;
	cout << "Nowy bufor: " << lancuch2 << endl;
	return 0;

}


	string s1 = "c++11", s2 = "11", s3 = "13";
	//porównanie łańcuchów zwróci 1 gdy są różne
	//zwróci -1 gdy są różne i s2 bedzie dłużyszy od s3,
	//zwróci 0 gdy są równe 
	cout << s3.compare(s2) << endl;

	// wyszukiwanie w łancuchu s1 łancucha s2
	//zwróci pozycje pierwszego znaku wystąpienia łańcucha
	cout << s1.find(s2) << endl;

	//wyciagniecie łańcucha z zadanego łancucha zrodłowego 
	int poczatek = 0, dlugosc = 3;

	string s4 = s1.substr(poczatek, dlugosc);
	cout << s4 << endl;

	//okreslenie długosci łancucha s4
	cout << s4.length() << endl;

	//okreslanie rozmiaru łanuchca znaków w bajtach
	cout << s4.size() << endl;

	//zastapenie podlacucha w lancuchu zrodlowym
	poczatek = 1, dlugosc = 3;
	cout << s3.replace(poczatek, dlugosc, "7");

	//nadaje nowa wartosc łanuchowi ( prawie to samo co = )
	cout << s4.assign("14") << endl;

	return 0;



	//struktura
struct Data {
	int dd;
	int mm;
	int rrrr;
};

using namespace std;
int main() {
	setlocale(LC_ALL, "");

	Data data_zatrudnienia;
	data_zatrudnienia.dd = 1;
	data_zatrudnienia.mm = 1;
	data_zatrudnienia.rrrr = 1970;

	//lub
	data_zatrudnienia = { 1,1,1970 };
	

	return 0;
}
struct Data {
	unsigned short int dd, mm, rrrr;
};

struct Uczen { // dellaracja i zainicjowanie struktury
	char imie[20];
	char nazwisko[20];
	int klasa;
	char grupa[2];
	int numer_w_dzienniku;
	char miejsce[50];
	// Deklaracja pola należacego do typu data 
	Data data_urodzenia;

};
using namespace std;
int main() {
	setlocale(LC_ALL, "");

	Uczen u;
	u = { "Janusz", "Kowalski", 3, "a", 1, "Częstochowa"};
	u.data_urodzenia = { 12, 4, 1970 };


	return 0;
}

#include <iostream>
#include <windows.h>

struct Data {
	int d, m, r;

};

using namespace std;
int main() {
	setlocale(LC_ALL, "");

	Data d1 = { 19,11,2019 };
	Data d2{ 12.12,2012 };


	return 0;
}

struct Data {
	int d, m, r;
};

struct Uczen {
	string imie, nazwisko;
	int nr_ewid;
	Data data_urodzenia;
	unsigned short oceny[3];
};

using namespace std;
int main() {
	setlocale(LC_ALL, "");

	Uczen u = { "Janusz", "Kowalski", 123,{1,1,1999},{5,5,5} }; // nawiasy w nawiasach do daty i na tablice
	
	
	
	
	////////////////////////unie
	
	#include <iostream>
#include <windows.h>

struct Plane 
{
	float x, y;

};
struct Space {
	float x, y, z;
};
union Coordinates {
	Plane w2;
	Space w3;

	
};
using namespace std;
int main() {
	setlocale(LC_ALL, "");

	//deklaracja zmiennej unijnej 
	Coordinates w;

	cout << "Podaj wartości współrzędnych punktu na płaszczyźnie: " << endl;
	cout << "x = "; cin >> w.w2.x;
	cout << "y = "; cin >> w.w2.y;
	cout << "Wprowadzone współrzędne punktu: " << endl;
	cout << "x: " << w.w2.x << endl;
	cout << "y: " << w.w2.y << endl;

	cout << "Podaj wartości współrzędnych punktu na przestrzeni: " << endl;
	cout << "x:"; cin >> w.w3.x;
	cout << "y:"; cin >> w.w3.y;
	cout << "z:"; cin >> w.w3.z;

	cout << "Wprowadzone współrzędne punktu: " << endl;
	cout << "x:" << w.w3.x << endl;
	cout << "y:" << w.w3.y << endl;
	cout << "z:" << w.w3.z << endl;
	return 0;
}
	
	
	
	////////////////////////////////////////////////////zadanie
	#include <iostream>
#include <windows.h>
struct Dane {
	float a, b;
};
union Figury
{
	Dane kwadrat;
	Dane prostokat;
};

using namespace std;
int main() {
	setlocale(LC_ALL, "");
	int x, pp, obw;
Figury zmienne;
	cout << "Aby obliczyć pole powierzchni i obwód kwadratu wpisz 1. " << endl;
	cout << "Aby obliczyć pole powierzchni i obwód prostokąta wpisz 2. " << endl;
	cin >> x;
	switch (x){
		case 1:
			cout << "wprowadz a: " << endl;
			cin >> zmienne.kwadrat.a;

			pp = zmienne.kwadrat.a * zmienne.kwadrat.a;
			obw = zmienne.kwadrat.a * 4;

			cout << "Pole powierzchni kwadratu wynosi: " << pp << endl;
			cout << "Obwód kwadratu wynosi: " << obw << endl;
				break;
		case 2: 
			cout << "wprowadz a: " << endl;
			cin >> zmienne.kwadrat.a;
			cout << "Wprowadz b: " << endl;
			cin >> zmienne.kwadrat.b;

			pp = zmienne.prostokat.a * zmienne.prostokat.b;
			obw = zmienne.prostokat.a * 2 + zmienne.prostokat.b *2;

			cout << "Pole powierzchni prostokąta wynosi: " << pp << endl;
			cout << "Obwód prostokąta wynosi: " << obw << endl;
			break;
		default:
			cout << "Wybierz 1 lub 2.";
			break;
}

	return 0;
}
	
	
	
	#include <iostream>
#include <windows.h>

using namespace std;

//parametry wejsciowe funkcji

/*
typ_zwracany nazwa_funkcji(typ_parametru nazwa_parametru) {
 instrukcje;
}
*/

//definicja funkcji
double f_pole(double b1, double b2) {
	b1 = b1 + 1; // to jest zmienna lokalna czyli kopia parametru 
	return b1 * b2; // zwrot wartości wyrażenia
}
// w tym momencie usuwa sie kopia zmiennej b1
// deklaracja funkcji 
// ctrl+ lpm na nazwe deklarowanej funkcji przenosi do definicji
	double f_obwod(double, double);

int main() {
	setlocale(LC_ALL, "");

	double bok1, bok2, pole, obwod;
	bok1 = 1;
	bok2 = 2;

	pole = f_pole(bok1, bok2);
	obwod = f_obwod(bok1, bok2);
	cout << "Pole i obwód prostokąta" << endl;
	cout << "Pole: " << pole <<endl;
	cout << "Obwód:" << obwod << endl;

	return 0;
}

//definicja funkcji
double f_obwod(double b1, double b2) {
	return 2 * b1 + 2 * b2;
}
