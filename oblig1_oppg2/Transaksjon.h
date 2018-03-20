//
// Created by Sondre on 21.02.2018.
//

#ifndef OBLIG1_OPPG2_TRANSAKSJON_H
#define OBLIG1_OPPG2_TRANSAKSJON_H
#include <iostream>

using namespace std;

class Transaksjon {
public:
    /**
     * Konstruktør
     * @param fraId - spiller som transaksjoen skal trekke fra
     * @param tilId - spiller som stransaksjonene skal gi penger til
     * @param belop - sum som skal overføres
     * @param fil - filen som transaksjonen skal lagres til
     */
    Transaksjon(int fraId, int tilId, double belop, string fil);

    /**
     * Destruktør
     */
    ~Transaksjon();

    /**
     * get metoder
     */
    int getFraId();
    int getTilId();
    double getBelop();
    string getFil();

    /**
     * set metoder
     */
    void setFraId (int fraId);
    void setTilId (int tilId);
    void setbelop (double belop);

    /**
     * skriver til fil
     * @return - true dersom operasjonen er vellykket
     */
    bool skrivTilFil();
private:
    int fraId;
    int tilId;
    double belop;
    string fil;
};


#endif //OBLIG1_OPPG2_TRANSAKSJON_H
