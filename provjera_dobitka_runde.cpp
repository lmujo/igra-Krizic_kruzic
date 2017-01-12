#include <iostream>
#include <conio.h>

#include "classes.h"
#include "tablica.h"

using namespace std;

// Sluzi za unos varijabli u sljedecu funkciju, te u principu provjerava je li netko pobjedio
bool pocetakLinearneProvjere(int x, int y)
{

    if(provjeraLinearno(x, y, 1, 0) == true)
    {
        return true;
    }

    if(provjeraLinearno(x, y, 0, 1) == true)
    {
        return true;
    }

    if(provjeraLinearno(x, y, 1, -1) == true)
    {
        return true;
    }

    if(provjeraLinearno(x, y, 1, 1) == true)
    {
        return true;
    }

    //U slucaju da niti jedan od ovih nije istina, vraca negativan odgovor
    return false;

}

// Provjerava podudaraju li se 3 znaka u linearnom smjeru (horiz., vertik., dijag.)
bool provjeraLinearno(int provjeraX, int provjeraY, int smjerX, int smjerY)
{
    int pocetnaTocka = tablica[provjeraX][provjeraY];

    for(int korak = 1; korak < 3; korak++)
    {
        // Ako nisu 3 znaka za redom (ili ako jesu, ali su sva tri znaka NUL/prazna mjesta) vraca negativni odgovor
        if(tablica[provjeraX + (6 * (korak * smjerX))][provjeraY + (4 * (korak * smjerY))] != pocetnaTocka || tablica[provjeraX + (6 * (korak * smjerX))][provjeraY + (4 * (korak * smjerY))] == 0)
        {
            return false;
        }
    }

    return true;

}

// Provjerava se je li pobjednik runde krizic ili kruzic, njemu se dodaje bod te se ispisuje njegovo ime kao ime pobjednika
// Bool je kako bi se mogla prekinut runda u slucaju zavrsetka
bool pobjednikRunde()
{

    for(int y = 0; y < 3; y++)
    {
        for(int x = 0; x < 3; x++)
        {
            if(pocetakLinearneProvjere(4 + (6 * x), 2 + (4 * y))== true)
            {

                // U slucaju krizica
                if(tablica[4 + (6 * x)][2 + (4*y)] == '\\') // taj znak je "\"
                {

                    ispisivanje_tablice();
                    cout << igrac1.ime << " je pobjednik!" << endl;
                    igrac1.pobjede++;
                    getch();

                }

                // U slucaju kruzica
                else
                {

                    ispisivanje_tablice();
                    cout << igrac2.ime << " je pobjednik!" << endl;
                    igrac2.pobjede++;
                    getch();

                }


                // U slucaju da se dogodila pobjeda, brisu se polja tablice
                brisanjeSvihPolja();

                return true;
            }

        }
    }

    return false;

}

// Nepotrebno zbog gornje funkcije, nije dovrseno posto ne uracunava razmak izmedju trazenih tocaka (za x je 6, za y je 4)
/*
// Sluzi za provjeru jesu li tri ista znaka zaredani horizontalno - sto bi oznacavalo pobjedu
bool provjeraHorizontalno(int provjeraX, int provjeraY)
{
    int pocetnaTocka = tablica[provjeraX][provjeraY];

    for(int korak = 1; korak < 3.; korak++)
    {
        if(tablica[provjeraX + korak][provjeraY] != pocetnaTocka)
        {
            return false;
        }

        return true;

    }
}

// Sluzi za provjeru jesu li tri ista znaka zaredani vertikalno - sto bi oznacavalo pobjedu
bool provjeraVertikalno(int provjeraX, int provjeraY)
{
    int pocetnaTocka = tablica[provjeraX][provjeraY];

    for(int korak = 0; korak < 3.; korak++)
    {
        if(tablica[provjeraX][provjeraY + korak] != pocetnaTocka)
        {
            return false;
        }

        return true;

    }
}

// Sluzi za provjeru jesu li tri ista znaka zaredani dijagonalno prema gore - sto bi oznacavalo pobjedu
bool provjeraDijagonalnoGore(int provjeraX, int provjeraY)
{
    int pocetnaTocka = tablica[provjeraX][provjeraY];

    for(int korak = 2; korak < 0; korak++)
    {
        if(tablica[provjeraX + korak][provjeraY - korak] != pocetnaTocka)
        {
            return false;
        }

        return true;

    }
}

// Sluzi za provjeru jesu li tri ista znaka zaredani dijagonalno prema dolje - sto bi oznacavalo pobjedu
bool provjeraDijagonalnoDolje(int provjeraX, int provjeraY)
{
    int pocetnaTocka = tablica[provjeraX][provjeraY];

    for(int korak = 0; korak < 0.; korak++)
    {
        if(tablica[provjeraX + korak][provjeraY + korak] != pocetnaTocka)
        {
            return false;
        }

        return true;

    }
}
*/
