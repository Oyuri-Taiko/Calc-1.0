#include <iostream>
using namespace std;

double long dodawanie(auto skladnik_1, auto skladnik_2);
double long odejmowanie(auto odejmna, auto odejmnik);
double long mnozenie(auto czynnik_1, auto czynnik_2);
double long dzielenie(auto dzielna, auto dzielnik);
double long potega(auto podstawa, int stopien);
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
	if(0 < dzialanie < 6)
		{
			double long a;
			double long b;
		
			cout << "\nWybrano ";
			switch(dzialanie)
					{
						case 1:	
						cout << "dodawanie";
						break; 		 
						case 2:
						cout << "odejmowanie"; 
						break; 
						case 3:
						cout << "mnozenie";
						break; 
						case 4:
						cout << "dzielenie";
						break; 
						case 5:
						cout << "potegowanie";
						break; 
					}
			cout <<", podaj wartosc a : ";
			cin >> a;
			cout << "\nPodaj wartosc b : ";
			cin >> b;
			cout << "\nWprowadzono wartosci a = "  << a <<" b = " << b << " ";
				switch(dzialanie)
					{
						case 1:	
						cout << ", dla podanych wartosci suma wynosi = " << dodawanie(a, b) << "\n\n";
						goto abc;	 		 
						case 2:
						cout << ", dla podanych wartosci roznica wynosi = " << odejmowanie(a, b) << "\n\n";
						goto abc;	 
						case 3:
						cout << ", dla podanych wartosci iloraz wynosi = " << mnozenie(a, b) << "\n\n";
						goto abc;	 
						case 4:
						cout << ", dla podanych wartosci iloraz wynosi = " << mnozenie(a, b) << "\n\n";
						goto abc;	 
						case 5:
						cout << ", dla podanych wartosci potegowanie wynosi = " << potega(a, b) << "\n\n";
						goto abc;	 
					}
		}
	
	else
				cout << "\nWybrano nieprawidlowy numer, powrot do menu glownego. \n\n";
		goto abc;
		
}
//**************************************************************************************
double long dodawanie(auto skladnik_1, auto skladnik_2 )
{
	return skladnik_1 + skladnik_2;
}
//****************************************************************************************
double long odejmowanie(auto odjemna, auto odjemnik)
{
	return  odjemna - odjemnik;
}
//******************************************************************************************
double long mnozenie(auto czynnik_1, auto czynnik_2)
{
	return czynnik_1 * czynnik_2;
}
//***************************************************************************************
double long dzielenie(auto dzielna, auto dzielnik)
{
	return dzielna / dzielnik;
}
//***************************************************************************************
double long potega(auto podstawa, int stopien)
{
	long wynik = podstawa;
	for(int s = 1 ; s < stopien ; ++s)
	{
		wynik = wynik * podstawa;
	}
	return wynik;
}
