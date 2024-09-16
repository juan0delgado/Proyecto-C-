# Proyecto-C++

## integrantes:
### Juan David Delgado 
### Nicolas Martinez
### Camila Ariza
## readme:
+ 1) Breve vistaso Codigo:
  2) Compilacion 

## explicacion:
+ el proyecto de c++ se tarataba de elaborar un codigo en c++, en conjunto de archivos.h, que lea un CSV con datos hacerca de venta de casas, departamentos, ect. con sus respectivos datos como pais, ciudad, barrio, #habitaciones, superficie total, precio metro cuadrado.
+ el objetovo era leer CSV, crear una regrecion lineal basica que predisca el precio de una vivienda a base del numero de habitaciones de esta.

  ## 1) codigo:

+ (se suguiere revisar el PDF adjuntado al repositorio, en donde se explica con mayor detalle el codigo)
+ Para empezar el archivop original tenia una cantidad de ( 414.120 ) datos, de los cuales se veian algo asi:
+ 
+ ![image](https://github.com/user-attachments/assets/d378da1a-91b8-42fa-b886-23935138d882)
+  .
+  y presentaban diversos problemas como: variables faltantes, variables numericas como caracteres, variables faltantes, ect. con lo cual se limpio la base de datos, dejando 123517, datos usables para regrecion lineal, dejando una tabla de la siguiente forma (PDF explicacion con codigos usados en R).
+ .
+ ![image](https://github.com/user-attachments/assets/4506e4d3-aa80-4bc9-9abf-f428b063a1c1)
+  .
+  con esta tabla, obtubimos datos como:
+  tipo de propiedad (ID), l1 (pais), l2 (ciudad), l3 (barrio), #habitaciones, metros cuadrados, precio.
+  .
+  ![image](https://github.com/user-attachments/assets/8bd0f422-0cb9-4e9b-9b0d-84fa62581d0e)
+  .
+  Definiendo leer_CSV.h en main.cpp, leemos el archivo tipo CSV, (PDF explicacion paso a paso)
+  Despues se utilisa regrecion_lineal.h la cual recive el arreglo dinamico creado en leer_CSV y predice el precio de una vivienda en base a el numero de havitaciones.
+  .

![image](https://github.com/user-attachments/assets/d49f360a-b81b-471e-b8dd-334e474121bc)



+ .

## 2) compilacion:
+ asi se ven los archivos del proyecto antes de compilar y ejecutarlo
+ 
![image](https://github.com/user-attachments/assets/8ca282e4-5d86-4edf-a6c6-006205bdaff9)


+ 
  ++ utilizamos el siguiente comando para compilar el archivo main.cpp
![image](https://github.com/user-attachments/assets/351d44da-fba0-4e20-8c1f-90e392705b5e)
+


+ archivos :
+ 
![image](https://github.com/user-attachments/assets/290e28d2-8fa2-4b41-82a4-2f05b5b72857)

+
![image](https://github.com/user-attachments/assets/4ebf609e-2a13-43a3-a44c-429c661cea5b)

+ compilacion por la shell:
+ 
![image](https://github.com/user-attachments/assets/87f99509-af38-424b-95eb-c7613af1db4d)

