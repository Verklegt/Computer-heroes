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

void Heroes::getHero(string name, char kyn, int yearOfBirth, int yearOfDeath, string facts) { //gets info from User and puts it in vector

    Scientist s;
    s.setName(name);
    s.setKyn(kyn);
    s.setYearOfBirth(yearOfBirth);
    s.setYearOfDeath(yearOfDeath);
    s.setFacts(facts);

    v.push_back(s);
}

void Heroes::vectorToDoc() { //gets the vector from Heroes private stash and stores it in a document

    ofstream outputFile;
    outputFile.open("upplysingar.txt", ofstream::app); //we use ofstream::app so we dont overwrite the document

    for(unsigned int i = 0; i < v.size(); i++) {
            outputFile << v[i].getName() << ":";
            outputFile << v[i].getKyn() << ":";
            outputFile << v[i].getYearOfBirth() << ":";
            outputFile << v[i].getYearOfDeath() << ":";
            outputFile << v[i].getFacts() << endl;
    }

    outputFile.close();
    v.clear(); // then we clear out the vector so we dont duplicate the scientist that the user puts in
}

void Heroes::KeyWord(){

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
void Heroes::fileToVector(){ //here we put the info from the txt file to vector so the user can close the program and it will still be functional

    ifstream file("upplysingar.txt");
    string line;
    while (getline(file, line) ) {
        if ( !line.empty() ){
           Scientist user;

           user.setName(line.substr(0, line.find(':')));
           line = line.substr(line.find(':')+1);

           user.setKyn(line.substr(0, line.find(':'))[0]);
           line = line.substr(line.find(':')+1);

           user.setYearOfBirth(atoi(line.substr(0, line.find(':')).c_str()));
           line = line.substr(line.find(':')+1);

           user.setYearOfDeath(atoi((line.substr(0, line.find(':')).c_str())));
           line = line.substr(line.find(':')+1);

           user.setFacts(line.substr(0, line.find('\n')));
           line = "";
           v.push_back(user);
        }
    }
}

bool compareAsc(Scientist x, Scientist y){

    return x.getName() < y.getName();
}

bool compareDesc(Scientist x, Scientist y){

    return x.getName() > y.getName();
}

void Heroes::ascending(){ //Ascending sorting algorithm

    Scientist s;

    sort (v.begin(), v.end(), compareAsc);
}

void Heroes::descending(){ //Descending sorting algorithm

   Scientist s;

    sort (v.begin(), v.end(), compareDesc);
}

void Heroes::ClearingVec() {
    v.clear();
}
