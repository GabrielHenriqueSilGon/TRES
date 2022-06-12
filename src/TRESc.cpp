#include <ctime>
#include "Fila.hpp"
#include "TRESc.hpp"
#include <iostream>
#include <utility>
#include <cstdlib>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

void
TRESc::makec ()
{
  int l;
  srand (time (NULL));

  FFVazia (&f1);
  FFVazia (&f2);
  FFVazia (&f3);

  for (l = 0; l < 10; l++)
    {
      Item aux;
      aux.val = rand () % 10;
      Enfileira (&f1, aux);

      aux.val = rand () % 10;
      Enfileira (&f2, aux);

      aux.val = rand () % 10;
      Enfileira (&f3, aux);
    }

  cout << "As filas formadas sao:\nF1: ";
  FImprime (&f1);

  cout << "\nF2: ";
  FImprime (&f2);

  cout << "\nF3: ";
  FImprime (&f3);

  cout << "\n";

}

void
TRESc::FazindexBubble ()
{
  int soma = 0;
  int soma2 = 0;
  int soma3 = 0;

  for (int i = 0; i < 10; i++)
    {
      soma = soma + this->f1.vet[i].val;
      soma2 = soma2 + f2.vet[i].val;
      soma3 = soma3 + f3.vet[i].val;
    }

  f1.index = soma;
  f2.index = soma2;
  f3.index = soma3;

  cout << "Index 1: " << f1.index << "\n";
  cout << "Index 2: " << f2.index << "\n";
  cout << "Index 3: " << f3.index << "\n";

  int vet[3];

  vet[0] = f1.index;
  vet[1] = f2.index;
  vet[2] = f3.index;

  int i;
  int x;
  int n = 3;
  int Min = 0;


  while (n > 0)
    {
      for (i = 1; i < n; i++)
	{
	  if (vet[i] < vet[Min])
	    {
	      x = vet[Min];
	      vet[Min] = vet[i];
	      vet[i] = x;
	      Min = i;
	    }
	}
      n = n - 1;
    }

  cout << "\nOrdenados por idex, ficam: \n";

  for (int i = 0; i < 3; i++)
    {
      if (vet[i] == f1.index)
	cout << "F1: " << f1.index << "\n";
      else if (vet[i] == f2.index)
	cout << "F2: " << f2.index << "\n";
      else if (vet[i] == f3.index)
	cout << "F3: " << f3.index << "\n";
    }
}
