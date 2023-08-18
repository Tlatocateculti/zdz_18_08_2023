#pragma once
#ifndef _JADLOSPIS_H_
#define _JADLOSPIS_H_

#include <iostream>
#include "jadlospis.h"

class JadlospisLista
{
	Jadlospis* jadlospis;
	unsigned long index;

public:

	JadlospisLista() {
		jadlospis = new Jadlospis[1000];
		index = 0;
	};

	bool dodaj(Jadlospis jadlospis);
	bool dodajPrzed(Jadlospis jadlospis, Jadlospis element);
	bool zamienElement(Jadlospis jadlospis, Jadlospis element);
	//bool dodaj(Jadlospis* jadlospis);

	void wyswietlListe();
	void wyswietlDzieci(Jadlospis* jadlospis);
	Jadlospis wezRodzica(std::string nazwa, unsigned int element = 0);

	Jadlospis* wezRodzicaWsk(std::string nazwa, unsigned int element = 0);
};
#endif

