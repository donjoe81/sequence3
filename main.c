#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main(){
	int nbr1 = rand()%50 +10;
	int nbr2 = rand()%50+10;
	printf	("la somme de %d + %d = %d ",nbr1,nbr2,nbr1+nbr2);
}
