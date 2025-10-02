#include <stdio.h>

int main() {

	float floatvar = 3.14135;
	float* p_floatvar = &floatvar;

	*p_floatvar = 2.13045;

	printf("\nAdresse der Variablen floatvar: %p\n", (void*)&floatvar);
	printf("Wert der Variablen floatvar: %.5f\n", floatvar);

	printf("Adresse der Zeigers p_floatvar: %p\n", (void*)&p_floatvar);
	printf("Wert der Variablen uber den Zeiger: %.5f\n", *p_floatvar);

	return 0;
}