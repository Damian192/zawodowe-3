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
    
    

    return 0;
}


