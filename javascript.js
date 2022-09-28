/*  TYPY ZMIENNYCH
mozliwe sa nastepujace typy danych:
typ liczbowy: number
typ łańcuchowy: string
typ logiczny: boolean
typ null
typ undefined
*/

//typ number
var a = 12;
var b = 837; // osemkowy
var c = 0xACB; // szesnastkowy
var d = 0.12e-2; // notacja wykladnicza

//typ string
var e = "warszawa";
var f = 'krakow';

//typ boolean
var g = true;
var h = false;

//typ null nie przechowuje zadnej watosci.
// w javascript jest objektem

//typ undefined 
var x;

//ZŁOŻONE TYPY DANYCH 

var osoba ={nazwisko:"kowalski", imie:"janusz", wiek:90};

document.write("Imie: " + osoba.imie );

//TABLICE

var liczby =[10,23,50,90,95];

/*OPERATORY
arytmetyczne 
porównania
bitowe
przypisania
logiczne
*/

/*arytmetyczne
- odejmowanie
+ dodawanie
* mnożenie
/ dzielenie
% modulo (reszta z dzielenia)
++ ikrementacja
-- dekrementacja
*/

/*porównania
== wynik true kiedy winiki są rowne
!= wynik true gdy argumenty są rozne
=== wynik true gdy argumenty sa tego samego typu i sa rowne
!== wynik true gdy argumenty sa rozne lub sa innych typow
>(=) wynik true gdy pierwszy argument jest wiekszy(lub rowny) od drugiego
<(=) wynik true gdy pierwszy argument jest mniejszy(lub rowny) od drugiego

*/

var a = 10, b = 15;
var dodawanie = a + b;
var odejmowanie = a - b;
var mnozenie = a * b;
var dzielenie = a / b;
document.write("Zmienna a = " + a + "<br>" + "Zmienna b = " + b + "<br>");


document.write("Dodawanie:" + dodawanie + "<br>" + " odejmowanie: " + odejmowanie + "<br>" + " mnożenie: " + mnozenie + "<br>" + " dzielenie: " + dzielenie)


