#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef enum { MAYUSCULAS, MINUSCULAS } may_min;

int strLargo(const char *origen); //Cantidad de caracteres
int strVacio(const char *origen); //retorna 1 si tiene al menos un caracter, 0 en otro caso
void strCopia(char *destino, const char *origen); // Copiador
// /*prototipo modificado para permitir argumentos de tipo string literales, en casi todos los
// compiladores un literal string es considerado una constante, o sea la función no podría
// modificarlos pero, en algunos compiladores tales como GCC es posible modificarlos (según
// K&R el comportamiento es indefinido)*/
char* reverse(char *string);//retorna una cadena que es string invertida
void strIzq(char *destino, const char *origen); // Saca blancos Izq.
void strDer(char *destino, const char *origen); // Saca blancos Der.
void strCopialen(char *destino, const char *origen, int length);
void strAmbos(char *destino, const char *origen); // Saca blancos Izq. y Der.
void strMayMin(char *destino, const char *origen, may_min m); // Convierte May. Min.


int main(){
  char *text1 =" Sera Cierto ?? ";
  int largo = strLargo(text1)+1;
  char *result = (char *)malloc (largo);
  char* reves;
  if(result == NULL)
    return -1;//sino pudo reservar memoria para result
  printf("La cadena: ");
  puts(text1);
  printf("Se encuentra: %s\n",(strVacio(text1) ? "No vacia" : "Vacia"));
  printf("Largo : %d\n", strLargo(text1));
  strCopia(result,text1);
  printf("Copia : [%s]\n", result);
  strIzq(result,text1);
  printf("Sin blancos a la Izq: [%s]\n", result);
  puts(result);
  strDer(result,text1);
  printf("Der : [%s]\n", result);
  strAmbos(result,text1);
  printf("Ambos: [%s], sin blancos al principio ni al final.\n", result);
  strMayMin(result,text1, MAYUSCULAS);
  printf("Mayusculas : [%s]\n", result);
  strMayMin(result,text1, MINUSCULAS);
  printf("Minusculas : [%s]\n", result);
  reves = reverse (text1);
  printf("La cadena: %s invertida queda: %s\n",text1, reves);
  return 0;
}

// funciones

int strLargo(const char *origen){
  int count = 0;

  while(origen[count] != 0){
    count ++;
  }

  return count;
}

int strVacio(const char *origen){

  if(origen != 0){
    return 1;
  }
  return 0;
}

void strCopia(char *destino, const char *origen){
  int i;
  for (i = 0; origen[i] != 0; i++){
    destino[i] = origen[i];
  }
   destino[i]= 0;
}

void strCopialen(char *destino, const char *origen, int length){
  int i;
  for (i = 0; i < length; i++){
    destino[i] = origen[i];
  }

  destino[i] = '\0';

}

char* reverse(char *string){
  int longitud = strLargo(string);
  char *ret = (char *)malloc (longitud);

  for (int i = 0; i < longitud; i++){
     ret[i] = string[longitud-i-1];
  }
   return ret;
  
}

void strIzq(char *destino, const char *origen){
  int indice = 0;
  while(origen[indice] == 32){
    indice++;
  }

  strCopia(destino, &origen[indice]);

}

void strDer(char *destino, const char *origen){
  int i = 0;
  int espacio = 0;
  int lenght;

  while(origen[i] != 0){
    if(origen[i] == 32){
      espacio++;
    }else{
      espacio = 0;
    }
    i++;
  }
  
  lenght = strLargo(origen);

  lenght -= espacio ;

  strCopialen(destino, origen, lenght);

}

void strAmbos(char *destino, const char *origen){
  strDer(destino,origen);
  strIzq(destino, destino);
}

void strMayMin(char *destino, const char *origen, may_min m){
  int indice;
  if(m){
    for (indice = 0; origen[indice] != '\0'; ++indice){
      destino[indice] = tolower(origen[indice]);
    }
	}else{
    for (indice = 0; origen[indice] != '\0'; ++indice){
		  destino[indice] = toupper(origen[indice]);
    }
  }

  destino[indice]= 0;
}
