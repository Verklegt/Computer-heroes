#ifndef USER_H
#define USER_H
#include "Service.h"
#include <iostream>
using namespace std;


class User
{
public:
    User();
    void chooseNumb();
    void welcomeMessage();
    void getHero();
    void inputInfo(int n);
    void addPerson();

private:
    Service serv;
};

#endif // USER_H
