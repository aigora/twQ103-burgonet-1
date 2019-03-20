#include<stdio.h>
#include<stdlib.h>
void inicio(void);
void titulo(void);
int main()
{
	inicio();
	titulo();
	int opcion,opcion2;
	int vectorproductos;	
	/*Aquí tenemos que usar un vector que contenga los productos de la nevera. Lo usaríamos dentro de los sub-case.
	Ahora mismo no está puesto como vector, lo he dejado como si fuera un %f. También hay que especificar cómo hacemos que los
	nombres de productos se almacenen dentro de un vector, con su nombre completo*/
	system("color 1F");
	printf("Escoja la accion a realizar:\n\n");
	printf("1)	INGRESAR PRODUCTO\n");
	printf("2)	RESTAR PRODUCTO\n");
	printf("3)	VER CONTENIDO ACTUAL\n");
	printf("4)	CONSULTAR FECHAS DE CADUCIDAD\n");
	printf("5)	SALIR\n\n");
	printf("Marque aqui la opcion:\t");
	scanf("%i",&opcion);
	switch(opcion)
	{
		case 1:
			system("cls");
			system("color 1F");
			titulo();
			printf("HA ESCOGIDO LA OPCION: INGRESAR PRODUCTO\n\n\n");
			printf("Seleccione la categoria a la que ingresar un producto:\n\n");
			printf("1)	CARNES\n");
			printf("2)	PESCADOS\n");
			printf("3)	FRUTAS\n");
			printf("4)	VERDURAS\n");
			printf("5)	LACTEOS\n");
			printf("6)	OTROS\n");
			printf("Marque aqui su opcion:\t");
			scanf("%i",&opcion2);
			switch(opcion2)
			{
				case 1:
					system("cls");
					titulo();
					system("color 4F");
					printf("CARNES\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 2:
					system("cls");
					titulo();
					system("color 3F");
					printf("PESCADOS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 3:
					system("cls");
					titulo();
					system("color 6F");
					printf("FRUTAS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 4:
					system("cls");
					titulo();
					system("color 2F");
					printf("VERDURAS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 5:
					system("cls");
					titulo();
					system("color 8F");
					printf("LACTEOS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 6:
					system("cls");
					titulo();
					system("color 1F");
					printf("OTROS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
			}
			break;
		case 2:
			system("cls");
			system("color 1F");
			titulo();
			printf("HA ESCOGIDO LA OPCION: RESTAR PRODUCTO\n\n\n");
			printf("Seleccione la categoria a la que quitar un producto:\n\n");
			printf("1)	CARNES\n");
			printf("2)	PESCADOS\n");
			printf("3)	FRUTAS\n");
			printf("4)	VERDURAS\n");
			printf("5)	LACTEOS\n");
			printf("6)	OTROS\n");
			printf("Marque aqui su opcion:\t");
			scanf("%i",&opcion2);
			switch(opcion2)
			{
				case 1:
					system("cls");
					titulo();
					system("color 4F");
					printf("CARNES\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 2:
					system("cls");
					titulo();
					system("color 3F");
					printf("PESCADOS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 3:
					system("cls");
					titulo();
					system("color 6F");
					printf("FRUTAS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 4:
					system("cls");
					titulo();
					system("color 2F");
					printf("VERDURAS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 5:
					system("cls");
					titulo();
					system("color 8F");
					printf("LACTEOS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 6:
					system("cls");
					titulo();
					system("color 1F");
					printf("OTROS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
			}
			break;
		case 3:
			system("cls");
			system("color 1F");
			titulo();
			printf("HA ESCOGIDO LA OPCION: VER CONTENIDO ACTUAL\n\n\n");
			printf("Seleccione la categoria:\n\n");
			printf("1)	CARNES\n");
			printf("2)	PESCADOS\n");
			printf("3)	FRUTAS\n");
			printf("4)	VERDURAS\n");
			printf("5)	LACTEOS\n");
			printf("6)	OTROS\n");
			printf("Marque aqui su opcion:\t");
			scanf("%i",&opcion2);
			switch(opcion2)
			{
				case 1:
					system("cls");
					titulo();
					system("color 4F");
					printf("CARNES\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 2:
					system("cls");
					titulo();
					system("color 3F");
					printf("PESCADOS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 3:
					system("cls");
					titulo();
					system("color 6F");
					printf("FRUTAS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 4:
					system("cls");
					titulo();
					system("color 2F");
					printf("VERDURAS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 5:
					system("cls");
					titulo();
					system("color 8F");
					printf("LACTEOS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 6:
					system("cls");
					titulo();
					system("color 1F");
					printf("OTROS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
			}
			break;
		case 4:
			system("cls");
			system("color 1F");
			titulo();
			printf("HA ESCOGIDO LA OPCION: CONSULTAR FECHAS DE CADUCIDAD\n\n\n");
			printf("Seleccione la categoria a revisar:\n\n");
			printf("1)	CARNES\n");
			printf("2)	PESCADOS\n");
			printf("3)	FRUTAS\n");
			printf("4)	VERDURAS\n");
			printf("5)	LACTEOS\n");
			printf("6)	OTROS\n");
			printf("Marque aqui su opcion:\t");
			scanf("%i",&opcion2);
			switch(opcion2)
			{
				case 1:
					system("cls");
					titulo();
					system("color 4F");
					printf("CARNES\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 2:
					system("cls");
					titulo();
					system("color 3F");
					printf("PESCADOS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 3:
					system("cls");
					titulo();
					system("color 6F");
					printf("FRUTAS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 4:
					system("cls");
					titulo();
					system("color 2F");
					printf("VERDURAS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 5:
					system("cls");
					titulo();
					system("color 8F");
					printf("LACTEOS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
				case 6:
					system("cls");
					titulo();
					system("color 1F");
					printf("OTROS\n\n\n");
					printf("Indique el nombre de su producto:\t");
					scanf("%f",&vectorproductos);
					break;
			}
			break;
		case 5:
			system("cls");
			system("color 1F");
			titulo();
			printf("HA ESCOGIDO LA OPCION: SALIR\n\n\n");
			printf("ADIOS Y HASTA PRONTO!");
			return 0;
			break;
		default:
			return 1;
			system("cls");
			break;
	}
}
void inicio(void)
{
	system("color 1F");
	printf("\n\n\n\n\n\n\n\n\n\n\t\tHola! Soy Smart-Fridge. En que puedo ayudarte?\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	system("cls");
}
void titulo(void)
{
	system("color 1F");
	printf("\t\t\t******BIENVENIDO A SMART-FRIDGE******\t\t\t\n");
	printf("\t\t\t\tBy SamuSung Electronics\t\t\t\n\n\n\n");
}
