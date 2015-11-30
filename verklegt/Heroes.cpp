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
/*vector<Scientist> setVec(int yearOfBirth, int yearOfDeath, string name, string kyn, string facts){

}*/

/*Heroes::Heroes(string n, string k, string f, int yB, int yD){
    name = n;
    kyn = k;
    facts = f;
    yearOfBirth = yB;
    yearOfDeath = yD;
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

/*void Heroes::printHero() {

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

      else cout << "Unable to open file" << endl;

}*/
void Heroes::getHero(string name, char kyn, int yearOfBirth, int yearOfDeath, string facts) {

    Scientist s;
    s.setName(name);
    s.setKyn(kyn);
    s.setYearOfBirth(yearOfBirth);
    s.setYearOfDeath(yearOfDeath);
    s.setFacts(facts);

    v.push_back(s);

    /*cout << "Name: ";
    getline(cin,info.name);
    cout << "Gender: ";
    cin >> info.kyn;
    cout << "Year of birth: ";
    cin >> info.yearOfBirth;
    cout << "Year of death: ";
    cin >> info.yearOfDeath;
    cin.ignore(numeric_limits < streamsize>::max(), '\n');
    cout << "Facts: ";
    getline(cin,info.facts);

    inputdoc.push_back(info);
    vectorToDoc();
    inputdoc.pop_back();*/

}

void Heroes::vectorToDoc() {

    ofstream outputFile;
    outputFile.open("upplysingar.txt", ofstream::app);

    for(unsigned int i = 0; i < v.size(); i++) {
            outputFile << "Name: " << v[i].getName() << endl;
            outputFile << "Gender: " << v[i].getKyn() << endl;
            outputFile << "Year of birth: " << v[i].getYearOfBirth() << endl;
            outputFile << "Year of death: " << v[i].getYearOfDeath() << endl;
            outputFile << "Facts: " << v[i].getFacts() << endl;
            outputFile << endl;
    }

    outputFile.close();
}
