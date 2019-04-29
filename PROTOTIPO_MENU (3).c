#include<stdio.h>
#include<stdlib.h>

struct producto{
char producto_ingresado[100];
char producto_retirado[100];
int cantidad_actual;
int cantidad_ingresada;
int tiempo_de_caducidad;
};

int main () {
	struct producto producto[100];
	int n=0; //numero de productos
	int i, contador;	
	int opcion,opcion2;
	FILE *fichero;
	
// PRIMERO: Leer el fichero
	fichero = fopen("producto.txt", "r");
	while (fscanf(fichero, "%s %i", producto[n].producto_ingresado, &producto[n].producto_retirado, &producto[n].cantidad_actual, &producto[n].cantidad_ingresada, &producto[n].tiempo_de_caducidad) != EOF){
		n++;
	}
	fclose(fichero);
	
	do 	{
		fflush(stdin);
		printf("Indique el producto que desee gestionar:\n\n");
		printf("1)	CARNE\n");
		printf("2)	PESCADO\n");	
		printf("3)	FRUTA\n");	
		printf("5)	LACTEOS\n");
		printf("6)	OTRO\n");
		printf("7)	Salir\n");
		printf("Marque aqui la opcion:\t");
		scanf("%c",&opcion);

		if (opcion=='1'){
		
			printf("HA ESCOGIDO LA OPCION: CARNE\n\n\n");
			printf("Seleccione que quiere hacer con su producto:\n\n");
			printf("1)	INGRESAR CANTIDAD\n");	//Debería ser el eje central del programa
			printf("2)	QUITAR CANTIDAD\n");	//Debería mostrarse la lista de productos añadidos, seleccionar uno o varios de ellos y quitarlo de la lista.
			printf("3)	VER CONTENIDO ACTUAL\n");	//Debería sólo mostrar la lista de productos en la nevera después de haberla modificado (ingresar o restar).
			printf("4)	CONSULTAR FECHAS DE CADUCIDAD\n");	//Debería mostrar la lista de productos tras las modificaciones y mostrar los contadores de cada uno.
			printf("5)	SALIR\n\n");
			printf("Marque aqui su opcion:\t");
			scanf("%i",&opcion2);
			if (opcion=='1'){
				fichero=fopen("productos.txt","w");
				printf("nombre del producto:\t");
				scanf("%s", producto[n].producto_ingresado);
				fflush(stdin);
				printf("Introduzca la cantidad que va a introducir:\t");
				scanf("%i",&producto[n].cantidad_ingresada);
				fflush(stdin);
				n++;
				}
				for (i=0; i<n; i++){
				fprintf(fichero,"%s\t", producto[i].producto_ingresado);
				fprintf(fichero,"%d\t", producto[i].cantidad_ingresada);	
				}
				fclose(fichero);
				fflush(stdin);	
				}
			if (opcion=='3'){
				fichero=fopen("productos.txt","r");
				printf("Ver contenido actual en la seccion de carnes\n");
			}
			while(fscanf(fichero, "%s %i", producto[n].producto_ingresado,&producto[n].cantidad_actual));
			fclose(fichero);
			printf("Contador: %d\n",n);
			}
	while(opcion!='7'); /*por ejemplo*/
	}
