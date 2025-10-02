#include <stdio.h>

int main() {
    int feld[] = { 4, 5, 23, 12, 7, 9 };
    int feldlaenge = 6;
    int summe = 0;

    // Summiere die Elemente, bis das erste Element gr??er als 10 gefunden wird
    for (int i = 0; i < feldlaenge; i++) {
        summe += feld[i];  // F?ge das aktuelle Element zur Summe hinzu
        if (feld[i] > 10) {  // Stoppe, wenn der Wert gr??er als 10 ist
            break;
        }
    }

    printf("Die Summe grossere als 10 ist: %d\n", summe);

    return 0;
}
