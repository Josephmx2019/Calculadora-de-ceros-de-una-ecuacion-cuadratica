#include <stdio.h>
#include <math.h>

#define MAX_BUFFER_SIZE 1024

void igualUno(float a, float b, float c) {
	float discriminante, x1, x2;
	
	discriminante = pow((b / 2), 2) - c;
	if (discriminante < 0) {
		printf("La ecuación no tiene soluciones reales\n");
		x1 = (-b / 2);
		x2 = sqrt(-discriminante);
		printf("La primera raiz es %.2f + %.2fi\n", x1, x2);
		printf("La segunda raiz es %.2f - %.2fi\n", x1, x2);
	} else {
		x1 = (-b / 2) + sqrt(discriminante);
		x2 = (-b / 2) - sqrt(discriminante);
		printf("La primera raiz es %.2f\n", x1);
		printf("La segunda raiz es %.2f\n", x2);
	}
}

void diferenteUno(float a, float b, float c) {
	float discriminante, x1, x2;
	
	discriminante = pow(b, 2) - 4 * a * c;
	if (discriminante < 0) {
		printf("La ecuación no tiene soluciones reales\n");
		x1 = (-b) / (2 * a);
		x2 = sqrt(-discriminante) / (2 * a);
		printf("La primera raiz es %.2f + %.2fi\n", x1, x2);
		printf("La segunda raiz es %.2f - %.2fi\n", x1, x2);
	} else {
		x1 = ((-b) + sqrt(discriminante)) / (2 * a);
		x2 = ((-b) - sqrt(discriminante)) / (2 * a);
		printf("La primera raiz es %.2f\n", x1);
		printf("La segunda raiz es %.2f\n", x2);
	}
}

int main(int argc, char *argv[]) {
	char opc = 'S';
	float a, b, c;
	printf("--------- Calculadora de raices de una ecuación de segundo grado ---------\n");
	while(opc != 'N' && opc != 'n') {
		printf("Ingresa el valor de a: ");
		scanf("%f", &a);
		printf("Ingresa el valor de b: ");
		scanf("%f", &b);
		printf("Ingresa el valor de c: ");
		scanf("%f", &c);
		if (a == 1) {
			igualUno(a, b, c);
		} else {
			diferenteUno(a, b, c);
		}
		printf("¿Quieres continuar? S/N: ");
		scanf(" %c", &opc); // Espacio antes de %c para ignorar cualquier carácter en blanco residual
	}
	printf("Presiona cualquier tecla para salir: ");
	getchar(); // No disponible en todos los compiladores, considera usar getchar() si getch() no está disponible
	return 0;
}
