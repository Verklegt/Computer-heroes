#include "User.h"
#include "Service.h"
#include <iostream>
#include <limits>
using namespace std;

User::User(){}

void User::welcomeMessage() {
    cout << "                |   |   '                    ,--.---." << endl;
    cout << "      ------    |---|,---.,---..   .,---.    ,--'   /    ------" << endl;
    cout << "      ------    |   ||   ||   ||   ||        |     |     ------  " << endl;
    cout << "                `   '`---'|---'`---'`        `--'  |           " << endl;
    cout << "                          |                                     " << endl;
    cout << "                                                             " << endl;
    cout << ",---.                    |                  |   |              " << endl;
    cout << "|    ,---.,-.-.,---..   .|--- ,---.,---.    |---|,---.,---.,---.,---.,---." << endl;
    cout << "|    |   || | ||   ||   ||    |---'|        |   ||---'|    |   ||---'`---." << endl;
    cout << "`---'`---'` ' '|---'`---'`---'`---'`        `   '`---'`    `---'`---'`---' " << endl;
    cout << "               | " << endl;
    cout << "\n\n";
}

void User::chooseNumb() {
    cout << "            ,--------------------------------------," << endl;
    cout << "            |  1. Input a computer scientist       |" << endl;
    cout << "            |  2. Get info on computer scientists  |" << endl;
    cout << "            |  3. Search for computer scientist    |" << endl;
    cout << "            |  4. Sort list of computer scientists |" << endl;
    cout << "            |  5. Feeling lucky!                   |" << endl;
    cout << "            |  Push any other button to quit!      |" << endl;
    cout << "            '--------------------------------------'" << endl;
}

void User::inputInfo(int n) {

    switch (n){
        case 1:
            addPerson();
            serv.addToDoc();
            break;
        case 2:
            serv.SetDocToVector();
            printHero();
            serv.ClearVec();
            break;
        case 3:
            serv.SetDocToVector();
            serv.SearchKeyword();
            serv.ClearVec();
            break;
        case 4:
            serv.SetDocToVector();
            chooseSearch();
            serv.ClearVec();
            break;
        case 5:
            FeelingLucky();
            break;
        default:
            break;
       }
}

void User::addPerson() {

        string name;
        char kyn;
        int yearOfBirth;
        int yearOfDeath;
        string fact;

        cout << "Name: ";
        getline(cin,name);
        cout << "Gender(F/M): ";
        cin >> kyn;
        cout << "Year of birth: ";
        cin >> yearOfBirth;
        cout << "Year of death: ";
        cin >> yearOfDeath;
        while(yearOfDeath < yearOfBirth) {
                    if(yearOfDeath < yearOfBirth) {
                        cout << "Persons cannot die before they are born. Input correct year of death!" << endl;
                        cin >> yearOfDeath;
                    }
                }
        cin.ignore(numeric_limits < streamsize>::max(), '\n'); //so getline works correctly after cin command
        cout << "Facts: ";
        getline(cin,fact);
        cout << endl;

        serv.getHero(name, kyn, yearOfBirth, yearOfDeath, fact);
}

void User::printHero() {

    for(unsigned int i = 0; i < serv.getV().size(); i++) {
        cout << "Name: " << serv.getV()[i].getName() << endl;
        cout << "Gender: " << serv.getV()[i].getKyn() << endl;
        cout << "Year of birth: " << serv.getV()[i].getYearOfBirth() << endl;
        cout << "Year of death: " << serv.getV()[i].getYearOfDeath() << endl;
        cout << "Facts: " << serv.getV()[i].getFacts() << endl;
        cout << endl;
    }
}

void User::chooseSearch() {
    cout << "            ,--------------------------------------," << endl;
    cout << "            |  1. Ascending                        |" << endl;
    cout << "            |  2. Descending                       |" << endl;
    cout << "            |  Push any other button to go back    |" << endl;
    cout << "            '--------------------------------------'" << endl;
    int n = 0;
    cin >> n;

    if(n == 1){
        serv.ascending();
        printHero();
    }
    if(n == 2){
        serv.descending();
        printHero();
    }
    else{}
}

void User::FeelingLucky() {
        cout << "   .........             @@@@@    @@@@@  ........... " << endl;
        cout << "   .........            @     @  @     @ ..........." << endl;
        cout << "    ........               @@@   @     @  .........." << endl;
        cout << "     .......             @@      @     @    ........." << endl;
        cout << "      ......            @@@@@@@   @@@@@  th   ......." << endl;
        cout << "        .....         -----------------------  ......" << endl;
        cout << "         ....           C  E  N  T  U  R  Y     ....." << endl;
        cout << "          ...         -----------------------     ...." << endl;
        cout << "            ..        @@@@@ @@@@@ @   @ @@@@@       .." << endl;
        cout << "            ==          @   @      @ @    @          ==" << endl;
        cout << "          __||__        @   @@@@    @     @        __||__" << endl;
        cout << "         |      |       @   @      @ @    @       |      |" << endl;
        cout << "_________|______|_____  @   @@@@@ @   @   @  _____|______|_________" << endl;
        cout << endl;
}
