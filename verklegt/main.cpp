#include "User.h"
#include <iostream>
#include <sstream>
#include <limits>
using namespace std;


int main()
{
    User test;
    int n = 0;

    test.welcomeMessage();

    do{
        test.chooseNumb(); //The list
        cin >> n;

        cin.ignore(numeric_limits < streamsize>::max(), '\n'); //so getline works correctly after cin command

        test.inputInfo(n); //jumps to the switch case

    }while(n == 1 || n == 2 || n == 3 || n == 4 || n == 5);


    return 0;
}
