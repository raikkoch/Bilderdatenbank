// Test.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{	
	string Vorname;
	cout << "Bitte deinen Namen eingeben:" << endl;
	getline(cin, Vorname);
	cout << "Hallo " << Vorname << endl;
    return 0;
}

