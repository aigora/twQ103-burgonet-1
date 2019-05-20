#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void inicio(void);
void titulo(void);
struct producto{
	char nombre[50];
	int cantidad;
	int precio;
	int caducidad;
};

int main () {
	
	struct producto productos[MAX];
	int nprod=0 , i;
	int opcion;
	char respuesta;
	
	FILE *archivo;
	archivo=fopen("milista.txt","r");
	while (fscanf(archivo, "%s %d %d %d", productos[nprod].nombre, &productos[nprod].cantidad, &productos[nprod].precio) != EOF){
		nprod++;
	}
	fclose(archivo);

	do{
		system("cls");
		fflush(stdin);
		inicio();
		titulo();
		system("color 1F");
		printf("\n\n====== MENU DE OPCIONES ======\n\n\n");
		printf("[1]-Ingresar producto\n");
		printf("[2]-Consultar listado\n");
		printf("[3]-Guardar cambios y salir\n\n");
		printf(">>>	Introducza una opcion: [ ]\b\b");
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1:
				
				system("cls");
				titulo();
				system("color 4F");
				printf("\n\nHA ESCOGIDO LA OPCION: INGRESAR PRODUCTO\n\n");
				printf("Introduzca el nombre del producto: ");
				scanf("%s", productos[nprod].nombre);
				printf("Indique la cantidad a ingresar: ");
				scanf("%d", &productos[nprod].cantidad);
				printf("Indique el precio de compra del producto: ");
				scanf("%d", &productos[nprod].precio);
				printf("Introduzca los dias restantes para que caduque: [ ]\b\b");
				scanf("%d", &productos[nprod].caducidad);
				nprod++;
				system("pause");
				break;
				
			case 2:
				system("cls");
				titulo();
				system("color 3F");
				printf("\n\nHA ESCOGIDO LA OPCION: CONSULTAR LISTADO\n\n");
				for (i=0; i<nprod; i++) {
				printf("Nombre del producto: %s\n", productos[i].nombre);
				printf("Cantidad: %d unidades\n", productos[i].cantidad);	
				printf("Precio: %d euros\n", productos[i].precio);
				printf("Dias hasta caducar: %d dias\n", productos[i].caducidad);	
				}
				system("pause");
				break;
			case 3:
				system("cls");
				titulo();
				system("color 6F");
				printf("\n\nHA ESCOGIDO LA OPCION: GUARDAR CAMBIOS Y SALIR\n\n");
				archivo = fopen("milista.txt", "w");
				for (i=0; i<nprod; i++) {
				fprintf(archivo,"%s\n", productos[i].nombre);
				fprintf(archivo,"%d unidades\n", productos[i].cantidad);
				fprintf(archivo,"%d euros\n", productos[i].precio);
				fprintf(archivo,"%d dias\n", productos[i].caducidad);		
				}
					fclose(archivo);
					printf("Los cambios se han guardado correctamente\n");
					printf("\nAdios y hasta pronto!\a\a\a\n\n");
				system("pause");
				break;
			default:
				return 1;
				system("cls");
				break;
		}
	}while(opcion != 3);

return 0;
}
void inicio(void){
	system("color 1F");
	printf("\n\n\n\n\n\n\n\n\n\n\t\tHola! Soy SMARTFRIDGE S1. En que puedo ayudarte?\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	system("cls");
}

void titulo(void){
	int i;
	system("color 1F");
	printf("\t\t\t======SMARTFRIDGE S1======\n");
	printf("\t\t\t  By SamuSung Electronics\n");
	i = 0;
	putchar('\n');
	for (; i < 100; i++) {
		putchar('_');
	}
}
