#include <stdio.h>

  int main(){

    int valor,a,b,c,d,e,f,g,h;

      int matriz[3][3];


    for(int i=0; i<3; i++ ){
		for(int j=0; j<3; j++){
			printf("Introduzca el valor en la posicion (%d,%d)---> ",i+1,j+1);
			scanf("%d",&valor);
			matriz[i][j]=valor;
		}
	}

//Todo el proceso se lleva a cabo mediante condicionales if, a su vez, con cada fila y columna sumada, el tamanio de la condicional aumenta

  a=(matriz[0][0]+matriz[0][1]+matriz[0][2]);
    b=(matriz[1][0]+matriz[1][1]+matriz[1][2]);
     if(a==b){
       c=(matriz[2][0]+matriz[2][1]+matriz[2][2]);
       if(a==b==c){
         d=(matriz[0][0]+matriz[1][0]+matriz[2][0]);
          if(a==b==c==d){
            e=(matriz[0][1]+matriz[1][1]+matriz[2][1]);
            if(a==b==c==d==e){
              f=(matriz[0][2]+matriz[1][2]+matriz[2][2]);
               if(a==b==c==d==e==f){
                 g=(matriz[0][0]+matriz[1][1]+matriz[2][2]);
                  if(a==b==c==d==e==f==g){
                     h=(matriz[2][0]+matriz[1][1]+matriz[1][2]);
                     if(a==b==c==d==e==f==g==h){
                       printf("\n\n\t");
                       printf("Esta es una matriz amiga");
                       printf("\n\n");
                       return 0;
                     }
                  }
               }else{
                 printf("\n\n\t");
                 printf("Esta matriz no es amiga");
                 printf("\n\n");
                 return 0;
               }
            }else{
              printf("\n\n\t");
              printf("Esta matriz no es amiga");
              printf("\n\n");
              return 0;
            }
          }else{
            printf("\n\n\t");
            printf("Esta matriz no es amiga");
            printf("\n\n");
            return 0;
          }
       }else{
         printf("\n\n\t");
         printf("Esta matriz no es amiga");
         printf("\n\n");
         return 0;
       }
     }else{
       printf("\n\n\t");
       printf("Esta matriz no es amiga");
       printf("\n\n");
       return 0;
     }
  }
