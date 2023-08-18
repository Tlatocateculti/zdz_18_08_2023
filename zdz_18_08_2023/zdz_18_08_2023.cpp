// zdz_18_08_2023.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

#include "jadlospislista.h"



int main()
{

    JadlospisLista menu;
    Jadlospis warzywa("WARZYWA");
    Jadlospis owoce("OWOCE");

    menu.dodaj(warzywa);
    menu.dodaj(Jadlospis("OWOCE"));
    menu.dodaj(Jadlospis("bulwy", menu.wezRodzicaWsk("WARZYWA")));
    menu.dodaj(Jadlospis("ziemniaki", menu.wezRodzicaWsk("bulwy")));

    menu.dodaj(Jadlospis("kalarepa", menu.wezRodzicaWsk("bulwy")));
    //menu.dodaj(Jadlospis("kalafior", menu.wezRodzicaWsk("WARZYWA")));
    menu.dodajPrzed(Jadlospis("kalafior", menu.wezRodzicaWsk("WARZYWA")), menu.wezRodzica("bulwy"));
    //std::cout << menu.wezRodzica("WARZYWA");
    //std::cout << menu.wezRodzica("ziemniaki");
    //menu.wyswietlListe();
    menu.zamienElement(Jadlospis("fasola", menu.wezRodzicaWsk("WARZYWA")), menu.wezRodzica("kalafior"));
    menu.wyswietlDzieci(menu.wezRodzicaWsk("WARZYWA"));
    //Jadlospis jadlo;
    //jadlo.dodaj("WARZYWA");
    Jadlospis* kopia = &warzywa;
    if (warzywa == owoce)
        std::cout << "działa";
    //std::cout << "Hello World!\n";
}


