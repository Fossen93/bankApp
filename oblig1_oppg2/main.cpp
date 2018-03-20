#include <iostream>
#include <vector>

#include "Konto.h"
#include "Spiller.h"
#include "Transaksjon.h"

using namespace std;
int main() {
    Konto *konto1 = new Konto(1, 1);

    vector<Transaksjon> tom;
    Spiller spiller1(11,"Sondre", konto1, tom);


    Konto *konto2 = new Konto(2, 1);
    Spiller spiller2(22, "Petter", konto2, tom);

    spiller1.innskudd(1000.00);
    spiller1.uttak(300.00);

    std::cout <<spiller1.getNavn() <<": "<< spiller1.getBeholdning() << endl;
    std::cout <<spiller2.getNavn() <<": "<< spiller2.getBeholdning() << endl;

    Transaksjon tr(spiller1.getId(), spiller2.getId(), 200.00, "test.txt");
    spiller1.betal(spiller2, tr);

    std::cout <<spiller1.getNavn() <<": "<< spiller1.getBeholdning() << endl;
    std::cout <<spiller2.getNavn() <<": "<< spiller2.getBeholdning() << endl;



    return 0;
}