#include <iostream>

#include "tablica.h"

// Stvara array za oblik krizica
void stvaranje_krizic()
{

    likKrizic[1][0] = 92; // "\"
    likKrizic[3][0] = 47; // "/"

    likKrizic[2][1] = 88; // "X"

    likKrizic[1][2] = 47; // "/"
    likKrizic[3][2] = 92; // "\"

}

// Stvara array za oblik kruzica
void stvaranje_kruzic()
{

    likKruzic[1][0] = 218; // "┌"
    likKruzic[2][0] = 196; // "─"
    likKruzic[3][0] = 191; // "┐"

    likKruzic[1][1] = 179; // "│"
    likKruzic[3][1] = 179; // "│"

    likKruzic[1][2] = 192; // "└"
    likKruzic[2][2] = 196; // "─"
    likKruzic[3][2] = 217; // "┘"

}

/*
// Stvara array za brisanje polja
void stvaranje_brisanjePolja()
{

    for(int x = 0; x < 5; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            brisanjePolja[x][y] = 0;
        }
    }

} */
