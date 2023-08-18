#include "jadlospislista.h"

bool JadlospisLista::dodaj(Jadlospis jadlospis) {
	Jadlospis* tmp = new Jadlospis[index + 1];
	//Jadlospis* wsk = &this->jadlospis[0];
	//Jadlospis* wsktmp = &tmp[0];
	//wsktmp = wsk;
	for (unsigned int i = 0; i < index; i++) {
		//*wsktmp = *wsk;
		//wsktmp++;
		//wsk++;
		tmp[i] = this->jadlospis[i];
	}
	//wsktmp + index;
	//*wsktmp = jadlospis;
	//tmp + (index) = jadlospis;
	tmp[index++] = jadlospis;
	//index++;
	//wsk = wsktmp;
	this->jadlospis = tmp;
	return true;
}

bool JadlospisLista::dodajPrzed(Jadlospis jadlospis, Jadlospis element) {
	Jadlospis* tmp = new Jadlospis[++index];
	for (unsigned int i = 0, j = 0; i < index; i++) {
		if (this->jadlospis[j] == element) 
			tmp[i++] = jadlospis;
			
		tmp[i] = this->jadlospis[j++];
	}
	this->jadlospis = tmp;
	return 0;
}

bool JadlospisLista::zamienElement(Jadlospis jadlospis, Jadlospis element) {
	for (unsigned int i = 0; i < index; i++) {
		if (this->jadlospis[i] == element) {
			this->jadlospis[i] = jadlospis;
			return true;
		}
	}
	return false;
}

void JadlospisLista::wyswietlListe() {
	for (unsigned int i = 0; i < index; i++) {
		std::cout << jadlospis[i].wezNazwe() << " ";
	}
}

void JadlospisLista::wyswietlDzieci(Jadlospis* jadlospis) {
	for (unsigned int i = 0; i < index; i++) {
		//std::cerr << "CERR " << this->jadlospis[i].wezNazwe() << " " << this->jadlospis[i].czyRodzic(jadlospis) << "\n";

		if (this->jadlospis[i].czyRodzic(jadlospis)) std::cout << this->jadlospis[i].wezNazwe() << " ";
	}
}

Jadlospis JadlospisLista::wezRodzica(std::string nazwa, unsigned int element) {
	return (this->jadlospis[element].wezNazwe() == nazwa) ? this->jadlospis[element] : wezRodzica(nazwa, element + 1);
}

Jadlospis* JadlospisLista::wezRodzicaWsk(std::string nazwa, unsigned int element) {
	Jadlospis* wsk = &this->jadlospis[element];
	return (this->jadlospis[element].wezNazwe() == nazwa) ? wsk : wezRodzicaWsk(nazwa, element + 1);
}