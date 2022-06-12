#include "FilaD.hpp"

void FFVazia(FilaD *f){
	f->first = (BlockD*) malloc (sizeof(BlockD));
	f->last  = f->first;
	f->first->prox = NULL;
}

void Enfileira(FilaD *f, ItemD d){
	f->last->prox = (BlockD*) malloc (sizeof(BlockD));
	f->last = f->last->prox;
	f->last->data = d;
	f->last->prox = NULL;
}

void Desenfileira(FilaD *f, ItemD *d){
	BlockD *aux;

	if(f->first == f->last || f == NULL || f->first->prox == NULL){
		printf("FILA VAZIA!\n");
		return;
	}
	
	aux = f->first->prox;
	f->first->prox = aux->prox;
	if (f->first->prox == f->last)
		f->last = f->first;
	d->val   = aux->data.val;
	free(aux);
}


void FImprime(FilaD *f){
	BlockD *aux;

	aux = f->first->prox;
	while(aux != NULL){
		printf("%d ", aux->data.val);
		aux = aux->prox;
	}
     printf("\n");
}