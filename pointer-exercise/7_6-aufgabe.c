#include <stdio.h>


void mult_sqr(int a, int b, int *produkt, int *quadrat) {
	
	*produkt = a * b;
	*quadrat = (*produkt) * (*produkt);

}
int main(void) {
	int a = 3;
	int b = 4;
	int produkt;
	int quadrat;
	mult_sqr(a, b, &produkt, &quadrat);
	printf("a=%i; b=%i; produkt=%i; quadrat=%i\n", a, b, produkt, quadrat);

	return 0;
}
