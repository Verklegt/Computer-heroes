#include "Heroes.h"
#include <fstream>
#include <iostream>
#include <istream>
#include <string>
#include <vector>
using namespace std;

Heroes::Heroes()
{

}

void Heroes::inputInfo(int n){


    switch (n){
        case 1:
            inputFile();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            break;
       }

}
void Heroes::inputFile(){

    ofstream outputFile;
    outputFile.open("upplysingar.txt");

    cout << "Name: ";
    getline(cin, name);
    cout << "Gender:  ";
    getline(cin, kyn);
    cout << endl;
    cout << "Year of birth: ";
    cin >> yearOfBirth;
    cout << endl;
    cout << "Year of death: ";
    cin >> yearOfdeath;
    cout << endl;
    cout << "Facts: ";
    getline(cin, facts);
    cout << endl;

    //computer.push_back(info);

    outputFile.close();
}

