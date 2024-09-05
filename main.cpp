
#include "leer_csv.h"
#include "regrecion_lineal.h"


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

  // Aquí puedes crear arreglos dinámicos utilizando n


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

  
   delete[] arr; // Liberar memoria al final
}