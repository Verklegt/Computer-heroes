#ifndef HEROES_H
#define HEROES_H
#include <fstream>
#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <limits>
using namespace std;


class Heroes
{
public:
    Heroes();
    Heroes(string n, string k, string f, int yB, int yD);
    void inputInfo(int n);
    void inputFile();
private:
    int yearOfBirth;
    int yearOfdeath;
    string name;
    string kyn;
    string facts;
};
#endif // COMPUTERHEROS_H
