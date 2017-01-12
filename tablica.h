#ifndef TABLICA_H_INCLUDED
#define TABLICA_H_INCLUDED

void crtanjeTablice();
void stvaranje_krizic();
void stvaranje_kruzic();
//void stvaranje_brisanjePolja();
void ispisivanje_tablice();
void unos_u_tablicu(int koordX, int koordY, int igrac);
void brisanjeSvihPolja();

void prvi_igra_krizic();
void prvi_igra_kruzic();

bool provjeraLinearno(int provjeraX, int provjeraY, int smjerX, int smjerY);
bool pocetakLinearneProvjere(int x, int y);
bool pobjednikRunde();

extern char tablica[20][13];
extern char likKrizic[5][3];
extern char likKruzic[5][3];
//extern char brisanjePolja[5][3];

#endif // TABLICA_H_INCLUDED
