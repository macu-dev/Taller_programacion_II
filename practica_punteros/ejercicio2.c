#include <stdio.h>

int main(void){
  int i=5, j[]={1,2,3,4,5,6,7,8,9,10};
  char x = 'a', pal [] ="texto en c";
  int *pi;
  pi = &i;
  char *pc;

  pc = &x;

  // 1.mostrar la dirección de i y su valor
  printf("\nla direccion de i es: %p y su valor es %d\n", &i, i);

  //2. mostrar los mismos valores a traves del puntero pi
  printf("\nla direccion de i con el puntero pi: %p y su valor es %d\n", pi, *pi);

  //3. Recorrer el vector “j” mostrando para cada elemento, su dirección y su valor.
  for (int counter = 0; counter < (sizeof(j)/sizeof(int)); counter++){
    printf("elemento del array j en la posicion %d , con direccion %p y con el valor %d\n", counter, &j[counter], j[counter]);
  }

  // 4.- Recorra el vector accediendo a través del puntero “pi” y usando álgebra de punteros.
  
  for (int counter = 0; counter < (sizeof(j)/sizeof(int)); counter++){
    printf("%d\t", *((pi=j) + counter));
  }

  printf("\n");

  // 5- Repita lo mismo con las variables char, el arreglo y el puntero.
  printf("\nla direccion de x es: %p y su valor es %c\n", &x, x);
  printf("\nla direccion de pc es: %p y su valor es %c\n", &pc, *pc);
  for (int count = 0; count < (sizeof(pal)/sizeof(char)); count++){
    printf("\nelemento del array pal en la posicion %d , con direccion %p y con el valor %c\n", count, &pal[count], pal[count]);
  }

  //6. generar salida

  printf("\nPor variable: 'i' Valor: %d Dirección: %p\n", i, &i);
  printf("Por puntero: 'pi' Valor: %d Dirección: %p\n", *pi, pi);
  printf("Por variable:'j[0]' Valor: %d Dirección: %p\n", *j, &j[0]);
  printf("Por puntero: '(pi=j)+0' Valor: %d Dirección: %p\n", *((pi=j)+0), (pi=j)+0);
  printf("Por variable: 'j[1]' Valor: %d Dirección: %p\n", j[1], &j[1]);
  printf("Por puntero: '(pi=j)+1' Valor: %d Dirección: %p\n", *((pi=j)+1), (pi=j)+1);


  printf("\nPor variable: 'x' Valor: %c Dirección: %p\n", x, &x);
  printf("Por puntero: 'pc' Valor: %c Dirección: %p\n", *pc, pc);
  printf("Por variable:'pal[0]' Valor: %c Dirección: %p\n", *pal, pal);
  printf("Por puntero: '(pc=pal)+0' Valor: %c Dirección: %p\n", *((pc=pal)+0), (pc=pal)+0);
  printf("Por variable: 'pal[1]' Valor: %c Dirección: %p\n", pal[1], &pal[1]);
  printf("Por puntero: '(pc=pal)+1' Valor: %c Dirección: %p\n", *((pc=pal)+1), (pc=pal)+1);

  printf("Dirección de *pi: %p  de *pc: %p\n", &pi,  &pc);

  return 0;

}