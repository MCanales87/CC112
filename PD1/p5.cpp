#include <iostream>
using namespace std;

int mostrarMenu(void);
float CalcularAreaTriangulo(void);
float CalcularAreaTrapecio(void);
float CalcularAreaRectangulo(void);

int main(void) {
  int opcion; //Para almacenar la opción elegida
  float area; //Almacena el área calculadoa

  opcion = mostrarMenu();

  switch (opcion) {
  case 1:
    area = CalcularAreaTriangulo();
    cout << "El area del triangulo es " << area << endl;
    break;
  case 2:
    area = CalcularAreaTrapecio();
    cout << "El area del trapecio es " << area << endl;
    break;
  case 3:
    area = CalcularAreaRectangulo();
    cout << "El area del cuadrado es " << area << endl;
    break;

  default:
    cout << "Fin del programa.\n";
  }
  return 0;
}
int mostrarMenu(void) {
  int opcion;

  cout << "CALCULO DE AREAS \n";
  cout << "============================ \n\n\n";
  cout << "1 - Calcular el área de un triangulo \n";
  cout << "2 - Calcular el área de un trapecio \n";
  cout << "3 - Calcular el área de un rectangulo \n\n\n";
  cout << "Opcion: ";
  cin >> opcion;
  return opcion;
}
float CalcularAreaTriangulo(void) {
  /* Función que calcula y devuelve el área de un triángulo.*/
  /* base y altura deben ser valores enteros */
  float area;
  int base, altura;

  printf("AREA DEL TRIÁNGULO \n");
  printf("Base: ");
  scanf("%d", & base);
  printf("Altura: ");
  scanf("%d", & altura);
  //Para conseguir un valor real se hace una conversión explícita
  area = (float) base * altura / 2;
  return (area);
}
float CalcularAreaTrapecio(void) {
  /* Función que calcula y devuelve el área de un trapecio */
  /* base_mayor, base_menor y altura deben ser valores enteros */
  float area;
  int base_mayor, base_menor, altura;
  printf("AREA DEL TRAPECIO \n");
  printf("Base mayor: ");
  scanf("%d", & base_mayor);
  printf("Base menor: ");
  scanf("%d", & base_menor);
  printf("Altura del trapecio: ");
  scanf("%d", & altura);
  //Para conseguir un valor real se utiliza 2.0
  area = ((base_mayor + base_menor) / 2.0) * altura;
  return (area);
}
float CalcularAreaRectangulo(void) {
  /* Función que calcula y devuelve el área de un trapecio */
  /* base y altura deben ser valores enteros */
  float area;
  int base, altura;
  printf("AREA DE UN RECTANGULO \n");
  printf("Base: ");
  scanf("%d", & base);
  printf("Altura: ");
  scanf("%d", & altura);
  //En ese caso y dado que base y altura son reales el resultado
  //siempre será real
  area = (float) base * altura;
  return (area);
}
