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
    Heroes(string n, char k, string f, int yB, int yD);
    vector<Scientist> getVec();
    //vector<Scientist> setVec(int yearOfBirth, int yearOfDeath, string name, string kyn, string facts);
    void getHero(string name, char kyn, int yearOfBirth, int yearOfDeath, string facts);
    void inputInfo(int n);
    void inputFile();
    void vectorToDoc();
    void printHero();

private:
    vector<Scientist> v;
    vector<Heroes> computer;
    //vector<Heroes> inputdoc;
};
#endif // COMPUTERHEROS_H
