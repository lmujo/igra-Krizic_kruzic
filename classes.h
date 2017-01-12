#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <string>

using namespace std;

// Odredjuje se class "Igrac"
class Igrac
{
public:
    int jeKruzic;
    unsigned int pobjede;
    string ime;

};

// Postavlja se kao vrijednost koju moze dohvatiti cijeli program
extern Igrac igrac1;
extern Igrac igrac2;

#endif // CLASSES_H_INCLUDED
