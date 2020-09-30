// Escribir una función que reciba como argumento un entero y retorne una cadena de
// caracteres en su representación decimal. Ídem para: representación octal,
// hexadecimal y binaria (genere una función por cada una de estas opciones).

#include <stdio.h>
#include <stdlib.h>


//prototipo
void longitud(int num, int b, int *len);
char * convertirNumero(int num, int b, int leng);


int main(void){
  int numero;
  int base;
  int length = 0;
  char *cadena;
  printf("Ingrese el numero para poder realizar la conversión\n");
  scanf("%d", &numero);
  printf("Ingrese la base para poder realizar la conversión\n");
  scanf("%d", &base);

  longitud(numero, base, &length);
  cadena = convertirNumero(numero, base, length);
  printf("%s\n", cadena);
  free(cadena);
  return 0; 
}


void longitud(int num, int b, int *leng){
  int resultado = num;
  *leng = 0;
  while(resultado != 0){
    resultado /= b;
    *leng +=1;
  }
}


char * convertirNumero(int num, int b, int leng){
  char dic[] = {'0','1', '2', '3', '4','5','6','7','8','9','A', 'B', 'C', 'D','E','F'};
  char *salida = (char*) malloc(leng * sizeof(char));
  int modulo, resultado = num;
  int i;

  for (i = leng - 1; i >= 0; i--){
    modulo = resultado% b;
    resultado /= b; 
    salida[i] = dic[modulo];
  }
  return salida;
}

