//
// Created by Sondre on 20.02.2018.
//

#ifndef OBLIG1_OPPG2_KONTO_H
#define OBLIG1_OPPG2_KONTO_H

#include <iostream>

using namespace std;

enum TYPE {bitcoin=1,hackos, gullmynter};

class Konto {
public:

    /**
     * Tom kontruktør
     */
    Konto ();

    /**
     * Knstruktør
     * @param id - konto id
     * @param type - valuta
     */
    Konto (int id, int type);

    /**
     * Destruktør
     */
    ~Konto();

    /**
     * innskudd og uttak fra konto
     */
    bool innskudd (double a);
    bool uttak (double a);

    /**
     * get metoder
     * @return
     */
    TYPE getType();
    int getId();
    double getBeholdning();

private:
    int id;
    TYPE type;

    /**
     * saldo på konto
     */
    double beholdning;
};


#endif //OBLIG1_OPPG2_KONTO_H
