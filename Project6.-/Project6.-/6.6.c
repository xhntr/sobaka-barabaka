#include <stdio.h>
#include <string.h>


int ist_palindrom(char zeichenkette[], int anzahl) {
	int start = 0;
	int ende = strlen(zeichenkette) - 1;


	while (start < ende) {
		if (zeichenkette[start] != zeichenkette[ende]) {
			return 0;

	}
	start++;
	ende--;
}

	return 1;

}

int main(void) {
	char name[40] = "anna";
	char land[40] = "tabalulabat";
	char drei[40] = "abcaacb";


	printf("String %s ist palindrom: %i\n", name, ist_palindrom(name, 40)); 
	printf("String %s ist palindrom: %i\n", land, ist_palindrom(land, 40)); 
	printf("String %s ist palindrom: %i\n", drei, ist_palindrom(drei, 40));

	return 0;
}
