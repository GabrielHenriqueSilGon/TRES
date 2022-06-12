#ifndef FILA_HPP 
#define FILA_HPP

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM 900

typedef struct Item{
	int val;
}Item;

typedef struct Fila{
	Item vet[MAXTAM];
	int first;
	int last;
	int index;
}Fila;


void FFVazia(Fila *f);
void Enfileira(Fila *f, Item d);
void Desenfileira(Fila *f, Item *d);
void FRemove(Fila *f, Item d);
void FImprime(Fila *f);

#endif