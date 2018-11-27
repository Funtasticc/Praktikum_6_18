#include "wortspiegel.h"
#include <iostream>
#include <string>
using namespace std;

void wortspiegel(string &text, int pos) // Was ist "&" bzw. wofür? FRAGEN
{
	int posLinks = 0, posRechts = 0, counter = 0;
	string tmp = text;
	if (text[pos] != ' ' && text[pos] != '.') // Funktion NUR wenn KEIN Leerzeichen oder Punkt bei Position ist
	{
		for (int i = 0; i <= text.length(); i++) 
		{
			posRechts = i - 1;
			if (text[i] == ' ' && i < pos)
			{
				counter = -1;
				posLinks = i + 1;
			}
			// if (i < pos) counter++;
			/*if ((text[i] == ' ' || i == text.length() || text[i] == '.') && i > pos)
			{
				posRechts = i - 1;
				break;
			}*/
		}
		counter = 0;
		for (int i = posLinks; i <= posRechts; i++)
		{
			text[i] = tmp[posRechts - counter]; // invertierung des Wortes
			counter++;
		}
	}
}
