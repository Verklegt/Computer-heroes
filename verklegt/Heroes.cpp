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
    yearOfDeath = yD;
}

void Heroes::inputInfo(int n){
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
}

void Heroes::printHero() {

    string line;
      ifstream myfile ("upplysingar.txt");
      if (myfile.is_open())
      {
        while ( getline (myfile,line) )
        {
          cout << line << '\n';
        }
        myfile.close();
      }

      else cout << "Unable to open file";



}


void Heroes::getHero() {
    Heroes info;
    cout << "Name: ";
    cin >> info.name;
    cout << "Gender: ";
    cin >> info.kyn;
    cout << "Year of birth: ";
    cin >> info.yearOfBirth;
    cout << "Year of death: ";
    cin >> info.yearOfDeath;
    cout << "Facts: ";
    cin >> info.facts;

    computer.push_back(info);
    inputdoc.push_back(info);
    printtest();
    inputdoc.pop_back();

}

void Heroes::printtest() {
    ofstream outputFile;
    outputFile.open("upplysingar.txt", ofstream::app);

    for(unsigned int i = 0; i < inputdoc.size(); i++) {
            outputFile << "Name: " << inputdoc[i].name << endl;
            outputFile << "Gender: " << inputdoc[i].kyn << endl;
            outputFile << "Year of birth: " << inputdoc[i].yearOfBirth << endl;
            outputFile << "Year of death: " << inputdoc[i].yearOfDeath << endl;
            outputFile << "Facts: " << inputdoc[i].facts << endl;
            outputFile << endl;
    }

    outputFile.close();
}

/*void Heroes::inputFile(){
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
    cout << endl;

    //computer.push_back(info);

    outputFile.close();
}*/

