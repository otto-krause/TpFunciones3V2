#include <stdio.h>
#include <stdLib.h>

int main()
{
	int cot=0;
	
	printf("Ingrese un numero del 1 al 5 (para solicitar la cantidad de lineas de asteriscos a mostrar) \n\n");
	scanf("%d",&cot);
	
	system("pause");
	system("cls");
	switch (cot)
	{
	case 1:
		printf("La cantidad de lineas de '*' que se muestran son de 1: \n");
		printf("\n  * \n");
		break;
	case 2:
		printf("La cantidad de lineas de '*' que se muestran son de 2: \n");
		printf("\n  * \n");
		printf("\n  ** \n");
		break;
	case 3:
		printf("La cantidad de lineas de '*' que se muestran son de 3: \n");
		printf("  * \n");
		printf("  ** \n");
		printf("  *** \n");
		break;
	case 4:
		printf("La cantidad de lineas de '*' que se muestran son de 4: \n");
		printf("  * \n");
		printf("  ** \n");
		printf("  *** \n");
		printf("  **** \n");
		break;
	case 5:
		printf("La cantidad de lineas de '*' que se muestran son de 5: \n");
		printf("  * \n");
		printf("  ** \n");
		printf("  *** \n");
		printf("  **** \n");
		printf("  ***** \n");
		break;
	default:
		if(cot < 1)
		{
			printf("El numero es menor a 1, Fin del programa \n");
		}
		if(cot > 5)
		{
			printf("El numero es mayor a 5, Fin del programa \n");
			return 0;
		}
	}
	return 0;
}

