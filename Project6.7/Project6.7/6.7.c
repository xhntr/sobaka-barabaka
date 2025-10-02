#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool ist_palindrom(char zeichenkette[], int anzahl) {
	int start = 0;
	int ende = strlen(zeichenkette) - 1;


	while (start < ende) {
		if (zeichenkette[start] != zeichenkette[ende]) {
			return false;

		}
		start++;
		ende--;
	}

	return true;

}

void zahl_in_basesystem(int zahl, int base, char ergebnis[]) {
	int index = 0;
	do {
		int rest = zahl % base;
		ergebnis[index++] = (rest < 10) ? ('0' + rest) : ('A' + (rest - 10));
		zahl /= base;
	} while (zahl > 0);
	ergebnis[index] = '\0';

	for (int i = 0; i < index / 2; i++) {
		char temp = ergebnis[i];
		ergebnis[i] = ergebnis[index - 1 - i];
		ergebnis[index - 1 - i] = temp;

	}
}

bool palindrom_test_zahl(int zahl, int base) {
	char ergebnis[40];
	zahl_in_basesystem(zahl, base, ergebnis);

	int laenge = 0;
	while (ergebnis[laenge] != '\0') laenge++;
	return ist_palindrom(ergebnis, laenge);
}

int main() {
	int zahl1 = 111;
	int zahl2 = 222;
	int zahl3 = 333;

	printf("zahl %d in basis %d ist palindrom %i\n", zahl1, 10, palindrom_test_zahl(zahl1, 10));
	printf("zahl %d in basis %d ist palindrom %i\n", zahl2, 2, palindrom_test_zahl(zahl2, 2));
	printf("zahl %d in basis %d ist palindrom %i\n", zahl3, 10, palindrom_test_zahl(zahl3, 10));
}
