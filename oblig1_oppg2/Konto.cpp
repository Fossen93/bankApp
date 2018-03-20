//
// Created by Sondre on 20.02.2018.
//

#include "Konto.h"
#include <cmath>

Konto::Konto(int id, int type) {
    Konto::id = id;
    Konto::beholdning = 0;

    switch (type){
        case 1: Konto::type = TYPE::bitcoin;
            break;
        case 2: Konto::type = TYPE::hackos;
            break;
        case 3: Konto::type = TYPE::gullmynter;
            break;
        default: cout<<"Ugyldig type-verdi"<<endl;
    }

}

Konto::~Konto() {}

bool Konto::innskudd(double a) {
    bool done = false;
    double b = (a*(10^8));
    double c = fmod(b,1.0);
    if(a > 0 && c == 0){
        if(type == 1 && c != 0){

        }else {
            Konto::beholdning += a;
            done = true;
        }
    }
    return done;

}

bool Konto::uttak (double a){
    bool done = false;
    double b = (a*(10^8));
    double c = fmod(b,1.0);
    if (beholdning >= a){
        if(type == 1 && c != 0){

        }else {
            beholdning -= a;
            done = true;
        }
    }
    return done;
}

TYPE Konto::getType(){
    return type;
}

int Konto::getId() {
    return id;
}

double Konto::getBeholdning(){
    return beholdning;
}
