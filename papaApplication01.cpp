#include <iostream>
//#include <cctype>

// using namespace std;

int main()
{
	using namespace std;

	int timesRepeating01 = 0;
	char string2repeat[512];

	while(true)
	{
		try
		{
			//restart:
			cout << "coloque o numero de vezes que queira repetir o exemplo." << endl;
			cin >> timesRepeating01;
			if (cin.fail())
			{
				throw 404;
			}
			cout << "coloque a string que queres repetir " << timesRepeating01 << " vezes:" << endl;
			cin.ignore();
			cin.getline(string2repeat, 512);
			system("cls");
			//cin >> string2repeat;

			for (int forInt01 = 0; forInt01 < timesRepeating01; forInt01++)
			{
				cout << string2repeat << endl;
			}

			cout << "" << endl;
			cout << "pronto! a string " << string2repeat << " foi repetida " << timesRepeating01 << " vezes." << endl;
			cout << "quer repetir o processo com outra string e numero de repeticoes?" << endl;
			system("pause");
			system("cls");
			// adicionar dps uma opcao de escolha s/n - caso s, retornar ao comeco da aplicacao / caso n, haltar o programa (return)
			// pause temporario at the moment redireciona o console para o while loop
		}
		catch (...)
		{
			cin.clear();
			cin.ignore();
			system("cls");
			cout << "tente novamente! insira um numero valido, de 1 - 512 caracteres!" << endl << endl;
			continue;
		}
	}

	return 777;
}