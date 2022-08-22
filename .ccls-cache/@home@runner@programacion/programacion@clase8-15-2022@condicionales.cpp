#include <iostream>

int main(int argc, char **argv) {
  int num = 0;

  // solicitar el numero
  std::cout << "Escriba un numero entero, por favor:\n";
  // leer el numero
  std::cin >> num;

  // verificar que el numero es par o no
  // imprimir
  // si el numero es par, imprimir "el numero es par"
  // si no, imprimir "el numero es impar"
  if (num % 2 == 0) {
    std::cout << "El numero es par \n";
  }
  if (num % 2 != 0) {
    std::cout << "El numero es impar \n";
  }

  // else {
  // cout << "El numero es impar" << endl;
  // }

  return 0;
}