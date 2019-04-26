/*

Author: Thales Costa
Discipline: ED1
Professor: Irineu
May/2017

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Pilha {

	int conteudo;
	struct Pilha* prox;

} Stack;

Stack* push(Stack* L, int num);
int pop(Stack* L);
int size();
bool isEmpty();
int top(Stack* L);
void fim(Stack* L);

