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
    outputFile.open("upplysingar.txt", ofstream::app);

    cout << "Name: ";
    getline(cin, name);
    //cin >> name;
    cout << "Gender: ";
    //cin >> kyn;
    getline(cin, kyn);
    cout << "Year of birth: ";
    cin >> yearOfBirth;
    cout << "Year of death: ";
    cin >> yearOfdeath;
    cout << "Facts: ";
    //cin >> facts;
    cout << endl;
    getline(cin, facts);


    //computer.push_back();

    outputFile.close();
}


