#include "User.h"
#include "Service.h"
#include <iostream>
using namespace std;

User::User()
{

}

void welcomeMessage() {
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
void chooseNumb() {
    cout << "            ,--------------------------------------," << endl;
    cout << "            |  1. Input a computer scientist       |" << endl;
    cout << "            |  2. Get info on computer scientist   |" << endl;
    cout << "            |  3. sort computer scientist's        |" << endl;
    cout << "            |  4. This is awsome                   |" << endl;
    cout << "            |  Push any other button to quit!      |" << endl;
    cout << "            '--------------------------------------'" << endl;
}
/*void User::getHero() {

    cout << "Name: ";
    cout << "Gender: ";
    cout << "Year of birth: ";
    cout << "Year of death: ";
    cout << "Facts: ";


}*/
/*void Heroes::inputInfo(int n){
    switch (n){
        case 1:
            getHero();
            break;
        case 2:
            printHero();
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            break;
       }
}*/
void addPerson(){

        string name;
        char kyn;
        int yearOfBirth;
        int yearOfDeath;
        string fact;

        cout << "Name: ";
        getline(cin,name);
        cout << "Gender: ";
        cin >> kyn;
        cout << "Year of birth: ";
        cin >> yearOfBirth;
        cout << "Year of death: ";
        cin >> yearOfDeath;
        cout << "Facts: ";
        getline(cin,fact);

        //serv.getHero(name, kyn, yearOfBirth, yearOfDeath, fact);
}
