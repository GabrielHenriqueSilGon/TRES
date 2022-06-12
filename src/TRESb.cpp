#include <ctime>
#include "Fila.hpp"
#include "TRESb.hpp"
#include <iostream>
#include <utility>
#include <cstdlib>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

void
TRESb::makeb ()
{
  int l;
  srand (time (NULL));

  FFVazia (&f1);

  for (l = 0; l < 10; l++)
    {
      Item aux;
      aux.val = rand () % 10;
      Enfileira (&f1, aux);
    }
  cout << "A fila formada e:\n\nF: ";
  FImprime (&f1);
}

void
TRESb::Fazindex ()
{
  int soma = 0;

  for (int i = 0; i < 10; i++)
    {
      soma = soma + f1.vet[i].val;
    }
    
    f1.index = soma;
    
    cout << "seu index e: " << f1.index << "\n";
}
