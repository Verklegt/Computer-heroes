#include "Service.h"
#include "Heroes.h"
#include <iostream>
#include <vector>

using namespace std;

Service::Service()
{
    hero = Heroes();
}
vector<Scientist> Service::getV(){
    return hero.getVec();
}
void Service::getHero(string name, char kyn, int yearOfBirth, int yearOfDeath, string facts){
    hero.getHero(name, kyn, yearOfBirth, yearOfDeath, facts);
}

void Service::addToDoc(){
    hero.vectorToDoc();
}

void Service::SearchKeyword() {
    hero.KeyWord();
}
