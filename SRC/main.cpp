
#include "leer_csv.h"
#include "regrecion_lineal.h"
#include "validacion.h"

#include <iostream>
#include <fstream>
#include <cmath>

#include <vector>
#include <iomanip>

using namespace std;



int main()
{

  // Especifica el nombre del archivo CSV
  const char* nombreArchivo = "DS_Proyecto_01_Datos_Properati.csv";

  // Llama a la función para contar las líneas y almacena el resultado en n
  int n = contarLineasCSV(nombreArchivo);

  // Imprime el número de líneas
  cout << "El archivo tiene " << n << " líneas." << endl;

  


  // Llamar a la función para llenar el arreglo
  *arr = funcionllenar(arr, n);

    // Verificar que el arreglo haya sido llenado correctamente
  cout << "DESEA VER SI EL ARREGLO SE LLENO CORRECTAMENTE ???????"<<endl;
  cout << "si o no"<<endl;
  string respuesta1, respuesta2;
cin>> respuesta1;
  if (respuesta1== "si" || respuesta1 == "SI" || respuesta1 == "Si")
  {
    if (arr != nullptr) {
        for (int i = 0; i < 1; i++) {
            cout << "Propiedad " << i + 1 << ": " << arr[i].id << ", " 
                 << arr[i].l1 << ", " << arr[i].l2 << ", " << arr[i].l3 << ", "
                 << arr[i].habitaciones << " habitaciones, " 
                 << arr[i].superficie << " m2, $" 
                 << arr[i].precio << endl;
        }
    }

  
  } 
  cout << " "<<endl;

// --------------------------------------
  //------------------------------------------------
  //------------------------------------------------------
  // parte regrecion lineal:
regresion(arr, n);

  //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  // Preguntar al usuario si desea dividir el dataset para probar el modelo
  cout << "¿Deseas dividir el dataset para probar el modelo? (si/no): ";
  string respuesta3;
  cin >> respuesta3;

  if (respuesta3 == "si" || respuesta3 == "SI" || respuesta3 == "Si") {
      todo* entrenamiento = nullptr;
      todo* prueba = nullptr;
      int tam_entrenamiento = 0;
      int tam_prueba = 0;

      // Dividir el dataset en 80% entrenamiento y 20% prueba
      dividirDataset(arr, n, 0.8, entrenamiento, prueba, tam_entrenamiento, tam_prueba);

      // Realizar la regresión con los datos de entrenamiento
    cout << "-------------------"<<endl;
    cout << " REGRECION LINEAL (DATOS DE ENTRENAMIENTO )"<<endl;
    cout << "-------------------"<<endl;
      regresion(entrenamiento, tam_entrenamiento);

      // Probar el modelo con los datos de prueba
    cout << "-------------------"<<endl;
    cout << " REGRECION LINEAL (DATOS DE PRUEBA )"<<endl;
    cout << "-------------------"<<endl;
      probarModelo(prueba, tam_prueba);

      // Liberar memoria
      delete[] entrenamiento;
      delete[] prueba;
  }
  //-------------------------------------------------------
  
   delete[] arr; // Liberar memoria al final
}
