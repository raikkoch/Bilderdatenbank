// Test.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


int main()
{	
	string name;
	string vorname;
	int alter;

	Person pers1;
	cout << "Hallo, bitte gib deinen Vornamen ein:" << endl;
	getline(cin, vorname);
	pers1.setName(vorname);
	cout << "Hallo, bitte gib deinen Namen ein:" << endl;
	getline(cin, name);
	pers1.setName(name);
	cout << "Hallo, wie Alt bist du:" << endl;
	cin >> alter;
	pers1.setAlter(alter);
	cout << "Hallo " << pers1.getVorname() << " " << pers1.getName() << endl;
	cout << "Du bist also " << pers1.getAlter() << " Jahre alt." << endl;
    return 0;
}

