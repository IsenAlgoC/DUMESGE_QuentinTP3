#include <stdlib.h>
#include <stdio.h>
#define carre(x) (x) * (x)	//Il faut rajouter des parenth�ses car Visual Studio ne les consid�re pas automatiquement
							//Sans parenth�se voici l'op�ration : carre(Nb+1) = Nb + 1 * Nb + 1 = Nb + Nb + 1 = 2*Nb + 1

int main() {
	int Nb = 5;
	printf("%d", carre(Nb));
	printf("\n%d", carre(Nb + 1));
}

