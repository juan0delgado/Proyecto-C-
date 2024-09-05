#ifndef imprimir_h
#define imprimir_h

#include "regrecion_lineal.h"
#include "leer_csv.h"
#include <iostream>
#include <cmath>
#include <iomanip>  // Para formatear la salida

using namespace std;

void imprimirTablaRegresion(int epocas, float m, float b, float mse) {
  cout << "Resultados de la regresión lineal:" << endl;
  cout << "_____________________________________" << endl;
  cout << "Epocas         | " << epocas << endl;
  cout << "_____________________________________" << endl;
  cout << "Ecuación de la recta: " << endl;
  cout << "y = " << fixed << setprecision(4) << m << " * habitaciones + " << b << endl;
  cout << "_____________________________________" << endl;
  cout << "Error cuadrático medio (MSE): " << mse << endl;
  cout << "_____________________________________" << endl << endl;
}

void imprimirTablaPredicciones(int num_predicciones, float* habitaciones, float* precios) {
  cout << "Predicciones de precio:" << endl;
  cout << "_____________________________________________" << endl;
  cout << "Habitaciones   | Precio estimado ($)" << endl;
  cout << "_____________________________________________" << endl;
  for (int i = 0; i < num_predicciones; ++i) {
      cout << fixed << setprecision(2) << habitaciones[i] << "           | $ " << precios[i] << endl;
  }
  cout << "_____________________________________________" << endl << endl;
}

#endif // imprimir.h