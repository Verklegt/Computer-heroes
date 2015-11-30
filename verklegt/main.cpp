#include "Heroes.h"
#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
using namespace std;

void welcomeMessage();
void chooseNumb();

int main()
{
    Heroes test;
    welcomeMessage();
    int n = 0;
    do{
        Heroes info;
        chooseNumb();
        cin >> n;
        cin.ignore(numeric_limits < streamsize>::max(), '\n'); //so getline works correctly after cin command
       // test.inputInfo(n); //jumps to the switch case

    }while(n == 1 || n == 2 || n == 3 || n == 4);


    return 0;
}
