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

//////////////////////////////////////////////////// zadanie


var suma = 0;
for (i = 1; i<=100; i++) {

  if((i%4) ==0) {
    var x = i+1;
    document.write(x + "<br>");
    suma += x;

  }
  if(suma > 100) {
    break;
  }
}


//zasięg zmiennych
//zmienna globalna - jest widoczna w calym skrypcie
//zmienna lokalna - jest widoczna tylko wewnatrz funkcji w ktorej jest zadeklarowana
//słowo kluczowe - var służy do deklarowania zmiennych jak 
//np var a - zmienna lokalna
//np b - zmienna globalna

function suma() {
  var i;
  wynik = 0;//zmienna globalna 
  var l_p=arguments.length;
  for(i=0;i<l_p;i++) {
    wynik+=arguments[i];
  }
  return wynik;
}

suma(3,5,7);

document.write("Suma elementów: " + wynik);

//zmienna jest widoczna tylkow bloku {}
// słowo kluczowe let - do tworzenia zmiennych o zasięgu blokowym.
//np. let a;

let a = 10;

{
  let a = 15;
  document.write("Zmienna w bloku: " + a)
}
document.write("Zmienna globalna: " + a)

//funkcje wbudowane 

/**
 * parseInt()
 * parseFloat()
 * IsNaN()
 * isFinite()
 * alert()
 */

//parseInt() - pobiera argument dowolnego typu zwraca wartość liczbową

//parseInt("123") -> 123
//parseInt("123AB", 16) -> 74667
//parseInt("123", 8) -> 83
//parseInt("123AB", 8) -> 83 //bez AB
//parseInt("0337") -> 255 //jako ósemkowy
//parseInt("0x373") ->883 // jako szesnastkowy

var c1= "12", c2 = "34";
var wynik = c1+c2;
document.write("Zwykłe dodawanie c1+c2 = " + wynik + " <br>")

c1=parseInt(c1); //konwersja bierzącej zawartości tekstu 
c2=parseInt(c2);
var wynik = c1+c2;
document.write("dodawanie po konwersji na liczby c1+c2 = " + wynik + " <br>")

//parseFloat() - działa jak parseInt, można ją stosować do wartości ułamkowych.
//np parseFloat("432.32");

//IsNaN() - sprawdza czy wartość parametru nie jest liczbą 

//IsNaN(NaN) -> true
//IsNaN(567) -> false
//IsNaN(54.54) -> false
//IsNaN("zx334") -> true

//isFinite() - sprawdza czy parametr to liczba różna od infinity(nieskonczonsci) oraz NaN
//isFinite(infinity) -> false
//isFinite(-infinity) -> false
//isFinite(67) -> true
//isFinite(2E23) -> true

//alert() - wyświetla komunikat w oknie dialogowym 
