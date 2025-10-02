#include <stdio.h>
#include <string.h>



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

//0.7
void string_umkehren(char zeichenkette[], int anzahl_zeichen) {
	int start = 0;
	int ende = anzahl_zeichen - 1;

	while (start < ende) {
		char temp = zeichenkette[start];
		zeichenkette[start] = zeichenkette[ende];
		zeichenkette[ende] = temp;

		start++;
		ende--;
	}
	printf("%s\n", zeichenkette);
}

// 0.8
void vokale_zaehlen(char zk[], int anzahl) {
	int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;


	for (int i = 0; i < anzahl; i++) {
		char c = zk[i];

		if (c == 'a' || c == 'A') a_count++;
		else if(c == 'e' || c == 'E') e_count++;
		else if(c == 'i' || c == 'I') i_count++;
		else if(c == 'o' || c == 'O') o_count++;
		else if(c == 'u' || c == 'U') u_count++;
	}
	printf("a: %d\n", a_count);
	printf("e: %d\n", e_count);
	printf("i: %d\n", i_count);
	printf("o: %d\n", o_count);
	printf("u: %d\n", u_count);

}


//1
int main(void) {
	char name[40] = "Klaus";
	char land[40] = "Hochschule fur Technik und Wirtschaft";

	int laenge_name = strlen(name);
	int laenge_land = strlen(land);

	//1.5
	printf("Laenge von %s ist %i\n", name, string_laenge(name, laenge_name));
	printf("Laenge von %s ist %i\n", land, string_laenge(land, laenge_land));


	// 2
	printf("Standard strlen von %s ist %lu\n", name, strlen(name));
	printf("Standard strlen von %s ist %lu\n", land, strlen(land));

	// 2.5
	string_umkehren(name, laenge_name);
	string_umkehren(land, laenge_land);

	//3
	printf("Umgekehrter Name: %s\n", name);
	printf("Umgekehrtes Land: %s\n", land);

	//3.5
	vokale_zaehlen(name, laenge_name);
	vokale_zaehlen(land, laenge_land);

	return 0;

}