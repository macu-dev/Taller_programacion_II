#include <stdio.h>
#include <string.h>

//tydef => definir tipo
typedef int numeroEntero;

//definicion
typedef struct NombreEstructura{
  numeroEntero numero;
  char letra;
  char texto[100];
} miEstructura;

  typedef struct{
      int hilos;
      char color[20];
  }Tela;
  // otra estructura

  typedef struct {
    char patas;
    Tela tela;
  }Silla;
  
  
int main(){
  struct NombreEstructura a;

  a.numero = 10;
  a.letra = 'a';
  strcpy(a.texto, "hola como te va");

  printf("numero => %d, letra => %c, texto => %s \n", a.numero, a.letra, a.texto);
  printf("tamaño: %d", sizeof(int));
  printf("tamaño: %d", sizeof(char));
  printf("tamaño: %d", sizeof(miEstructura));

  //nombre de la estructura
  Silla silla1;

  silla1.patas = 3;
  silla1.tela.hilos = 40;
  strcpy(silla1.tela.color, "azul");

  printf("la silla s1 tiene %d patas y tiene %d hilos", silla1.patas, silla1.tela.hilos);






  return 0;
}
