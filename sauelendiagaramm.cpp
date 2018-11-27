#include <iostream>
using namespace std;

int main()
{
	int za[5] = { 0 };

	for (int z = 0; z <= 4; z++)
	{
		do
		{
			cout << "Bitte geben Sie die " << z + 1 << ". Zahl ein : ? ";
			cin >> za[z];
		} while ((za[z] < 1) || (za[z] > 9));
	}

	for (int i = 9; i >= 1; i--) // Schleife um 9-1 auszugeben
	{
		cout << i;

		for (int k = 0; k <= 4; k++)
		{
			if (i < za[k]) // array  za[0]....[1]....[4] �ber k
				cout << "+";

			if (i > za[k])
				cout << ".";

			if (i == za[k])
				cout << "*";

		}
		cout << endl;

		if (i == 1) // fuer untere Ausgabe
		{
			cout << " 12345" << endl;
		}
	}
	system("pause");
	return 0;
}
