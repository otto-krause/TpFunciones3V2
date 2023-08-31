#include <stdio.h>
#include <stdLib.h>

int resul(int numero) {
	float resultado= (numero * numero) - (2 * numero);
	printf("El resultado de restar el doble de %d a su cuadrado es: %.2f \n", numero, resultado);
	
	return resultado;
}

int main() {
	int numero;
	
	printf("Ingrese un número: ");
	scanf("%d", &numero);
	
     resul(numero);
	

	
}
