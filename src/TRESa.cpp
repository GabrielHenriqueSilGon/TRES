#include <ctime>
#include "FilaD.hpp"
#include "TRESa.hpp"
#include <iostream>
#include <utility>
#include <cstdlib>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

void
TRESa::makef (int a)
{
  int l;
  srand (time (NULL));

  FFVazia (&f1);
  FFVazia (&f2);

  for (l = 0; l < a; l++)
    {
      ItemD aux;
      aux.val = rand () % 100;
      Enfileira (&f1, aux);
      aux.val = rand () % 100;
      Enfileira (&f2, aux);
    }
  cout << "As listas formadas sao:\n\nF1: ";
  FImprime (&f1);
  cout << "\nF2: ";
  FImprime (&f2);
}

void
TRESa::ParteLiga (int a)
{
  int m = a / 2;
  int l;

  FFVazia (&m1);
  FFVazia (&m2);

  BlockD *aux1;
  BlockD *aux2;

  aux1 = f1.first;
  aux2 = f2.first;

  for (l = 0; l < m; l++)
    {
      aux1 = aux1->prox;
      Enfileira (&m1, aux1->data);

      aux2 = aux2->prox;
      Enfileira (&m2, aux2->data);
    }

  for (int k = l; k < a; k++)
    {
      aux2 = aux2->prox;
      Enfileira (&m1, aux2->data);

      aux1 = aux1->prox;
      Enfileira (&m2, aux1->data);
    }

  cout << "\nAs novas filas sao:\n\nF1: ";
  FImprime (&m1);
  cout << "\nF2: ";
  FImprime (&m2);
}
