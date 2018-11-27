#include "wortspiegel.h"
#include <iostream>
#include <string>
using namespace std;

void wortspiegel(string &text, int pos) // Was ist "&" bzw. wofür? FRAGEN
{
	int posLinks = 0, posRechts = 0, counter = 0;
	string tmp = text; // "richtiges Wort" wird in tmp gespeichert
	if (text[pos] != ' ' && text[pos] != '.') // Funktion NUR wenn KEIN Leerzeichen oder Punkt bei Position ist
	{
		for (int i = 0; i <= text.length(); i++) 
		{
			posRechts = i - 1;
			if (text[i] == ' ' && i < pos) // posLinks festlegung
			{
				counter = -1;
				posLinks = i + 1;
			}
			// if (i < pos) counter++;
			if ((text[i] == ' ' || i == text.length() || text[i] == '.') && i > pos) // posRechts bei leerzeichen, punkt, stringlaenge ende
			{
				posRechts = i - 1;
				break;
			}
		}
		counter = 0;
		for (int i = posLinks; i <= posRechts; i++)
		{
			text[i] = tmp[posRechts - counter]; // invertierung des Wortes - Die einzelnen char arrays werden mit posRechts - counter ersetzt
			counter++; // damit 3...2...1... Buchstabe genutzt wird
		}
	}
}
