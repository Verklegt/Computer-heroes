#ifndef HEROES_H
#define HEROES_H
#include <fstream>
#include <iostream>
#include <istream>
#include <string>
#include <vector>
using namespace std;


class Heroes
{
public:
    Heroes();
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
