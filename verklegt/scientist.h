#ifndef SCIENTIST_H
#define SCIENTIST_H
#include <iostream>
#include <string>
using namespace std;



class Scientist
{
public:
    Scientist();
    Scientist(string n, char k, string f, int yB, int yD);
    friend ostream& operator << (ostream& out, const Scientist& s);
    string getName();
    void setName(string n);
    char getKyn();
    void setKyn(char k);
    int getYearOfBirth();
    void setYearOfBirth(int n);
    int getYearOfDeath();
    void setYearOfDeath(int n);
    string getFacts();
    void setFacts(string n);
private:
    int yearOfBirth;
    int yearOfDeath;
    string name;
    char kyn;
    string facts;
};


#endif // SCIENTIST_H
