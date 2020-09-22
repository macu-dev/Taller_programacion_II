#include <stdio.h>
#include <string.h>

typedef struct {
  char nombre[30];
  int edad;
}Persona;

typedef struct {
  char nombre[20];
  Persona profesor;
  Persona alumnos[40];
} Clase;

typedef Clase Clases;

Clase crearClase(
 char NombreDeLaClase[], Persona profesor, Persona alumnos[]){
  Clase a;
  
  strcpy(a.nombre, NombreDeLaClase);
  strcpy(a.profesor.nombre, profesor.nombre);
  a.profesor.edad = profesor.edad;
  
  for (int i=0; i<40; i++){
    strcpy(a.alumnos[i].nombre, alumnos[i].nombre);
    a.alumnos[i].edad = alumnos[i].edad;
  }
  
  return a;
}


int main()
{
  Clases ClasesDeAus[2];
  
  strcpy(ClasesDeAus[0].nombre, "programación");
  
  strcpy(ClasesDeAus[0].profesor.nombre, "facu");
  ClasesDeAus[0].profesor.edad = 27;
  
  strcpy(ClasesDeAus[0].alumnos[0].nombre, "macu");
  ClasesDeAus[0].alumnos[0].edad = 25;


  ClasesDeAus[1] = crearClase(
    "Logica", ClasesDeAus[0].profesor,
    ClasesDeAus[0].alumnos
  );

  
}
