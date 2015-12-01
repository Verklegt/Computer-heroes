#include "Heroes.h"
#include <fstream>
#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

Heroes::Heroes() {
    v = vector<Scientist>();

}
vector<Scientist> Heroes::getVec(){
    return v;
}

void Heroes::getHero(string name, char kyn, int yearOfBirth, int yearOfDeath, string facts) {

    Scientist s;
    s.setName(name);
    s.setKyn(kyn);
    s.setYearOfBirth(yearOfBirth);
    s.setYearOfDeath(yearOfDeath);
    s.setFacts(facts);

    v.push_back(s);
}

void Heroes::vectorToDoc() {

    ofstream outputFile;
    outputFile.open("upplysingar.txt", ofstream::app);

    for(unsigned int i = 0; i < v.size(); i++) {
            outputFile << v[i].getName() << ":";
            outputFile << v[i].getKyn() << ":";
            outputFile << v[i].getYearOfBirth() << ":";
            outputFile << v[i].getYearOfDeath() << ":";
            outputFile << v[i].getFacts() << endl;
    }

    outputFile.close();
    v.pop_back();
}

void Heroes::KeyWord()
{
   ifstream FileSearch;
   string letters;
   unsigned int position = 0;
   string line;

    ifstream readSearch;
    cout << "Enter a search word: ";
     cin >> letters;
     cout << endl;
     FileSearch.open("upplysingar.txt");
    if(FileSearch.is_open())
    {
        while(getline(FileSearch, line)){
            FileSearch >> line;
            cout << line << endl;
            position = line.find(letters, position++);

            if(position == string::npos){
            }
            if(FileSearch.eof()){
                break;
            }
        cout <<line <<endl;
        }
     }
     cout << "Cant find " << letters << endl;
}
