//
// Created by Sondre on 20.02.2018.
//

#include "Spiller.h"
#include "Konto.h"
#include <fstream>


using namespace std;

Spiller::Spiller (int id, string navn, Konto* konto, vector<Transaksjon> &transaksjon){
    Spiller::id = id;
    Spiller::navn = navn;
    Spiller::konto = new Konto (konto->getId(), konto->getType());
    Spiller::transaksjoner = transaksjon;
};

Spiller::~Spiller() {}

void Spiller::setNavn(string navn){
    navn = navn;
}

string Spiller::getNavn() {
    return navn;
}

int Spiller::getId() {
    return id;
}

int Spiller::getType() {
    return konto->getType();
}

double Spiller::getBeholdning() {
    return konto->getBeholdning();
}

bool Spiller::innskudd(double a) {
    return konto->innskudd(a);
}

bool Spiller::uttak(double a) {
    return konto->uttak(a);
}

bool Spiller::betal (Spiller & spiller, Transaksjon tr){
    bool kjor = false;
    if(Spiller::getType() == spiller.getType()){
        bool uttak = Spiller::uttak(tr.getBelop());
        bool innskudd = spiller.innskudd(tr.getBelop());
        if(uttak && innskudd){
            kjor = true;
        }
    }
    if (kjor){

        tr.skrivTilFil();
        transaksjoner.push_back(tr);
        cout<<"Skrevet til fil"<<endl;

    }

    return kjor;
}