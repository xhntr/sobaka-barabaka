#include <stdio.h>

int main() {
	int intvar_01 = 40;
	int* p_intvar_01 = &intvar_01;

	float floatvar_01 = 3.14f;
	float* p_floatvar_01 = &floatvar_01;

	char charvar_01 = 'A';
	char* p_charvar_01 = &charvar_01;	

	printf("Adresse der Variablen intvar_01: %p\n", (void*)&intvar_01);
	printf("Wert der Variablen intvar_01: %d\n", intvar_01);

	printf("Adresse der Zeigers p_intvar_01: %p\n", (void*)&p_intvar_01);
	printf("Wert der Variablen uber den Zeiger: %d\n", *p_intvar_01);

	printf("\nAdresse der Variablen floatvar_01: %p\n", (void*)&floatvar_01);
	printf("Wert der Variablen floatvar_01: %.2f\n", floatvar_01);
	
	printf("Adresse der Zeigers p_floatvar_01: %p\n", (void*)&p_floatvar_01);
	printf("Wert der Variablen uber den Zeiger: %.2f\n", *p_floatvar_01);

	printf("\nAdresse der Variablen charvar_01: %p\n", (void*)&charvar_01);
	printf("Wert der Variablen floatvar_01: %c\n", charvar_01);

	printf("Adresse der Zeigers p_charvar_01: %p\n", (void*)&p_charvar_01);
	printf("Wert der Variablen uber den Zeiger: %c\n", *p_charvar_01);

	return 0;

}


