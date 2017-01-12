#include <iostream>

#include "classes.h"
#include "tablica.h"

// Funkcija koja brise sva polja u tablici
// Ispuni svako polje znakom NUL
void brisanjeSvihPolja()
{

    for(int x = 1; x < 4; x++)
    {
        for(int y = 1; y < 4; y++)
        {
            int pocetniX = 3 + (6 * (x-1));
            int pocetniY = 2 + (4 * (y-1));

            for(int poljeY = 0; poljeY < 3; poljeY++)
            {
                for(int poljeX = 0; poljeX < 5; poljeX++)
                {
                    tablica[pocetniX + poljeX][pocetniY + poljeY] = 0;
                }
            }
        }
    }
}
