#include <stdio.h>
void inkrementieren(int* var01, int* var02) {
	(*var01)++;
	(*var02)++;

}
int main() {
	int wert01 = 10;
	int wert02 = 20;
	printf("vorher: wert01 = %i\twert02 = %i\n", wert01, wert02);
	inkrementieren(&wert01, &wert02);

	// ... inkrementieren( ... );
	printf("nachher: wert01 = %i\twert02 = %i\n", wert01, wert02);
	return 0;
}