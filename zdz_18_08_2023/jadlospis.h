#pragma once
#ifndef _JADLOSPIS_H
#define _JADLOSPIS_H
#include <string>
#include <iostream>

class Jadlospis
{
	std::string nazwa;
	Jadlospis* rodzic;

	int a = 0;

public:
	bool operator==(Jadlospis& a) {
		return a.nazwa == this->nazwa ? true : false;
	}

	bool operator==(Jadlospis* a) {
		//std::cerr << a;
		return a == this ? true : false;
	}

	Jadlospis() { rodzic = 0; }
	Jadlospis(std::string nazwa, Jadlospis* rodzic = 0) : nazwa(nazwa), rodzic(rodzic) { }

	bool dodaj(std::string nazwa, Jadlospis* rodzic = 0);

	inline bool czyRodzic(Jadlospis* jadlospis) { 
		return (rodzic && (*jadlospis == *rodzic)) ? true : false;
	}
	Jadlospis* pobierzDzieci(std::string nazwa);
	//Jadlospis* pobierzDzieci(Jadlospis* rodzic);
	//Jadlospis* wezRodzic(std::string nazwa);
	//Jadlospis* wezRodzic(Jadlospis* dziecko);

	inline const std::string wezNazwe() { return nazwa; }


	

	friend std::ostream& operator<<(std::ostream& o, Jadlospis a) {
		o << a.wezNazwe() << (a.rodzic ? a.rodzic->wezNazwe() : " BRAK RODZICA\n");
		return o;
	}
};


#endif