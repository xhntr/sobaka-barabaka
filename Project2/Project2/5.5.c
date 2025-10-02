#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

enum Studiengang {
    VI,
    WI,
    I,
    MI
};

struct Person {
    char name[30];
    char vorname[30];
    char ort[30];
    int alter;
    enum Studiengang studiengang;
};

const char* getstudiengangname(enum Studiengang sg) {
    switch (sg) {
    case VI: return "VI";
    case WI: return "WI";
    case I: return "I";
    case MI: return "MI";
    default: return "Unbekannt";
    }
}

void daten(struct Person personen[], int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", personen[i].name);
        printf("Vorname: %s\n", personen[i].vorname);
        printf("Ort: %s\n", personen[i].ort);
        printf("Alter: %d\n", personen[i].alter);
        printf("Studiengang: %s\n\n", getstudiengangname(personen[i].studiengang));
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
    struct Person personen[4] = {
        {"Von-Bisckmarck", "Otto", "Berlin", 99, VI},
        {"Balkan", "Anatoly", "Hamburg", 50, WI},
        {"Verstappen", "Max", "Dresden", 20, I},
        {"Parovozik", "Tomas", "Hamburg", 29, MI},
    };

    int anzahl = 4;

    daten(personen, anzahl);

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
