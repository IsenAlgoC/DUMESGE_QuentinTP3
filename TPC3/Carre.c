#include <stdlib.h>
#include <stdio.h>
#define carre(x) (x) * (x)   //il faut rajouter des parenth�ses car Visual Studio ne les consid�re pas automatiquement


int main() {
	int Nb = 5;
	printf("%d", carre(Nb));
	printf("\n%d", carre(Nb + 1));
}

