/*Autor: Oscar Eduardo Fletes Ixta 28/04/2022 
	Hacer un programa que pida el nombre de un archivo e imprimi su cintenido en pantalla 
	Imprimiendo caracter por caracter (buffer)
	
	Prpgrama en lenguaje c que pide el nombre de un archivo e imprime su contedo en pantalla caracter por caracter pero usando un
	BUFFER, y con uso de file*f, fopen(), fgets,EOF,fclose(f), y uso de la libreria "milibreria.h" para validar datos 
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo char, int  
		* Uso del BUFFER
		* Uso de FILE*f
		* Uso de fopen()
		* Uso de fgets(f)
		* fclose(f)
		* Uso de condiciones
		* Uso de milibreria.h para validacion de datos
		* Ciclo while
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables char y int, uso del BUFFER, condiciones, uso de la libreria milibreria.h, ciclo while, 
	uso de FILE*(f), fopen(), fgets(), fclose(f) realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como 1 variable del tipo char(Nombre del archivo),
	El programa pide el nombre de un archivo e imprime su contenido en pantalla Imprimiendo caracter por caracter pero ahora con un BUFFER.
	*/
	
#include<stdio.h>//libreria para el cuerpo de c
#include "milibreria.h"//libreria que se creo para valdiar datos
#define MAX_BUFFER 200 //uso de un buffer para acelerar los accesos al leer el archivo

int main(){
	char nombre[50], buffer[MAX_BUFFER];//variable de cadenas
	FILE *f;//variable para archivos
	int n=0;//variables de enteros 
	leers("Nombre del archivo: ",nombre,50);//Validacion de caracteres maximo 50 caracteres
	//Abrir el archivo en modo lectura 
	f=fopen(nombre,"r");//abre el archivo segun el nombre insertado
	//r==read(modo lectura)
	//verificar si se abrio correctamente el archivo
	if(f==NULL){//condicion que si f es igual a null
		printf("Error al tratar de abrir el archivo\n");//imprime mensaje
	}
	else{//de lo contrario...
		//Proceso
		//si fgets(parametros) es diferente de null
		while(fgets(buffer,MAX_BUFFER,f)!=NULL){//ciclo infinito
			printf("%s",buffer);//imprime los caracteres 
			n++;//cuenta los accesos
		}
		//Cerrar
		fclose(f);//cierra el archivo 
		printf("\n-------->Para mostrar el archivo se hicieron %d accesos\n",n);//imprime los accesos que se hicieron
	}
	
	return 0;
}
