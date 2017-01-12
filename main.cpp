#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>

#include "classes.h"
#include "tablica.h"

using namespace std;

// Deklaracija arraya koji ce sadrzavati tablicu za krizic kruzic, takodjer "extern"
char tablica[20][13] = {0};
//         x=^^  ^^=y

// Deklaracija "extern" varijabli (njihova deklaracija kao "extern" se nalazi u jednom od dva .h)
char likKrizic[5][3] = {0};
char likKruzic[5][3] = {0};
char brisanjePolja[5][3] = {0};

Igrac igrac1;
Igrac igrac2;

int main()
{
    // Postavljaju se pocetne vrijednosti igraca
    igrac1.jeKruzic = 0;
    igrac1.pobjede = 0;
    //
    igrac2.jeKruzic = 1;
    igrac2.pobjede = 0;

    // Pokrecu se osnovne vrijednosti u arrayu
    crtanjeTablice();
    stvaranje_krizic();
    stvaranje_kruzic();

    // Dobrodoslica
    cout << "Dobrodosli u igru krizic kruzic!\n\n" << endl;

    // Trazi se unos imena igraca
    cout << "Igrac 1 (X) - Unesi svoje ime: ";
    getline(cin, igrac1.ime);
    cout << "Igrac 2 (O) - Unesi svoje ime: ";
    getline(cin, igrac2.ime);

    system("cls");

    unsigned int maxBodovi;

    // Trazi se unos broja bodova do kojeg ce se igrati
    cout << "Unesi broj bodova do kojeg ce se igrati: ";
    cin >> maxBodovi;

    system("cls");

    // Zapocinje se igra koja zavrsava kada se dodje do odredjenog broja bodova
    while(igrac1.pobjede < maxBodovi || igrac2.pobjede < maxBodovi)
    {

        prvi_igra_krizic();

        // Rezervna petlja koja izbacuje u slucaju da se dostigne broj bodova prije kraja petlje
        if(igrac1.pobjede >= maxBodovi || igrac2.pobjede >= maxBodovi)
        {
            break;
        }

        prvi_igra_kruzic();

        // Petlja za rezervu jer nesto propustam pa while ne zeli sam izbacit...
        if(igrac1.pobjede >= maxBodovi || igrac2.pobjede >= maxBodovi)
        {
            break;
        }

    }

    system("cls");

    // U slucaju da pobjedi igrac1
    if(igrac1.pobjede > igrac2.pobjede)
    {
        cout << "\nPobjedio je " << igrac1.ime << "!\n\nPritisni tipku Enter za nastavak..." << endl;
        getch();
    }

    // U slucaju da pobjedi igrac2
    else
    {
        cout << "\nPobjedio je " << igrac2.ime << "!\n\nPritisni tipku Enter za nastavak..." << endl;
        getch();
    }

    string odlukaSpremanje;

    // Spremanje rezultata u .txt obliku
    cout << "Zelite li spremiti rezultat? (Y/N)\n\nOdabir je: ";
    cin >> odlukaSpremanje;

    // Ako se odgovori s Y ili y, sprema se
    if(odlukaSpremanje == "Y" || odlukaSpremanje == "y")
    {

        string imeFilea;

        // Stvaranje imena filea od imena igraca
        imeFilea = igrac1.ime;
        imeFilea += " vs ";
        imeFilea += igrac2.ime;
        imeFilea += ".txt";

        // Spremanje
        ofstream spremanje;
        spremanje.open(imeFilea.c_str());
        spremanje << igrac1.ime << " - " << igrac1.pobjede << "\n" << igrac2.ime << " - " << igrac2.pobjede;
        spremanje.close();

    }

        system("cls");
        cout << "Izlazak iz programa. Pritisni tipku Enter za nastavak...";
        getch();
        return 0;

    /*if(pocetakLinearneProvjere(1, 3) == true)
    {
        cout << "\n\n\nTri znaka su u liniji!" << endl;
    }

    else
    {
        cout << "\n\n\nNema tri znaka koja su u liniji" << endl;
    }

    getch();

    pobjednikRunde();

    //cout << igrac1.pobjede << " " << igrac2.pobjede;

    ispisivanje_tablice();

    if(pocetakLinearneProvjere(0, 3) == true)
    {
        cout << "\n\n\nTri znaka su u liniji!" << endl;
    }

    else
    {
        cout << "\n\n\nNema tri znaka koja su u liniji" << endl;
    }*/
}
