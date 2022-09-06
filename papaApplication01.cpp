#include <iostream>
//#include <cctype>

// using namespace std;

int main()
{
	using namespace std;

	int timesRepeating01 = 0;
	char string2repeat[512];
	string restartApplication = "";

	// issue #02: mais de um argumento no primeiro cin faz o programa skippar o segundo cin e automaticamente lancar o resultado
	while(true)
	{
		try
		{
			cout << "coloque o numero de vezes que queira repetir a string." << endl;
			cin >> timesRepeating01;
			if (cin.fail())
			{
				throw 404;
			}
			cout << "coloque a string que queres repetir " << timesRepeating01 << " vezes:" << endl;
			cin.ignore();
			cin.getline(string2repeat, 512);
			cout << endl;
			//	system("cls");
			//cin >> string2repeat;

			for (int forInt01 = 0; forInt01 < timesRepeating01; forInt01++)
			{
				cout << string2repeat << endl;
			}

			cout << "" << endl;
			cout << "pronto! a string " << string2repeat << " foi repetida " << timesRepeating01 << " vezes." << endl;
			cout << "quer repetir o processo com outra string e numero de repeticoes?" << endl;
			cout << "digite 'sim' para reiniciar o programa e 'nao' para sair." << endl;

		}

		catch (...)
		{
			cin.clear();
			cin.ignore();
			system("cls");
			cout << "tente novamente! insira um numero valido, de 1 - 512 caracteres!" << endl << endl;
			continue;
		}

	returnElse1:
		cin >> restartApplication;
		//debug >
		//cout << "debug" << endl;
		//cout << restartApplication << endl;
		//system("pause");

		if (restartApplication == "sim")
			{
				//cout << "input = sim";
				system("cls");
				continue;
			}
			if (restartApplication == "nao")
			{
				cout << "see you next time! :D" << endl;
				return 727;
			}
			else
			{
			//	cout << "tem q codar ainda, mas resumidamente significa q fodeu xd" << endl;
				system("cls");
				cout << "tente novamente! insira 'sim' para reiniciar ou 'nao' para sair do programa." << endl;
				goto returnElse1;
			}


	}


	return 777;
}