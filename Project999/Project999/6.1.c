#include <stdio.h>

// 0
int string_laenge(char zk[], int anzahl) {
    int length = 0;

    // 0.5
    for (int i = 0; i < anzahl; i++) {
        if (zk[i] == '\0') { 
            return length;
        }
        length++;
    } 
    return -1;
}

//1
int main(void) {
    char name[40] = "Klaus";
    int laenge_name = 40;
    char land[40] = "Hochschule fuer Technik und Wirtschaft";
    int laenge_land = 40;

    //1.5
    printf("Laenge von %s ist %i\n", name, string_laenge(name, laenge_name)); // Erwartet: 5
    printf("Laenge von %s ist %i\n", land, string_laenge(land, laenge_land)); // Erwartet: 38


    // 2
    printf("Standard strlen von %s ist %lu\n", name, strlen(name)); // Erwartet: 5
    printf("Standard strlen von %s ist %lu\n", land, strlen(land)); // Erwartet: 38

    return 0;
}
