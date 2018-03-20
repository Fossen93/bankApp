//
// Created by Sondre on 21.02.2018.
//
#include <iostream>
#include <fstream>
#include "Transaksjon.h"

Transaksjon::Transaksjon(int fraId, int tilId, double belop, string fil) {
    Transaksjon::fraId = fraId;
    Transaksjon::tilId = tilId;
    Transaksjon::belop = belop;
    Transaksjon::fil = fil;
}

Transaksjon::~Transaksjon() {}

int Transaksjon::getFraId(){
    return fraId;
}
int Transaksjon::getTilId(){
    return tilId;
}
double Transaksjon::getBelop(){
    return belop;
}
string Transaksjon::getFil(){
    return fil;
}

void Transaksjon::setFraId (int fraId){
    Transaksjon::fraId = fraId;
}
void Transaksjon::setTilId (int tilId){
    Transaksjon::tilId = tilId;
}
void Transaksjon::setbelop (double belop){
    Transaksjon::belop = belop;
}

bool Transaksjon::skrivTilFil(){
    ofstream minFil;
    minFil.open (fil);
    minFil << fraId<< " til "<<tilId << " Beløp: "<< belop <<"\n";
    minFil.close();

    return minFil.good();
}