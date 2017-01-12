#include <iostream>

#include "tablica.h"

// Unosenje krizica i kruzica u tablicu
void unos_u_tablicu(int koordX, int koordY, int igrac)
{

    for(int x = 1; x < 4; x++)
    {
        for(int y = 1; y < 4; y++)
        {
            if(koordX == x && koordY == y)
            {
                int pocetniX = 3 + (6 * (x-1));
                int pocetniY = 2 + (4 * (y-1));

                // 0 = igrac je krizic
                if(igrac == 0)
                {
                    for(int poljeY = 0; poljeY < 3; poljeY++)
                    {
                        for(int poljeX = 0; poljeX < 5; poljeX++)
                        {
                            tablica[pocetniX + poljeX][pocetniY + poljeY] = likKrizic[poljeX][poljeY]; // likKrizic je oblik krizica
                        }
                    }
                }

                // 1 = igrac je kruzic
                else if(igrac == 1)
                {
                    for(int poljeY = 0; poljeY < 3; poljeY++)
                    {
                        for(int poljeX = 0; poljeX < 5; poljeX++)
                        {
                            tablica[pocetniX + poljeX][pocetniY + poljeY] = likKruzic[poljeX][poljeY]; // likKruzic je oblik kruzica
                        }
                    }
                }

            }
        }
    }

}
