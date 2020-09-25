// Escribir una función void que tome como argumentos: la cantidad de kilos de
// determinado producto adquirido por un cliente y el precio por kilo del mismo (ambos
// números flotantes); la misma debe calcular el importe de la compra. El descuento
// efectuado a compras superiores a 100$ es del 10%, con lo cual la función deberá
// también calcular el nuevo monto, si es que corresponde el descuento. Usar
// argumentos pasados como punteros, donde corresponda.


#include <stdio.h>

void ingresarCantidadProduct (float *cantidad, float precio);
void calcularPrecio(float cantidad, float precio);

int main(void){

  float cantidadKilo = 0;
  float precioKilo = 10.0;

  ingresarCantidadProduct(&cantidadKilo, precioKilo);

  return 0;
}

void ingresarCantidadProduct (float *cantidad, float precio) {
  printf("ingrese la cantidad de kilos de naranjas que sea comprar\n");
  scanf("%f", cantidad);

  calcularPrecio(*cantidad, precio);
}

void calcularPrecio(float cantidad, float precio){
  float importe = 0;

  if((precio * cantidad) > 100.0){
    importe = precio * cantidad * 0.10;
    printf("se le aplico un descuento del 10%c al total  de la compra: %.2f\n", 37, importe);
  }else{
    importe = precio * cantidad;
    printf("el monto que usted pagar es: %.2f", importe);
  }

}