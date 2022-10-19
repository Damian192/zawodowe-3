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

//OPERATORY BITOWE
// & AND iloczyn bitowy
// | OR suma bitowa  0101|0101=0101
// ~ NOT negacja bitowa ~0101=1010
// ^ bitowa roznica symetryczna 0101^0001=0100
// >> przesuniecie bitow w prawo 0101>>1=0010
// << przesuniecie bitow w lewo 0101<<1=1010
// >>> przesuniecie bitowe w prawo z wypelnieniem zerami 0101>>>1=0010


//OPERATORY LOGICZNE
//&& and iloczyn logiczny a&&b (true gdy a i b jest true)
// || or suma logiczna a||b (false tylko gdy a i b jest false)
// | not negacja logiczna !a (zmienia wartosc a na przeciwna)

//OPERATORY PRZYPISANIA
// += x=x+y
// -= x = x-y
// *= x = x*y
// /= x = x/y
// %= x = x%y

var a = 10, b = 15;
var dodawanie = a + b;
var odejmowanie = a - b;
var mnozenie = a * b;
var dzielenie = a / b;
document.write("Zmienna a = " + a + "<br>" + "Zmienna b = " + b + "<br>");


document.write("Dodawanie:" + dodawanie + "<br>" + " odejmowanie: " + odejmowanie + "<br>" + " mnożenie: " + mnozenie + "<br>" + " dzielenie: " + dzielenie)

//instrukcja break;

var i = 0,
k = 5;

do {
  var j = k*i;
  document.write("Wynik to: " + j + "<br>");

  if(j > 30) break; // break konczy petle
} while(i++<10)

  
  
  //////////////////////////////////////////////////// zadanie
  for(var i = 1; i<=10; i++) {
for(var k = 1; k <=9; k++) {
  var x = k*i;
  document.write(i+ "*" + k + "=" + x);
  document.write("<br>");
 }}

