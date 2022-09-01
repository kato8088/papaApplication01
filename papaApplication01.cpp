#include <iostream>
//#include <cctype>

using namespace std;

int main()
{
	int timesRepeating01 = 0;
	char repeatingString[512];

	cout << "coloque o numero de vezes que queira repetir o exemplo." << endl;
	cin >> timesRepeating01;
	cout << "coloque a string que queres repetir " << timesRepeating01 << " vezes:" << endl;
	std::cin.getline(repeatingString, 512, '=');
	system("cls");
	//cin >> line2repeat;

	for (int i = 0; i < timesRepeating01; i++)
	{
		cout << repeatingString << endl;
	}

	cout << "pronto! a string " << repeatingString << " foi repetida " << timesRepeating01 << " vezes.";
	// cout << "fora do loop!" << endl;

	return 777;
}