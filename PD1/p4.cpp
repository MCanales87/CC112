#include <iostream>

using namespace std;
void swap(int * x, int * y);
int main(void) {
  int a, b;
  printf("Introduzca a: ");
  scanf("%i", & a);
  printf("Introduzca b: ");
  scanf("%i", & b);
  printf("\nAntes de intercambio\n");
  printf("a: %i\n", a);
  printf("b: %i", b);
  swap( & a, & b);
  printf("\nDespues de intercambio\n");
  printf("a: %i\n", a);
  printf("b: %i\n", b);
  return 0;
}
void swap(int * x, int * y) {
  /* Función que intercambia el valor de dos variables. Para
  conseguir que los cambios sean visibles en el programa principal
  los parámetros se deben pasar por referencia*/
  int temp;
  temp = * x;
  * x = * y;
  * y = temp;
}
