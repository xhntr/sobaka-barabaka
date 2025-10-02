#include <stdio.h>

struct Fahrzeug {
	char hersteller[50];
	int baujahr;
	char kennzeichen[20];
	float gewicht;
};

int main() {
	struct Fahrzeug f1 = { "audi", 2010, "a-1234", 1500 };
	struct Fahrzeug f2 = { "bmw", 2009, "b-1234", 1900 };
	struct Fahrzeug f3 = { "mercedes", 2001, "c-1234", 1400 };
		printf("F1:\nHersteller: %s\nBaujahr: %d\nKennzeichen: %s\nGewicht: %.2f kg\n\n", f1.hersteller, f1.baujahr, f1.kennzeichen, f1.gewicht);
		printf("F2:\nHersteller: %s\nBaujahr: %d\nKennzeichen: %s\nGewicht: %.2f kg\n\n", f2.hersteller, f2.baujahr, f2.kennzeichen, f2.gewicht);
		printf("F3:\nHersteller: %s\nBaujahr: %d\nKennzeichen: %s\nGewicht: %.2f kg\n\n", f3.hersteller, f3.baujahr, f3.kennzeichen, f3.gewicht);

	return 0;
}
