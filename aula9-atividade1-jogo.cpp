#include<iostream>
#include <locale>
using namespace std;

int
main ()
{
  setlocale (LC_ALL, "ptb");
  int num, ind, tentativas = 0, numeros[10];
  bool achou = false;

  cout << "### PLAYER 1 ###" << endl;
  for (ind = 0; ind <= 9; ind++)
    {
      cout << "Digite o " << ind + 1 << "º número: ";
      cin >> numeros[ind];
    }

  cout << "### PLAYER 2 ###" << endl;
  cout << "Digite um número :";
  cin >> num;
  tentativas = 1;
  ind = 0;

  while (!achou && tentativas < 3)
    {
      while (!achou && ind <= 9)
	{
	  if (numeros[ind] == num)
	    {
	      achou = true;
	    }
	  ind++;
	}
      if (!achou)
      {
	tentativas
	  ++;
	cout << "Número não encontrado" << endl;
	cout << "Tentativa nº: " << tentativas << ": ";
	cin >> num;
	ind = 0;
      }
      if (achou == true)
	{
	  cout << "Parabéns, você conseguiu depois de " << tentativas << " tentativas." << endl;
	}
      else
	{
	  cout << "Que pena, você não conseguiu." << endl;
	}
    }

	system("pause");
	return 0;
}
