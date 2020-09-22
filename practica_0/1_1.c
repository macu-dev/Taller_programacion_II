// Que rellene un array con los 100 primeros números enteros y los muestre en pantalla en orden ascendente y luego descendente
 
#include<stdio.h>
#define DIMENSION 100

//prototipos
void cargarArr(int arreglo[]);
void imprimirAscend(int arreglo[]);
void imprimirDescend(int arreglo[]);


int main(void){
  int arr[DIMENSION];
  cargarArr(arr);
  printf("Arreglo de forma ascendente\n");
  imprimirAscend(arr);
  printf("Arreglo de forma descendente\n");
  imprimirDescend(arr);

  return 0;

}

void cargarArr(int arreglo[]){
  for (int i = 1; i <= DIMENSION; i++){
    arreglo[i] = i;
  }
}

void imprimirAscend(int arreglo[]){
  for (int i = 1; i <= DIMENSION; i++){
    printf("%d ", arreglo[i]);
  }
  printf("\n\n");
}

void imprimirDescend(int arreglo[]){
  for (int i = DIMENSION; i >= 1 ; i--){
    printf("%d ", arreglo[i]);
  }
  printf("\n");
}