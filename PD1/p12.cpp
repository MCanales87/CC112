#include<iostream>

using namespace std;
void binario(int n) {
  if (n > 1) binario(n / 2);
  cout << n % 2;
}
int main(void) {
  int nro;
  cout << "\n\t\t[     RECURSIVIDAD     ]\n";
  cout << "\t\t--------\n\n";
  cout << " EJERCICIO 2: Convertir a binario un numero decimal " << endl << endl;
  do {
    cout << " INGRESE NUMERO: ";
    cin >> nro;
    if (nro < 0) cout << "\nINGRESE UN NUMERO ENTERO Y POSITIVO… \n";
  } while (nro < 0);
  cout << endl;
  cout << "\n Numero:" << nro << endl;
  cout << "\n Binario:";
  binario(nro);
  return 0;
}
