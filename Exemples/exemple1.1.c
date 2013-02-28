/* Exemple1.1.c */
#include <stdio.h>	/* Directives au pr�processeur */
#define DEBUT 02		/* Constantes comme symboles du pr�processeur*/
#define FIN 20	

unsigned fact(unsigned x);	/* D�claration de la fonction fact */

int main () {			/* Fonction principale */
	int i;			/* D�claration des variables locales � la fonction */

	for (i=DEBUT; i<=FIN; i++) {
		printf("%d a pour factorielle %d\n",i,fact(i));
	}
	return 0;
}

unsigned fact(unsigned x) {		/* Calcule la factorielle de x*/
	if (x==0) 
		return 1;		/* Tous les cas sont-ils test�s ? */
	else 
		return x*fact(x-1);	/* Appel r�cursif de la fonction */
}
