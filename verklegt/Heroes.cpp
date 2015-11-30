#include "Heroes.h"
#include <fstream>
#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <limits>
using namespace std;
Heroes::Heroes() {}

Heroes::Heroes(string n, string k, string f, int yB, int yD){
    name = n;
    kyn = k;
    facts = f;
    yearOfBirth = yB;
    yearOfdeath = yD;
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
    outputFile.open("upplysingar.txt", ofstream::app);

    cout << "Name: ";
    getline(cin, name);
    outputFile << "Name: " << name << endl;
    cout << "Gender: ";
    getline(cin, kyn);
    outputFile << "Gender: " << kyn << endl;
    cout << "Year of birth: ";
    cin >> yearOfBirth;
    outputFile << "Gender: " << yearOfBirth << endl;
    cout << "Year of Death: ";
    cin >> yearOfdeath;
    outputFile << "Gender: " << yearOfdeath << endl;
    cin.ignore(numeric_limits < streamsize>::max(), '\n');
    cout << "Facts: ";
    getline(cin, facts);
    outputFile << "Facts: " << facts << endl;

    //computer.push_back(info);

    outputFile.close();
}

