#include <iostream>
#include <iomanip>

#include "tablica.h"

void crtanjeTablice()
{

    // Izmjena x koordinate tablice (ova cijela petlja zapravo sluzi za upisivanje informacija u potrebne memorijske lokacije od tablica[x][y];)
    for (int x = 0; x < 20; x++)
    {
       //  cout << "runda " << x << endl; // Sluzi za provjeru funkcionalnosti

        // Stavljaju se horizontalne crte na mjesta kako bi se kasnije lakse odredile tocne kordinate polja
        if(x == 5)
        {
            tablica[x][0] = '1';
            tablica[3][1] = 205;
            tablica[4][1] = 205;
            tablica[5][1] = 205;
            tablica[6][1] = 205;
            tablica[7][1] = 205;
        }

        // Vidi prijasnji komentar ^
        if(x == 11)
        {
            tablica[x][0] = '2';
            tablica[9][1] = 205;
            tablica[10][1] = 205;
            tablica[11][1] = 205;
            tablica[12][1] = 205;
            tablica[13][1] = 205;
        }

        // Vidi prijasnji komentar ^
        if(x == 17)
        {
            tablica[x][0] = '3';
            tablica[15][1] = 205;
            tablica[16][1] = 205;
            tablica[17][1] = 205;
            tablica[18][1] = 205;
            tablica[19][1] = 205;
        }

        //cout << "na mjestu je " << tablica[x][0] << endl; // Sluzi za provjeru funkcionalnosti

        // Izmjena y koordinate tablice
        for(int y = 0; y < 13; y++)
        {

            if((x == 8 || x == 14) && y > 1 && y != 5 && y != 9)
            {

                tablica[x][y] = 179;

            }

            if((y == 5 || y == 9) && x > 2)
            {

                tablica[x][y] = 196;

                if(x == 8 || x == 14)
                {

                    tablica[x][y] = 197;

                }

            }

            // Stavljaju se vertikalne crte na mjesta kako bi se kasnije lakse odredile tocne kordinate polja
            if(x == 2)
            {

                tablica[x][2] = 186;
                tablica[x][3] = 186;
                tablica[x-1][3] = '1';
                tablica[x][4] = 186;

                tablica[x][6] = 186;
                tablica[x][7] = 186;
                tablica[x-1][7] = '2';
                tablica[x][8] = 186;

                tablica[x][10] = 186;
                tablica[x][11] = 186;
                tablica[x-1][11] = '3';
                tablica[x][12] = 186;

            }

            //cout << x << " i " << y << endl; // Sluzi za provjeru funkcionalnosti
        }

    }

}
