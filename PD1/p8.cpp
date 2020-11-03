#include <stdio.h>

float calcularMax(float x, float y);
float calcularNota(float p1, float p2, float e);
int main(void) {
  char c;
  do {
    float parcial1, parcial2, examen, final;
    /* Leer valores */
    printf("Introduzca nota parcial 1 [0, 20]: ");
    scanf("%f", & parcial1);
    printf("Introduzca nota parcial 2 [0, 20]: ");
    scanf("%f", & parcial2);
    printf("Introduzca nota examen final [0, 20]: ");
    scanf("%f", & examen);
    /* Calcular nota final*/
    final = calcularNota(parcial1, parcial2, examen);
    /* Imprimir resultados */
    printf("Nota final: %f", final);
    /* Continuar? */
    printf("\n\nSalir? (s/n): ");
    /* Para evitar conflictos con el salto de linea (\n) y
    evitar un bucle infinito se recurre al siguiente "truco" */
    do {
      scanf("%c", & c);
    } while (c == '\n');
    printf("\n");
  } while (c != 's');
  return 0;
}
float calcularNota(float p1, float p2, float notaExamen) {
  float notaEC, final;
  notaEC = p1 * 0.2 + p2 * 0.2 + notaExamen * 0.6;
  final = calcularMax(notaEC, notaExamen);
  return final;
}
float calcularMax(float x, float y) {
  /* Funcion calcularMax: Devuelve el mayor de los valores x, y
  pasados como parámetro */
  float max;
  if (x >= y)
    max = x;
  else
    max = y;
  return max;
}
