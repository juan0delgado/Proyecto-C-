#ifndef LEER_CSV_H
#define LEER_CSV_H

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// Función para contar el número de líneas en un archivo CSV
int contarLineasCSV(const char* nombreArchivo) {
    ifstream archivo(nombreArchivo);
    int n = 0;
    char c;

    // Leer el archivo carácter por carácter
    while (archivo.get(c)) {
        if (c == '\n') {
            n++;
        }
    }

    // Añadir una línea si el archivo no termina con un salto de línea
    archivo.clear();
    archivo.seekg(0, ios::end);
    if (archivo.tellg() > 0) { // Si el archivo no está vacío
        archivo.seekg(-1, ios::end);
        if (archivo.get() != '\n') {
            n++;
        }
    }

    return n;
}

struct todo {
string id;
string l1;
string l2;
string l3;
float habitaciones;
float superficie;
float precio;

};

int a = contarLineasCSV("DS_Proyecto_01_Datos_Properati.csv");
 todo *arr = new todo[a];


todo funcionllenar(todo *arr, int a)
{


  ifstream archivo("DS_Proyecto_01_Datos_Properati.csv");

  if (!archivo.is_open()) {
    cout << "Error al abrir el archivo." << endl;
  }

  string linea;
  int i = 0;

  // Saltar la primera línea que contiene los encabezados
  getline(archivo, linea);

  // Leer el archivo línea por línea
  while (getline(archivo, linea) && i < a) {
    stringstream ss(linea);
    string valor;

    // Leer y asignar cada valor separado por comas
    getline(ss, arr[i].id, ',');                 // Leer id (property_type)
    getline(ss, arr[i].l1, ',');                 // Leer l1
    getline(ss, arr[i].l2, ',');                 // Leer l2
    getline(ss, arr[i].l3, ',');                 // Leer l3
   

    // Convertir los valores numéricos
    //___________________________________________-----
getline(ss, valor, ',');                     // Leer rooms (habitaciones)
 arr[i].habitaciones = stof(valor);

getline(ss, valor, ',');                     // Leer surface_total (superficie)
 arr[i].superficie = stof(valor);

getline(ss, valor, ',');                     // Leer price (precio)
arr[i].precio = stof(valor);
//-----------------------------------------------------------------------------------------------------------------------------------------------
    i++;
  }

  archivo.close();
  return *arr;


}




#endif