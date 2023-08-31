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
	
	int opcion;
	do {
		printf("\nIngrese el primer número: ");
		scanf("%d", &num1);
		
		printf("Ingrese el segundo número: ");
		scanf("%d", &num2);
		
		printf("\nSeleccione una opción:\n");
		printf("1. SUMAR\n");
		printf("2. RESTAR\n");
		printf("3. MULTIPLICAR\n");
		printf("4. DIVIDIR\n");
		printf("5. Ingresar otro par de números\n");
		printf("6. Salir\n");
		scanf("%d", &opcion);
		
		switch (opcion) {
		case 1:
			printf("La suma es: %d\n", suma(num1, num2));
			break;
		case 2:
			resta(num1, num2);
			break;
		case 3:
			printf("La multiplicación es: %d\n", num1 * num2);
			break;
		case 4:
			printf("La división es: %.2f\n", divi(num1, num2));
			break;
		case 5:
			break;
		case 6:
			printf("Saliendo del programa.\n");
			break;
		default:
			printf("Opción no válida\n");
			break;
		}
	} while (opcion != 6);
	
	return 0;
}
