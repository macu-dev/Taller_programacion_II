//  Crear un programa que lea un número determinado (<100) de reales introducidos por
// teclado, los almacene en un vector para luego mostrarlos en orden inverso. Para
// recorrer el array deberá usar aritmética de punteros en lugar de índices del array.

#include <stdio.h>

void ingreseNumbGuardarArray( float array[]);
int getNumber();

int main(void) {
  float arrNumb[100];
  ingreseNumbGuardarArray(arrNumb);
  
  return 0;
}


void ingreseNumbGuardarArray( float array[]){
  
  for(int index=0; index<10; index++){
    array[index] = getNumber();
  }
}

int getNumber(){
  float item;
  do{
    printf("ingrese un numero por favor (limite < 100)\n");
    scanf("%d", &item);

    if(item < 100){
        return item;
    }else{
      printf("ingrese un numero correcto\n");
    }
  } while (1);
}