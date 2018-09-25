#include <stdio.h>

 int main (){

  int tamanio, valor;

  printf("Usuario introduzca el tamaño de la matriz (Sera el tamaño de las filas y las columnas): ");
  scanf("%d", &tamanio);

  int matriz[tamanio][tamanio];


    for(int i=0; i<tamanio; i++ ){
		for(int j=0; j<tamanio; j++){
			printf("Introduzca el valor en la posicion (%d,%d)---> ",i+1,j+1);
			scanf("%d",&valor);
			matriz[i][j]=valor;
		}
	}

	 for(int i=0; i<tamanio; i++){
		 printf("\n");
		  for(int j=0; j<tamanio; j++){

			  printf("%d",matriz[i][j]);
			  printf("\t");

			  }
		  }

		}
