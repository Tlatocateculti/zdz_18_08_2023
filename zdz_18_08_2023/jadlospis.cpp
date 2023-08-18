#include "jadlospis.h"


bool Jadlospis::dodaj(std::string nazwa, Jadlospis* rodzic) {
	this->nazwa = nazwa;
	if (rodzic) this->rodzic = rodzic;
	return true;
}

Jadlospis* Jadlospis::pobierzDzieci(std::string nazwa) {
	if (!rodzic) return 0;
	return 0;
}
