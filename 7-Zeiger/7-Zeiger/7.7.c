#include <stdio.h>
#include <math.h>
void mittelwert_und_standardabweichung(double* array, int n, double* mw, double* s) {
	double summe = 0.0;
	double summe_quadrierte_differenzen = 0.0;

	for (int i = 0; i < n; i++) {
		summe += array[i];
	}
	*mw = summe / n;

	for (int i = 0; i < n; i++) {
		summe_quadrierte_differenzen += (array[i] - *mw) * (array[i] - *mw);
	}

	*s = sqrt(summe_quadrierte_differenzen / n);
}

int main(void) {
	double ein_feld[] = { 1.0,2.0,3.0,4.0, 5.0,6.0,7.0,8.0,9.0,10.0 };
	int n = sizeof(ein_feld) / sizeof(ein_feld[0]);
	double mw;
	double s;
	mittelwert_und_standardabweichung(ein_feld, n, &mw, &s);

	printf("mittelwert = %f\n", mw);
	printf("standardabweichung = %f\n", s);

	return 0;
}
