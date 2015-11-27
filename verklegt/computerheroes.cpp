#include "computerheroes.h"
#include <fstream>
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
void computerheroes::addvector(const char name[])
{
    ifstream document;
    string temp;

    document.open(name);

    if(!document.fail())
    {
        while(document >> temp)
        {
                if(true) //Þessi setning til að tékka hvort strengurinn er nú þegar kominn í vektorinn
                {
                    computer.push_back(temp);
                }
        }
        document.close();
    }
}
ostream& operator << (ostream& out, const computerheroes& scientists)
{
    for(unsigned int i = 0; i < scientists.computer.size(); i++)
    {
        out << scientists.computer[i] << ' ';
    }
    return out;
}
