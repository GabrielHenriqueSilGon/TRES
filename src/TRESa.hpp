#ifndef TRESA_HPP
#define TRESA_HPP
#include "FilaD.hpp"
#include <utility>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

class TRESa
{
public:

  FilaD f1;
  FilaD f2;
  FilaD m1;
  FilaD m2;

  void makef(int a);
  void ParteLiga(int a);
};

#endif
