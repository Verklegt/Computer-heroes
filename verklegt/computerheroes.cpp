#include "computerheroes.h"
#include <fstream>
#include <iostream>
#include <istream>
using namespace std;

computerheroes::computerheroes()
{
    name = "";
    yearOfBirth = 0;
    yearOfdeath = 0;
    kyn = "";
    facts = "";
}

void computerheroes::addvector(const char name[])
{
    ifstream document;
    string temp;

    document.open(name);

    if(!document.fail())
    {
        while(document >> temp)
        {
           computer.push_back(temp);
        }
        document.close();
    }
}

ostream& operator << (ostream& out, const computerheroes& scientists)
{
    for(unsigned int i = 0; i < scientists.computer.size(); i++)
    {
        out << scientists.computer[i] << ' ';
    }
    return out;
}

void computerheroes::inputInfo(vector<string> computer, int n){


    switch (n)
        {
        case 1:
            inputFile(computer);
            break;
        case 2:
            cout << "upplysingar.txt" << endl;
            break;
        case 3:
            break;
        case 4:
            break;
        default:
        break;
       }while (n!=5);

}
void computerheroes::inputFile(vector<string> computer){

    ofstream outputFile;
    outputFile.open("upplysingar.txt");

    cout << "Name: ";
    cin >> name;
    cout << endl;
    cout << "Gender:  ";
    cin >> kyn;
    cout << endl;
    cout << "Year of birth: ";
    cin >> yearOfBirth;
    cout << endl;
    cout << "Year of death: ";
    cin >> yearOfdeath;
    cout << endl;
    cout << "Facts: ";
    cin >> facts;
    cout << endl;




}

