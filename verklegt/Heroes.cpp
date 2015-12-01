#include "Heroes.h"
#include "scientist.h"
#include <fstream>
#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>
#include <iterator>
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
void Heroes::fileToVector(){

    ifstream file("upplysingar.txt");
    string line;
    while (getline(file, line) ) {
        if ( !line.empty() ){
           Scientist jon;

           jon.setName(line.substr(0, line.find(':')));
           line = line.substr(line.find(':')+1);


           jon.setKyn(line.substr(0, line.find(':'))[0]);
           line = line.substr(line.find(':')+1);

           jon.setYearOfBirth(atoi(line.substr(0, line.find(':')).c_str()));
           line = line.substr(line.find(':')+1);

           jon.setYearOfDeath(atoi((line.substr(0, line.find(':')).c_str())));
           line = line.substr(line.find(':')+1);

           jon.setFacts(line.substr(0, line.find('\n')));
           line = "";
           cout << jon.getName();
           v.push_back(jon);
        }


}
}

