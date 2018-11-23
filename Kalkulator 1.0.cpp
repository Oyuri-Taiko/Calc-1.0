#include <iostream>
using namespace std;

auto dodawanie(auto skladnik_1, auto skladnik_2 ) -> double long;
auto odejmowanie(auto odejmna, auto odejmnik) -> double long;
auto mnozenie(auto czynnik_1, auto czynnik_2) -> double long;
auto dzielenie(auto dzielna, auto dzielnik) -> double long;
auto potega(auto stopien, auto liczba) -> double long;
//*******************************************************************
int main()
{
	abc:
	
	cout 
		 << "1) Dodawanie\n"
		 << "2) Odejmowanie\n"
		 << "3) Mnozenie\n"
		 << "4) Dzielenie\n"
		 << "5) Potegowanie\n"
		 << "\nWybierz numer dzialania : ";
	int dzialanie;
	cin >> dzialanie;	
	switch(dzialanie)
	{
		double long a;
		double long b;
		case 1:	
			cout << "\nWybrano dodawanie, podaj wartosc a : ";
			cin >> a;
			cout << "\nPodaj wartosc b : ";
			cin >> b;
			cout << "\nWprowadzono wartosci a = "  << a <<" b = " << b << " "
				 << ", dla podanych wartosci suma wynosi = " << dodawanie(a, b) << "\n\n";
		goto abc;	 		 
		case 2:
			cout << "\nWybrano odejmowanie, podaj wartosc a : ";
			cin >> a;
			cout << "\nPodaj wartosc b : ";
			cin >> b;
			cout << "\nWprowadzono wartosci a = "  << a <<" b = " << b << " "
				 << ", dla podanych wartosci roznica wynosi = " << odejmowanie(a, b) << "\n\n";
		goto abc;	 
		case 3:
			cout << "\nWybrano mnozenie, podaj wartosc a : ";
			cin >> a;
			cout << "\nPodaj wartosc b : ";
			cin >> b;
			cout << "\nWprowadzono wartosci a = "  << a <<" b = " << b << " "
				 << ", dla podanych wartosci iloraz wynosi = " << mnozenie(a, b) << "\n\n";
		goto abc;	 
		case 4:
			cout << "\nWybrano dzielenie, podaj wartosc a : ";
			cin >> a;
			cout << "\nPodaj wartosc b : ";
			cin >> b;
			cout << "\nWprowadzono wartosci a = "  << a <<" b = " << b << " "
				 << ", dla podanych wartosci iloraz wynosi = " << mnozenie(a, b) << "\n\n";
		goto abc;	 
		case 5:
			cout << "\nWybrano potegowanie, podaj wartosc podstawy a : ";
			cin >> a;
			cout << "\nPodaj wartosc stopnia: ";
			cin >> b;
			cout << "\nWprowadzono wartosci a = "  << a <<" b = " << b << " "
				 << ", dla podanych wartosci potegowanie wynosi = " << potega(a, b) << "\n\n";
		goto abc;	 
		default:
			cout << "\nWybrano nieprawidlowy numer, powrot do menu glownego. \n\n";
		goto abc;
	}
}
//**************************************************************************************
auto dodawanie(auto skladnik_1, auto skladnik_2 ) -> double long
{
	return skladnik_1 + skladnik_2;
}
//****************************************************************************************
auto odejmowanie(auto odjemna, auto odjemnik) -> double long
{
	return  odjemna - odjemnik;
}
//******************************************************************************************
auto mnozenie(auto czynnik_1, auto czynnik_2) -> double long
{
	return czynnik_1 * czynnik_2;
}
//***************************************************************************************
auto dzielenie(auto dzielna, auto dzielnik) -> double long
{
	return dzielna / dzielnik;
}
//***************************************************************************************
auto potega(auto stopien, auto liczba) -> double long
{
	long wynik = liczba;
	for(int s = 1 ; s < stopien ; ++s)
	{
		wynik = wynik * liczba;
	}
	return wynik;
}
