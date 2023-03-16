#include <iostream>
using namespace std;

// c-struktury jako parametry funkcji

struct Pracownik {
	int id;
	char imie[20];
	char nazwisko[30];
};
// prototypy funkcji
void pobierzDane(Pracownik&); //prarametr przekazany przez referencje 
void wyswietlDane(const Pracownik&);
//Parametr przekazany przez referencje do stalej typu const typu Pracownik
	int main(){

		//Deklaracja zmiennej p1 nalezacej do typu strukturowego pracownik
		Pracownik p1;
		cout << "Wprowadz dane wejsciowe: " << endl;
		pobierzDane(p1);
		cout << "Wprowadzone dane: " << endl;
		wyswietlDane(p1); // zmienna typu Pracownik jest traktowana jako const

		return 0;
	};

// Definicja funkcji
void pobierzDane(Pracownik& p) {
	//parametr odgrywa role wyjscia
	cout << "Numer id: ";
	cin >> p.id;
	cout << "Imie: ";
	cin >> p.imie;
	cout << "Nazwisko: ";
	cin >> p.nazwisko;
}
void wyswietlDane(const Pracownik& p) {
	//parametr odgrywa role wejscia 
	cout << "Numer id: " << p.id << endl;
	cout << "Imie: " << p.imie << endl;
	cout << "Nazwisko: " << p.nazwisko << endl;
}

#include <iostream>

using namespace std;

//tablice jako parametry funkcji

//deklaracja stalej globalnej 

const int n = 5;

//prototyp funkcji

void daneWejsciowe(double[]);
//podczas kompilacji zapis double[] jest zamieniany na zapis równoważny double*
//oznacza to ze do funkcji jest przekazywany wskaznik do pierwszego skladowego elementu tablicy


void sumaElementow(const double[], double&);
//pierwszy parametr jest wskaznikiem do stalej typu double
// drugi parametr jest referencja do zmiennej nalezacej do typu double
int main() {
    setlocale(LC_ALL, "PL_pl");

    double tab[n], suma;

    cout << "Dane wejsciowe: " << endl;
    daneWejsciowe(tab); //argument tab jest wskaznikiem do pierwszego elementu tablicy 

    sumaElementow(tab, suma);
    cout << "Suma elementow tablicy: " << suma << endl;

    return 0;
}
void daneWejsciowe(double t[]) { // tablica parametr wejscia wyjscia
    for (int i = 0; i < n; i++) {
        cout << "Tablica[" << i << "]= " << endl;
        cin >> t[i];
    }
}

void sumaElementow(const double t[], double& suma) { // suma parametr wyjsciowy / tablica to parametr wejsciowy
    suma = 0;
    for (int i = 0; i < n; i++) {
        suma += t[i];
    }
}
/*
    parametr t oznacza wskaznik na typ double: double t* który odpowiada typowi elementow skladowych tablicy.
    jezeli w programie glownym zadeklarowano tablice double tab[n], oraz w kazdej z funkcji argumentem jest 
    zmienna (wskaznik) tab, to zapis ten jest kopiowany do parametru formalnego t.
    zapis tab[i] jest równoważny zapisowi t[i] oraz *(t+i).
    */



//////////////////////////////////////////////////////////////// zadanie tablica jako parametr funkcji najmniejsza i najwieksza wartosc


#include <iostream>

using namespace std;

const int n = 5;

void daneWejsciowe(double[]);

void sumaElementow(const double[], double&, double&);

int main() {
    setlocale(LC_ALL, "PL_pl");

    double tab[n], najwiekszy, najmniejszy;

    cout << "Dane wejsciowe: " << endl;
    daneWejsciowe(tab); 

    sumaElementow(tab, najwiekszy, najmniejszy);
    cout << "Najwiekszy element tablicy: " << najwiekszy << endl;
    cout << "Najmniejszy element tablicy: " << najmniejszy << endl;

    return 0;
}
void daneWejsciowe(double t[]) { 
    for (int i = 0; i < n; i++) {
        cout << "Tablica[" << i << "]= ";
        cin >> t[i];
    }
}

void sumaElementow(const double t[], double& najwiekszy, double& najmniejszy) { 
    najwiekszy = t[0], najmniejszy = t[0];
    for (int i = 0; i < n; i++) {
        if (t[i] > najwiekszy) {
            najwiekszy = t[i];
        }
        if (t[i] < najmniejszy) {
            najmniejszy = t[i];
        }
    }
}


#include <iostream>
using namespace std;

//Łancuchy znaków jako parametry funkcji

//definicje funkcji

void pobierzNapis(char n[]) {
	cin >> n;
}
//funkcja ma jeden parametr wyjsciowy o nazwie n typu wskaznikowego char*

void wyswietlNapis(const char n[]) {
	cout << n << endl;
}
//funkcja ma jeden parametr wejsciowy o nazwie n, przekazywany do funkcji jako wskaznik do stalej const typu char

void sumaNapisow(const char n1[], const char n2[], const char n3[]) {

	char bufor[10] = "";

	strcat_s(bufor, n1);
	strcat_s(bufor, " ");
	strcat_s(bufor, n2);

	strcat_s(bufor, n3);
}
//funkcja tworzy konkatenacje napisow.
//pierwszy parametr wejsciowy o nazwie n1 jest przekazywany do funkcji jako wskaznik do stalej const typu char
//drugi parametr wejsciowy o nazwie n2 jest przekazywany do funkcji jako wskaznik do stalej const typu char
//trzeci parametr wyjsciowy o nazwie n3 jest przekazywany do funkcji jako wskaznik do stalej const typu char
int main() {
	setlocale(LC_ALL, "");

		setlocale(LC_ALL, "");
	char nazwaJezyka[10] = "", wersjaJezyka[10] = "", jezyk[10];
	cout << "Podaj nazwę jezyka programowania: ";
	pobierzNapis(nazwaJezyka);
	cout << "Podaj wersje: ";
	pobierzNapis(wersjaJezyka);

	sumaNapisow(nazwaJezyka, wersjaJezyka, jezyk);

	cout << "Jezyk programowania: ";
	wyswietlNapis(jezyk);
	

	return 0;
}

