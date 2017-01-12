#include <iostream>
#include <conio.h>
#include <windows.h>

#include "classes.h"
#include "tablica.h"

// Kada je krizic prvi na redu
void prvi_igra_krizic()
{

    unsigned int unosX, unosY, kruzic = 0;

    system("cls");

    // Igra se do maksimalnog broja krugova od 9 (zato sto ima 9 mjesta na polju)
    for(int turn = 0; turn < 9; turn++)
    {
        // Ova petlja izbacuje samo kada je unos dobro prosao
        while(true)
        {

            // Izjavljuje se broj bodova na pocetku
            cout << igrac1.ime << " (X) - " << igrac1.pobjede << " Bodova." << endl;
            cout << igrac2.ime << " (O) - " << igrac2.pobjede << " Bodova." << endl;

            // Ispisuje se tablica
            ispisivanje_tablice();

            cout << "\n\n";

            // Pracenje tko igra prvi
            if(turn % 2 == 0)
            {
                kruzic = 0;
                cout << igrac1.ime << ", ti si na redu!" << endl;
            }

            // Pracenje tko igra prvi
            if(turn % 2 == 1)
            {
                kruzic = 1;
                cout << igrac2.ime << ", ti si na redu!" << endl;
            }

            cout << "\nUnesi koordinate gdje zelis postaviti ";

            if(kruzic == 0)
            {
                cout << "krizic!\n" << endl;
            }

            else if(kruzic == 1)
            {
                cout << "kruzic!\n" << endl;
            }

            // Unos koordinata za postavljanje krizica ili kruzica
            cout << "X koordinata: ";
            cin >> unosX;

            cout << "\nY koordinata: ";
            cin >> unosY;

            // Mozda nepotrebno, uglavnom ako je prvo mjesto na koje se upisuje slobodno, onda nastavi upis
            if(tablica[4 + (6 * (unosX-1))][2 + (4 * (unosY-1))] == 0)
            {
                break;
            }

            // Ako nije slobodno, onda ga obustavi i prikaze poruku
            else if(unosX > 3 || unosY > 3)
            {
                cout << "\nKrivi unos!";
                getch();

            }

            // Ako mjesto nije slobodno i ako je broj manji od 3, daje gresku.. iako se to nebi trebalo uopce dogoditi
            else
            {
                cout << "\nKrivi unos!";
                getch();

            }

        }

        // Unosi se krizic ili kruzic u tablicu
        unos_u_tablicu(unosX, unosY, kruzic);

        //cout << "TURN - " << turn << "\n\n\n";

        system("cls");

        // Ako funkcija pobjednikRunde() vrati istinit rezultat, pobjednik postoji te petlja izlazi natrag u funkciju gdje je cijela ova funkcija pozvana
        if (pobjednikRunde() == true)
        {

            return;

        }

    }

    // Ispisuje se tablica
    ispisivanje_tablice();

    // Ako je igra zavrsila nerjeseno, brisu se polja te se zapocinje drugi krug
    brisanjeSvihPolja();

    cout << "Na tablici vise nema mjesta za znakove te se ova runda zavrsava nerjeseno.\nPritisni tipku Enter za nastavak...";
    getch();

}

// Kada je krizic prvi na redu
void prvi_igra_kruzic()
{

    unsigned int unosX, unosY, kruzic = 0;

    system("cls");

    // Igra se do maksimalnog broja krugova od 9 (zato sto ima 9 mjesta na polju)
    for(int turn = 0; turn < 9; turn++)
    {
        // Ova petlja izbacuje samo kada je unos dobro prosao
        while(true)
        {

            // Izjavljuje se broj bodova na pocetku
            cout << igrac1.ime << " (X) - " << igrac1.pobjede << " Bodova." << endl;
            cout << igrac2.ime << " (O) - " << igrac2.pobjede << " Bodova." << endl;

            // Ispisuje se tablica
            ispisivanje_tablice();

            cout << "\n\n";

            // Pracenje tko igra prvi
            if(turn % 2 == 1)
            {
                kruzic = 0;
                cout << igrac1.ime << ", ti si na redu!" << endl;
            }

            // Pracenje tko igra prvi
            if(turn % 2 == 0)
            {
                kruzic = 1;
                cout << igrac2.ime << ", ti si na redu!" << endl;
            }

            cout << "\nUnesi koordinate gdje zelis postaviti ";

            if(kruzic == 0)
            {
                cout << "krizic!\n" << endl;
            }

            else if(kruzic == 1)
            {
                cout << "kruzic!\n" << endl;
            }

            // Unos koordinata za postavljanje krizica ili kruzica
            cout << "X koordinata: ";
            cin >> unosX;

            cout << "\nY koordinata: ";
            cin >> unosY;

            // Mozda nepotrebno, uglavnom ako je prvo mjesto na koje se upisuje slobodno, onda nastavi upis
            if(tablica[4 + (6 * (unosX-1))][2 + (4 * (unosY-1))] == 0)
            {
                break;
            }

            // Ako nije slobodno, onda ga obustavi i prikaze poruku
            else if(unosX > 3 || unosY > 3)
            {
                cout << "\nKrivi unos!";
                getch();

            }

            // Ako mjesto nije slobodno i ako je broj manji od 3, daje gresku.. iako se to nebi trebalo uopce dogoditi
            else
            {
                cout << "\nKrivi unos!";
                getch();

            }

        }

        // Unosi se krizic ili kruzic u tablicu
        unos_u_tablicu(unosX, unosY, kruzic);

        //cout << "TURN - " << turn << "\n\n\n";

        system("cls");

        // Ako funkcija pobjednikRunde() vrati istinit rezultat, pobjednik postoji te petlja izlazi natrag u funkciju gdje je cijela ova funkcija pozvana
        if (pobjednikRunde() == true)
        {

            return;

        }

    }

    // Ispisuje se tablica
    ispisivanje_tablice();

    // Ako je igra zavrsila nerjeseno, brisu se polja te se zapocinje drugi krug
    brisanjeSvihPolja();

    cout << "Na tablici vise nema mjesta za znakove te se ova runda zavrsava nerjeseno.\nPritisni tipku Enter za nastavak...";
    getch();

}
