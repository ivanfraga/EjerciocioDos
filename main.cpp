#include <iostream>
#include <cmath>
#define PI 3.141592
using namespace std;
int main() {
  //repositorio subido desde repl.it 
  double valor1, valor2, resultado;
  int opcion;
  do{

  cout << "Calculadora.\n\n";
  cout << "1 Sumar dos números.\n";
  cout << "2 Restar dos números.\n";
  cout << "3 Multiplicar dos números.\n";
  cout << "4 Dividir dos números.\n";
  cout << "5 Obtener el seno de un ángulo.\n";
  cout << "6 Obtener el coseno de un ángulo.\n";
  cout << "7 Obtener la tangente de un ángulo.\n";
  cout << "8 Salir.\n\n";
  cout << "Seleccione una opcion (1-8)\n";
  cin >> opcion;
  if ((opcion<1)||(opcion > 8)){
    cout << "Opcion no valida";
  }
  }
  while ((opcion<1)||(opcion > 8));
  switch (opcion){
    case 1: cout << "Digite dos valores: ";
            cin >> valor1 >> valor2;
            resultado = valor1 + valor2; break;
    case 2: cout << "Digite dos valores: ";
            cin >> valor1 >> valor2;
            resultado = valor1 - valor2; break;
    case 3: cout << "Digite dos valores: ";
            cin >> valor1 >> valor2;
            resultado = valor1 * valor2; break;
    case 4: cout << "Digite dos valores: ";
            cin >> valor1 >> valor2;
             if (valor2 != 0)
             {
              resultado = valor1 / valor2; 
             }
            else 
              cout << "Valor 2 diferente de 0\n"; break; 
    case 5: cout << "Digite el angulo: ";
            cin >> valor1;
            resultado = sin(valor1*PI/180); break;
    case 6: cout << "Digite el angulo: ";
            cin >> valor1;
            resultado = cos(valor1*PI/180); break;
    case 7: cout << "Digite el angulo: ";
            cin >> valor1;
            resultado = tan(valor1*PI/180); break;
    case 8: cout << "Salir";


  }
  cout << "El resultado de la operacion es: " << resultado;

return 0;
}