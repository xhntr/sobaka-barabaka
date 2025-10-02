#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Fahrzeug {
	char hersteller[50];
	int baujahr;
	char kennzeichen[20];
	float gewicht;
};

int main() {
	struct Fahrzeug f1, f2, f3;
	//1
	printf("Bitte geben sie die daten fur f1:\n");

	printf("herstteller: ");
	scanf("%s", f1.hersteller);

	printf("Baujahr: ");
	scanf("%d", &f1.baujahr);

	printf("kennzeichen: ");
	scanf("%s", f1.kennzeichen);

	printf("gewicht: ");
	scanf("%f", &f1.gewicht);
	//2
	printf("Bitte geben sie die daten fur f2:\n");

	printf("herstteller: ");
	scanf("%s", f2.hersteller);

	printf("Baujahr: ");
	scanf("%d", &f2.baujahr);

	printf("kennzeichen: ");
	scanf("%s", f2.kennzeichen);

	printf("gewicht: ");
	scanf("%f", &f2.gewicht);
	//3
	printf("Bitte geben sie die daten fur f3:\n");

	printf("herstteller: ");
	scanf("%s", f3.hersteller);

	printf("Baujahr: ");
	scanf("%d", &f3.baujahr);

	printf("kennzeichen: ");
	scanf("%s", f3.kennzeichen);

	printf("gewicht: ");
	scanf("%f", &f3.gewicht);

	//antwort

	printf("\nF1:\nHersteller: %s\nBaujahr: %d\nKennzeichen: %s\nGewicht: %2f kg\n\n", f1.hersteller, f1.baujahr, f1.kennzeichen, f1.gewicht);

	printf("\nF2:\nHersteller: %s\nBaujahr: %d\nKennzeichen: %s\nGewicht: %2f kg\n\n", f2.hersteller, f2.baujahr, f2.kennzeichen, f2.gewicht);

	printf("\nF3:\nHersteller: %s\nBaujahr: %d\nKennzeichen: %s\nGewicht: %2f kg\n\n", f3.hersteller, f3.baujahr, f3.kennzeichen, f3.gewicht);

	return 0;
}