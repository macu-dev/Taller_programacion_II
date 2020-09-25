// Escribir una función que tome como argumento un entero positivo entre 1 y 7 y retorne
// un puntero a cadena con el nombre del día de la semana correspondiente al
// argumento. Probar dicha función.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ingreseNum(int *numero);
char *fdia(int numero);

int main(void){
  char *puntero;
  int dia;

  ingreseNum(&dia);
  puntero = fdia(dia);
  printf("%s\n", puntero);
  
  free(puntero);
  return 0;
}

char *fdia(int numero){
  char dias[7][15] = {
    "lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo"
  };
  char* d = (char *) malloc(sizeof(char)*15);
  strcpy(d, dias[numero - 1]);
  return d;
}


char *ingreseNum(int *numero){
  do{
    printf("Ingrese un numero entre 1 - 7\n");
    scanf("%d", numero);

    if(*numero <= 7 && *numero >=1 ){
        break;
    }else{
      printf("ingrese un numero correcto\n");
    }
  } while (1);

}