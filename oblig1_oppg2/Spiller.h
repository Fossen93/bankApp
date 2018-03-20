//
// Created by Sondre on 20.02.2018.
//

#ifndef OBLIG1_OPPG2_SPILLER_H
#define OBLIG1_OPPG2_SPILLER_H

#include <iostream>
#include <vector>
#include "Konto.h"
#include "Transaksjon.h"

using namespace std;

class Spiller {
public:
    /**
     * Konstruktør
     * @param id - spiller sin egen id
     * @param navn - navn på spiller
     * @param konto - kontoen til spilleren
     * @param transaksjoner - hvilke transjaksjoner som er blitt gjennomført
     */
    Spiller (int id, string navn, Konto* konto, vector<Transaksjon> &transaksjoner);

    /**
     * Destruktør
     */
    ~Spiller();

    /**
     * div. get- og set-metoder
     */
    void setNavn(string navn);
    string getNavn();
    int getId();
    int getType();
    double getBeholdning();

    /**
     * Gennomfører innskudd og uttak fra konto
     * @param a - penger som blir satt inn eller tatt ut
     * @return boolsk verdi om innskudd eller uttak ble gjennomført
     */
    bool innskudd(double a);
    bool uttak(double a);

    /**
     * Ovrfører penger fra en spiller til en annen
     * @param spiller - spiller som mottar pengene
     * @param tr - Transaksjonen som skal gjennomføres
     * @return
     */
    bool betal (Spiller & spiller, Transaksjon tr);

private:
    int id;
    string navn;
    Konto *konto;
    vector<Transaksjon> transaksjoner;
};


#endif //OBLIG1_OPPG2_SPILLER_H
