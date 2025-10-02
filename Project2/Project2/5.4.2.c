#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[30];
	char vorname[30];
	char ort[30];
	int alter;

};

void ausgabedaten(struct Person personen[], int anzahl) {
	for (int i = 0; i < anzahl; i++) {
		printf("Person %d:\n", i + 1);
		printf("Name: %s\n", personen[i].name);
		printf("Vorname: %s\n", personen[i].vorname);
		printf("Ort: %s\n", personen[i].ort);
		printf("Alter: %d\n\n", personen[i].alter);
	}
} 

int findeMaxAlter(struct Person personen[], int anzahl) {
	int maxIndex = 0; 

	for (int i = 1; i < anzahl; i++) {
		if (personen[i].alter > personen[maxIndex].alter) {
			maxIndex = i; 
		}
	}

	return maxIndex;
}

int findeMinAlter(struct Person personen[], int anzahl) {
	int minIndex = 0;

	for (int i = 1; i < anzahl; i++) {
		if (personen[i].alter < personen[minIndex].alter) {
			minIndex = i; 
		}
	}
	return minIndex;  
}

int main() {
	struct Person personen[3] = {
		{"Von-bisckmarck", "Otto", "Berlin", 99},
		{"Balkan", "Anatoly", "Hamburg", 50},
		{"Verstappen", "Max", "Dresden", 20},
	};

	int anzahl = 3;

	ausgabedaten(personen, anzahl);

	int maxIndex = findeMaxAlter(personen, anzahl);
	printf("Person mit maximalem Alter:\n");
	printf("Name: %s %s, Ort: %s, Alter: %d\n\n",
		personen[maxIndex].vorname, personen[maxIndex].name, personen[maxIndex].ort, personen[maxIndex].alter);

	int minIndex = findeMinAlter(personen, anzahl);
	printf("Person mit minimalem Alter:\n");
	printf("Name: %s %s, Ort: %s, Alter: %d\n\n",
		personen[minIndex].vorname, personen[minIndex].name, personen[minIndex].ort, personen[minIndex].alter);


	return 0;
}