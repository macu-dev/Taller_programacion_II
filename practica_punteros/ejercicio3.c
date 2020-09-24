//  Crear un programa que lea un número determinado (<100) de reales introducidos por
// teclado, los almacene en un vector para luego mostrarlos en orden inverso. Para
// recorrer el array deberá usar aritmética de punteros en lugar de índices del array.

#include <stdio.h>
#define LENGTH 5

void ingreseNumbGuardarArray( float array[]);
float getNumber();
void imprimirArrayInver(float array[]);

int main(void) {
  float arrNumb[5];
  ingreseNumbGuardarArray(arrNumb);
  printf("\n");
  printf("imprimiendo el arreglo de forma invertida");
  imprimirArrayInver(arrNumb);
  
  return 0;
}


void ingreseNumbGuardarArray( float array[]){
  
  for(int index = 0; index < LENGTH; index++){
    array[index] = getNumber();
  }
}

float getNumber(){
  float item;
  do{
    printf("ingrese un numero por favor (limite < 100)\n");
    scanf("%f", &item);

    if(item < 100.0 ){
        return item;
    }else{
      printf("ingrese un numero correcto\n");
    }
  } while (1);
}

void imprimirArrayInver(float array[]){
  float *puntero = array;
  for (int i = LENGTH - 1; i >= 0 ; i--){
    printf("\n%.1f\n",  *(puntero +  i));

  }
  
}