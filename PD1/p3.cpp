#include <iostream>

using namespace std;

long potencia(int x, int n);

int main(void) {
  int b;
  int e;
  /* Elevar a cualquier potencia */
  cout << "Introduce base: ";
  cin >> b;
  printf("Introduce exponente: ");
  cin >> e;
  cout << b << " elevado a " << e << " es " << potencia(b, e) << endl;
  return 0;
}

long potencia(int x, int n) {
  long ret = x;
  int i;
  for (i = 1; i < n; i++)
    ret = ret * x;
  return ret;
}
int potencia (int base , int exponente){ .
    if(exponente==1){ 
        return base; 
    } else{ 
        base = base * potencia(base,exponente-1); 
    }
} 
