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
