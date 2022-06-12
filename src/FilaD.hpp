#ifndef FILAD_H 
#define FILAD_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct ItemD ItemD;
typedef struct BlockD BlockD;
typedef struct FilaD FilaD;

struct ItemD{
	int val;
};

struct BlockD{
	ItemD data;
	BlockD *prox;
};

struct FilaD{
	BlockD *first;
	BlockD *last;
};


void FFVazia(FilaD *f);
void Enfileira(FilaD *f, ItemD d);
void Desenfileira(FilaD *f, ItemD *d);
void FImprime(FilaD *f);

#endif