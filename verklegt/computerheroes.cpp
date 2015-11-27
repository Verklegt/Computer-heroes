#include "computerheroes.h"

computerheroes::computerheroes()
{
    name = "";
    yearOfBirth = 0;
    yearOfdeath = 0;
    kyn = "";
    facts = "";
}
computerheroes::computerheroes(int birth, int death, string nafn, string k, string fact){

    nafn = name;
    birth = yearOfBirth;
    death = yearOfdeath;
    k = kyn;
    fact = facts;
}



