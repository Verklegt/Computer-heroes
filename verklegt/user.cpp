#include "User.h"
#include "Service.h"
#include <iostream>
#include <limits>
using namespace std;

User::User(){

}

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
    cout << "            |  2. Get info on computer scientist's |" << endl;
    cout << "            |  3. Search for computer scientist    |" << endl;
    cout << "            |  4. Sort list of computer scientists |" << endl;
    cout << "            |  Push any other button to quit!      |" << endl;
    cout << "            '--------------------------------------'" << endl;
}

void User::inputInfo(int n){
    switch (n){
        case 1:
            addPerson();
            serv.addToDoc();
            break;
        case 2:
            printHero();
            break;
        case 3:
            serv.SearchKeyword();
            break;
        case 4:
            chooseSearch();
            ascOrDesc(n);
            break;
        default:
            break;
       }
}

void User::addPerson(){

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
        cin.ignore(numeric_limits < streamsize>::max(), '\n'); //so getline works correctly after cin command
        cout << "Facts: ";
        getline(cin,fact);
        cout << endl;

        serv.getHero(name, kyn, yearOfBirth, yearOfDeath, fact);
}

void User::printHero() {

    cout << "Name: " << "\t" << "\t" << "Gender: " << "Birth: " << "\t" << "Death: " << "\t" << "Facts: " << endl;
    string line;
      ifstream myfile ("upplysingar.txt");
      if (myfile.is_open())
      {

        while (getline(myfile,line,':'))
        {
            cout << line << "\t";
        }
        cout << endl;
        myfile.close();
      }

      else cout << "Unable to open file" << endl;

}

void User::chooseSearch() {
    cout << "            ,--------------------------------------," << endl;
    cout << "            |  1. Ascending                        |" << endl;
    cout << "            |  2. Descending                       |" << endl;
    cout << "            |  Push any other button to quit!      |" << endl;
    cout << "            '--------------------------------------'" << endl;
    int n = 0;
    cin >> n;

    if(n == 1)
    {
        serv.ascending();
        chooseKind();
    }
    else
    {
       cout << "Wrong input. Try again. " << endl;
       chooseSearch();
    }
}
void User::chooseKind() {
    cout << "            ,--------------------------------------," << endl;
    cout << "            |  1. Name                             |" << endl;
    cout << "            |  2. Gender                           |" << endl;
    cout << "            |  3. Year of birth                    |" << endl;
    cout << "            |  4. Year of death                    |" << endl;
    cout << "            |  Push any other button to quit!      |" << endl;
    cout << "            '--------------------------------------'" << endl;
    int number = 0;
    cin >> number;

    if(number == 1) {
        serv.ascending();
    }

}

void User::ascOrDesc(int& n){
/*
    if(n == 1)
    {
        serv.ascending();
        chooseKind();
    }
    else if(input == 2)
    {
        serv.descending();
        chooseKind();
    }
    else
    {
       cout << "Wrong input. Try again. " << endl;
       chooseSearch();
    }
    */
}
