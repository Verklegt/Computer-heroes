#ifndef HEROES_H
#define HEROES_H
#include <QCoreApplication>
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
    Heroes(string n, string k, string f, int yB, int yD);
    void getHero();
    void inputInfo(int n);
    void inputFile();
    void vectorToDoc();
    void printHero();

private:
    int yearOfBirth;
    int yearOfDeath;
    string name;
    string kyn;
    string facts;
    vector<Heroes> computer;
    vector<Heroes> inputdoc;
};
#endif // COMPUTERHEROS_H
