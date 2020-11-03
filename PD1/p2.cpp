#include <iostream>

using namespace std;

float max(float x, float y);

int main(void) {
  float a, b;
  cout << "Introduzca a: ";
  cin >> a;
  cout << "Introduzca b: ";
  cin >> b;
  cout << "Mayor: " << max(a, b) << endl;
  return 0;
}
float max(float x, float y) {
  float max;
  if (x >= y)
    max = x;
  else
    max = y;
  return max;
}
