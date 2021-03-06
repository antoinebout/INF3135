/* liblistes.c : Module de listes generiques - type abstrait */
#include <stdio.h>
#include <stdlib.h>
#include "liblistes.h"

struct liste {
	void *tete;
	struct liste *queue;
};
typedef struct liste s_liste;

p_liste insere_liste(p_liste l, void * element) {
	p_liste p_aux;
	p_aux = (p_liste) malloc(sizeof(s_liste));
	if (p_aux) {
		p_aux -> tete = element;
		p_aux -> queue = l;
	}
	return(p_aux);
}

void affiche_liste(p_liste l, void (*affiche)(void *, char *)) {
	char s[10];
	for (; l != NULL; l = l->queue) {
		(*affiche)(l->tete, s);
		printf("%s   ", s);
	}
	printf("\n");
}

p_liste retire_liste(p_liste l, void *element) {
	if (l != NULL) {
		element = l->tete;
		return(l->queue);
	}
	else 
		return(NULL);
}

