#include "wortspiegel.h"
using namespace std;

void writeOut(string myString, int position) // Funktion um String anzuzeigen // Funtkion um die aktuelle "stringPosition" anzuzeigen mit einem "*"
{
	bool foundPosition = false; // Wahrheit ob Position gefunden, oder nicht
	cout << myString << endl; // eingegebenen String anzeigen "myString"
	for (int i = 0; i < myString.length(); i++) // Schleife läuft solange bis "myString" Länge erreicht
	{
		if (position < 0) {} 
		else if (i == position) // wenn die Schleife (i) mit der Position übereinstimmt, wird ein "*" ausgegeben um die Position anzuzeigen
		{
			cout << "*" << endl;
			foundPosition = true;
		}
		else if (!foundPosition) cout << " ";
	}
}

int getCommand() // Funktion um Befehle anzuzeigen und einzulesen
{
	char myChar;
	cout << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ?- ";
	cin >> myChar;
	cout << endl;
	return myChar; // char wird an myCommand per rückgabewert weitergegeben
}

int main()
{
	string myString;
	int stringPosition = 0;
	char myCommand;

	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, myString);

	do
	{
		writeOut(myString, stringPosition); // Funkt
		myCommand = getCommand(); // Rückgabewert von Funktion für "myCommand" nutzen

		if (myCommand == 'l')
		{
			if (stringPosition > 0) stringPosition -= 1;
		}
		else if (myCommand == 'r')
		{
			if (stringPosition < myString.length())	stringPosition += 1;
		}
		else if (myCommand == 's') wortspiegel(myString, stringPosition);

	} while (myCommand != 'q');

	system("pause");
	return 0;
}