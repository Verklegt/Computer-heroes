#include "Scientist.h"
#include <string>

Scientist::Scientist(){
    name = "";
    kyn = ' ';
    facts = "";
    yearOfBirth = 0;
    yearOfDeath = 0;
}

Scientist::Scientist(string n, char k, string f, int yB, int yD)
{
    name = n;
    kyn = k;
    facts = f;
    yearOfBirth = yB;
    yearOfDeath = yD;
}
string Scientist::getName(){
    return name;
}
void Scientist::setName(string n){
    name = n;
}
char Scientist::getKyn(){
    return kyn;
}
void Scientist::setKyn(char k){
    kyn = k;
}
int Scientist::getYearOfBirth(){
    return yearOfBirth;
}
void Scientist::setYearOfBirth(int n){
    yearOfBirth = n;
}
int Scientist::getYearOfDeath(){
    return yearOfDeath;
}
void Scientist::setYearOfDeath(int n){
    yearOfDeath = n;
}
string Scientist::getFacts(){
    return facts;
}
void Scientist::setFacts(string n){
    facts = n;
}
ostream& operator << (ostream& out, const Scientist& s){

   out << s.name << "; " << s.kyn << "; " << s.yearOfBirth << "; " << s.yearOfDeath << "; " << s.facts << endl;

   return out;
}
