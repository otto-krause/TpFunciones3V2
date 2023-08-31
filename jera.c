#include <stdio.h>
#include <stdLib.h>

int suma(int num1, int num2) {
	return num1 + num2;
}

void resta(int num1, int num2) {
	printf("La resta es: %d\n", num1 - num2);
}

float divi(int num1, int num2) {
	return (float)num1 / num2;
}

int main() {
	int num1, num2;
	
	printf("Ingrese un Numero: ");
	scanf("%d", &num1);
	
	printf("Ingrese otro Numero: ");
	scanf("%d", &num2);
	
	int opcion;
	printf("Seleccione una opción: \n");
	printf("1. SUMAR\n");
	printf("2. RESTAR\n");
	printf("3. MULTIPLICAR\n");
	printf("4. DIVIDIR\n");
	scanf("%d", &opcion);
	
	switch(opcion) {
	case 1:
		printf("La suma es de: %d\n", suma(num1, num2));
		break;
	case 2:
		resta(num1, num2);
		break;
	case 3:
		printf("La multiplicación es de: %d\n", num1 * num2);
		break;
	case 4:
		printf("La división es de: %.2f\n", divi(num1, num2));
		break;
	default:
		printf("La Opción no es válida\n");
		break;
	}
	
	return 0;
}
