#include <stdio.h>

void tauschen(int* var01, int *var02) {

	int temp = *var01;
	*var01 = *var02;
	*var02 = temp;

}
int main() {
	int wert01 = 10;
	int wert02 = 20;
	printf("vorher: wert01 = %i\twert02 = %i\n", wert01, wert02);
	tauschen(&wert01, &wert02);

	printf("nachher: wert01 = %i\twert02 = %i\n", wert01, wert02);
	return 0;
}
