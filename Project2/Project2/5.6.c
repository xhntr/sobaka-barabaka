#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Buch {
    char titel[100];
    char autor[100];
    char nummer[20];
    int seitenanzahl;
    int jahr;

};

void eingabeBuch(struct Buch* b) {
    printf("Titel: ");
    fgets(b->titel, sizeof(b->titel), stdin);
    b->titel[strcspn(b->titel, "\n")] = '\0';   

    printf("Autor: ");
    fgets(b->autor, sizeof(b->autor), stdin);
    b->autor[strcspn(b->autor, "\n")] = '\0';

    printf("Nummer: ");
    fgets(b->nummer, sizeof(b->nummer), stdin);
    b->nummer[strcspn(b->nummer, "\n")] = '\0';

    printf("Seitenanzahl: ");
    scanf("%d", &b->seitenanzahl);

    printf("Veroffentlichung Jahr: ");
    scanf("%d", &b->jahr); 

    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ausgabeBuch(const struct Buch* b) {
    printf("\nBucherdetails:\n");
    printf("Titel: %s\n", b->titel);
    printf("Autor: %s\n", b->autor);
    printf("Nummer: %s\n", b->nummer);
    printf("Seitenanzahl: %d\n", b->seitenanzahl); 
    printf("Jahr: %d\n", b->jahr);

}

void sucheBuchSeitenzahl(const struct Buch* b[], int anzahl, int seiten) {
    printf("\nBucher mit %d Seiten:\n", seiten);
    for (int i = 0; i < anzahl; i++) {
        if (b[i]->seitenanzahl == seiten) {
            ausgabeBuch(b[i]);
        }
    }
}

int main() {
    struct Buch b1, b2, b3;
    //1
    printf("Geben sie die daten fur erste Buch: \n");
    eingabeBuch(&b1);

    printf("\nGeben sie die daten fur zweite Buch : \n");
    eingabeBuch(&b2);

    printf("\nGeben sie die daten fur dritte Buch: \n");
    eingabeBuch(&b3);
    //2
    printf("\nBuch 1:\n");
    ausgabeBuch(&b1);

    printf("\nBuch 2:\n");
    ausgabeBuch(&b2);

    printf("\nBuch 3:\n");
    ausgabeBuch(&b3);
    //3

    int seitenSuche;
    printf("\nGeben sie die seitenanzahl, nach der gesucht werden soll: ");
    scanf("%d", &seitenSuche);

    struct Buch* bucher[3] = { &b1, &b2, &b3 };
    sucheBuchSeitenzahl(bucher, 3, seitenSuche);

    return 0;
}
