#include <iostream>
#include <iomanip>

#include "tablica.h"

using namespace std;

void ispisivanje_tablice()
{

    cout << endl << setw(2);

    // Petlja koja ispisuje sve u potrebnom obliku
    // Posto se treba ispisivati vodoravno, a x koordinata se krece vodoravno, ovo je obrnuto od prijasnje funkcije
    // U funkciji se takodjer koristi i \n te endl;
    for(int y = 0; y < 13; y++)
    {

        for(int x = 0; x < 20; x++)
        {

            cout << tablica[x][y];

            // Ako je kraj x koordinate, nastavlja upis u novom redu
            if(x == 19)
            {
                cout << endl << setw(2);
            }

        }

    }

}
