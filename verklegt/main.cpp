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
        test.inputInfo(n); //jumps to the switch case

    }while(n == 1 || n == 2 || n == 3 || n == 4);


    return 0;
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
    cout << ",--------------------------------------," << endl;
    cout << "|  1. Input a computer scientist       |" << endl;
    cout << "|  2. Get info on computer scientist   |" << endl;
    cout << "|  3. sort computer scientist's        |" << endl;
    cout << "|  4. This is awsome                   |" << endl;
    cout << "|  Push any other button to quit!      |" << endl;
    cout << "'--------------------------------------'" << endl;
}
