#include "tablas.h"
#include "tabla.h"
#include <stdio.h>
#include <iostream>

using namespace std;

struct nodo_tablas{
	tabla t;
	tabla ->sig;
};

tablas crearTablas(){
	return NULL;
}

TipoRet crearTabla_Tablas(tablas & ts, char * nombreTabla){
	if (ts == NULL){
		ts = new(nodo_tablas);
		ts->t = crearTabla(nombreTabla);
		return OK;
	}else{
		cout << "Imposible Crear Tabla, ya hay una creada y el sistema soporta solo una\n";
		return ERROR;
	}
}

void imprimirTablas(tablas ts){
	if (ts == NULL){
		cout << " - No hay tablas\n";
	}else{
		cout << nombreTabla(ts->t);
	}
}


void buscaryborrar(tablas ts,char *nombreTabla,char *loqueestoybuscando  ){
	while (tablas->sig !=NULL){
			strcasecmp(nombreTabla, )
		


	}
	






}







