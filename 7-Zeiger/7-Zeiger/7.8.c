#include <stdio.h>
#include <math.h>
void findMinMax( const double *feld,int groesse, double *min, double *max) {
	*min = feld[0];
	*max = feld[0];

	for (int i = 1; i < groesse; i++) {
		if (feld[i] < *min) {
			*min = feld[i];
		}
		if (feld[i] > *max) {
			*max = feld[i];
		}
	}
}
int main(void) {
	double ein_feld[] = { 0.0,1.0};
	int groesse = sizeof(ein_feld) / sizeof(ein_feld[0]);
	double min; 
	double max;
	findMinMax(ein_feld, groesse, &min, &max);
		printf("Minimum = %f\n", min);
	printf("Maximum = %f\n", max);
}
		