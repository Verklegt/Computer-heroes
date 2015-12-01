#ifndef HEROES_H
#define HEROES_H
#include <QCoreApplication>
#include "Scientist.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;


class Heroes
{
public:
    Heroes();
    vector<Scientist> getVec();
    void getHero(string name, char kyn, int yearOfBirth, int yearOfDeath, string facts);
    void vectorToDoc();
    void KeyWord();
    void fileToVector();
    void ascending();
    void descending();



private:
    vector<Scientist> v;

};
#endif // COMPUTERHEROS_H
