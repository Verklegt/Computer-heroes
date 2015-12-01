#ifndef SERVICE_H
#define SERVICE_H
#include <iostream>
#include "Heroes.h"
#include <vector>
using namespace std;

class Service
{
public:
    Service();
    vector<Scientist> getV();
    void getHero(string name, char kyn, int yearOfBirth, int yearOfDeath, string facts);
    void addToDoc();
    void SearchKeyword();
private:
    Heroes hero;

};

#endif // SERVICE_H
