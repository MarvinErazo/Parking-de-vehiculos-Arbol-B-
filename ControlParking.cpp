/*================SIMULADOR DE CONTROL DE PARKING=========================

Objetivo: Control del parking de un
edificio guiado por codigos, que determine
y ubique al usuario en una ubicacion vacia
y controle el tiempo de estancia;

ARBOL DE ORDEN

//---------------------------Membrete----------------------------------
Autor: Marvin Erazo
Fecha: 6/11/2019
Version: 1.0
----------------------------Avrebiaturas-------------------------------
 Nodo = N(nombre del nodo);                        Nnodo
 Apuntador = AP(nombre del apuntador);             *APapuntador
 Variable = V(nombre de la variable);              Vvariable_continuacion
 Funciones = F(nombreVariable);                    FuncionContinuacion(parametros);
 Tipo de dato de un nodo = T(nombre del nodo);     Tnodo
 Listas = L(nombre del nodo)s                      Lnodos
 Arbol = A(nombre)                                 Aarbol
 Auxiliares = Aux(Nombre de la variable);          AuxVariable
//---------------------------------------------------------------------
*/

//-----------------LIBRERIAS------------------
//estandar---------

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<list> // libreria para el manejo de listas

//personales-------


//---VARIABLES GLOBALES---

//---CONSTANTES---


using namespace std;


//------DECLARACION DEL ARBOL-----
typedef struct Nubicacion{
     bool estado; //determina si la ubicacion esta llena o vacia
     int tiempo; //cantidad de horas de estancia
     string matricula;
     int claveU; //clave de ubicacion del aparcamiento
     Nubicacion *APde; //apuntador a la derecha
     Nubicacion *APiz; //apuntador a la izquiera

}*Tubicacion;// dato de tipo Tubicacion

Tubicacion APcabecera;

//-----DECLAREACION DE FUNCIONES-----
     int menu(); //menu de opciones del usuario
     void pantalla(); //espera y borra pantalla

     int IngresarVehiculo();
     int EliminarVehiculo();
     int BuscarVehiculo();
     int ReporteVehiculo();

     int VerificarEstado();

//---FUNCION PRINCIPAL---

int main(){
     int opcion; // variable que guarda la opcion del menu;

     do{
          cout<<"SISTEMA DE CONTROL DE INGRESO Y SALIDA DE VEHICULO"<<endl;

          opcion=menu();
          switch(opcion){

          case 1:
               pantalla();
               IngresarVehiculo();
               break;

          case 2:
               pantalla();
               EliminarVehiculo();
               break;

          case 3:
               pantalla();
               BuscarVehiculo();
               break;

          case 4:
               pantalla();
               ReporteVehiculo();
               break;

          }//FIN switch(opcion)

     }while(opcion!=5);

     pantalla();
     cout<<"Gracias por su vista"<<endl;

} //FIN main();

void pantalla(){
     Sleep(500);
     system("cls");
}

int menu(){
     int op;

     cout<<"1: Ingresar Vehiculo"<<endl;
     cout<<"2: Ubicacion del Vehiculo"<<endl;
     cout<<"3: Retirar Vehiculo"<<endl;
     cout<<"4: Reporte de Vehiculo"<<endl;
     cout<<"5: Salir"<<endl;
     do{
          cout<<"==> ";
          cin>>op;
     }while(op<1 || op>5);

     return op;
}

int IngresarVehiculo(){

}

int EliminarVehiculo(){

}

int BuscarVehiculo(){

}

int ReporteVehiculo(){

}

int VerificarEstado(){

}




