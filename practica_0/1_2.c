//Que rellene un array con los números pares y otro con los impares comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente y descendente

#include <stdio.h>
#define DIMENSION 100

//prototipo
int par (int arreglo[]);
int impar(int arreglo[]);
void imprimirArr(int arreglo[], int length);


int main (void){
  int arrPares[DIMENSION];
  int arrImpares[DIMENSION];
  int length;
  length = par(arrPares);
  imprimirArr(arrPares, length);
  length = impar(arrImpares);
  imprimirArr(arrImpares, length);

  return 0;
}

int par (int arreglo[]){
  int contador = 0;
  for (int i = 0; i <= DIMENSION; i++){
    if(i%2 == 0){
      arreglo[contador] = i;
      contador++;
    }
  }
  return contador;
}

int impar (int arreglo[]){
  int contador = 0;
  for (int i = 0; i <= DIMENSION; i++){
    if(i%2 == 1){
      arreglo[contador] = i;
      contador++;
    }
  }
  return contador;
}

void imprimirArr(int arreglo[], int length){
  for (int i = 0; i < length; i++){
    printf("%d ", arreglo[i]);
  }
  printf("\n\n");
}
