//Any Yanel Morales Guevara
#include <iostream>
using namespace std;
int main()
{ int N=0; cout<<"Dame un numero entero" <<endl; cin>> N;
  int M=1; int F=1;
  while (M!=N){ M=M+1; F=F*M;}
  cout<<"Valor final" <<F<< endl; return 0;
}

// Este programa al correr pide un numero entero, al cumplir la orden arroja el factorial de dicho número
// Una vez que se llama el iostream, se declaran las variables, y se asigna la orden de pedir un número entero.
//Una vez que se brinda el N, F y M empiezan en 1, se multiplica el valor de F*M y después se compara M con N, si son iguales se imprime el valor de F, si no, se le agrega 1 a la M, el cual se multiplica por el antiguo valor de F, de nuevo se comparan M y N, si son iguales imprime F, si no, se repite el procedimiento, así se puede multiplicar el valor dado por el número anterior a ese, el anterior y el anterior, dando como resultado el factorial del N dado.
