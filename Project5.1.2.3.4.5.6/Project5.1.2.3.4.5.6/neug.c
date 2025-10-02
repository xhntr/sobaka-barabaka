#include <stdio.h>

// Feld anlegen, entweder 3x3 oder 1x9
// int spielfeld[3][3] = { 0 };
int spielfeld[9] = { 0, 0, 0, 0, 0, 0, 0, 0};
int laenge_spielfeld = 9;

void main() {

	int spieler_akt = 1;
 
	int gewinnsituation_eingetreten = 0;
	//solange noch keinr Gewinnstituation oder Fled voll
	while (!gewinnsituation_eingetreten) {

		// eingabe des spielers
		int feld_eingegeben;
		int scanf_erfolg = 0;
		while (scanf_erfolg == 0) {
			printf("Feldnummer als Ganzzahl eingeben: ");
			scanf_erfolg = scanf_s("%d", &feld_eingegeben);
			while (getchar() != '\n');
		}
		// prufen ob gewaehltes feld schon belegt 
		
		// Speilfeld belegen an gewahlter Stelle
		spielfeld[feld_eingegeben-1] = spieler_akt;

		// Spielefeld ausgeben

		if (ist_gewinn_eingetreten (spielfeld, laenge_spielfeld, spieler_akt)) {
			gewinnsituation_eingetreten = 1;

		}

		if (spieler_akt == 1) {
			spieler_akt = 2;
		}
		else {
			spieler_akt =1;
		}
	} 

}

int ist_gewinn_eintreten(int spielfeld[], int laenge_spielfeld, int spieler) {
	
	if (spielfeld[0] == spieler && spielfeld[1] == spieler && spielfeld[2] == spieler)


		return 0;

}
