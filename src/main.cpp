#include <iostream>
#include "Fila.hpp"
#include "FilaD.hpp"
#include "TRESa.hpp"
#include "TRESb.hpp"
#include "TRESc.hpp"
using namespace std;

int
main ()
{
  char c;
  c = ' ';

  TRESa ta;
  TRESb tb;
  TRESc tc;

  while (c != 's')
    {
      cout << "\nQual questao voce quer testar? (digite s para sair)" << endl;
      cin >> c;
      cout << "\n";
      switch (c)
	{

	case 'a':
	  {

	    int a;

	    cout << "De o tamanho das filas:\n";
	    cin >> a;
	    ta.makef (a);
	    ta.ParteLiga (a);
	    break;
	  }

	  case 'b':
	     {
	     tb.makeb();
	     tb.Fazindex();
	     break;}

	     case 'c':
	     {
	     tc.makec();
	     tc.FazindexBubble ();
	     break;
	     }
	   
	}
    }

  return 0;
}
