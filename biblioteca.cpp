/*

Author: Thales Costa
Discipline: ED1
Professor: Irineu
May/2017

*/

#include "biblioteca.h"

int quant = 0;

Stack* push(Stack* L, int element){
	quant++;
	
	if(L == NULL){		//L == NULL se a pilha estiver vazia
		L = (Stack*) malloc(sizeof(Stack));
		L->prox = NULL;
		L->conteudo = element;
		
		return L;
	}else{
		Stack* nova;
		
		nova = (Stack*) malloc(quant*(sizeof(Stack)));
		nova->prox = NULL;
		nova->conteudo = element;
		
		Stack* P = L;
		while(P->prox != NULL){
			P = P->prox;
		}
		P->prox = nova;
		
		return L;
	}
}

int pop(Stack* L){
	int ret;
	Stack* anterior;
	
	Stack* P = L;
	if(quant>1){		//Caso a pilha possua mais de um elemento, navega até o úiltimo, guardando o anterior, e depois o faz apontar para NULL
		while(L->prox != NULL){
			anterior = L;
			L = L->prox;
		}
		anterior->prox = NULL;
	}
	
	quant--;
	
	ret = L->conteudo;		//guarda o elemento retirado
	
	if(quant==0){
		L = NULL;
	}else{
		free(L);
	}
	
	return ret;
}

int size(){
	return quant;
}

bool isEmpty(){
	
	if(quant==0){		//retorna 'true' caso a pilha esteja vazia, 'false' caso contrário
		return true;
	}else{
		return false;
	}
}

int top(Stack* L){
	int i=0;
	
	while(L->prox != NULL){		//navega até o último elemento da pilha
		L = L->prox;
	}
	
	return L->conteudo;
}

void fim(Stack* L){
	
	while(quant>0){		//chama a função pop até que a pilha esteja vazia
		pop(L);
	}
}















