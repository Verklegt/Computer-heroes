#ifndef USER_H
#define USER_H
#include "Service.h"
#include <iostream>
using namespace std;

class User{
public:
    User();
    void chooseNumb();
    void welcomeMessage();
    void inputInfo(int n);
    void addPerson();
    void printHero();
    void chooseSearch();
    void chooseKind();
    void ascOrDesc(int& n);
    void FeelingLucky();
private:
    Service serv;
};

#endif // USER_H
