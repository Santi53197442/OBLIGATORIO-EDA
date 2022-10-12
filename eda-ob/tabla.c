#include "tabla.h"
#include "define.h"
#include <string.h>

struct nodo_tabla
{
	char *nombre;
	// VER COLUMNAS!!!! HACER TAD
};

tabla crearTabla(char *nombreTabla)
{
	tabla t = new (nodo_tabla);
	t->nombre = new char[MAX_NOMBRE];
	strcpy(t->nombre, nombreTabla);
	// VER COLUMNAS, ETC
	return t;
}

TipoRet crearCol_Tabla(tabla &t, char *nombreCol)
{
	if (t == NULL)
	{
		t = new (nodo_col);
		t->col = crearCol(nombreCol);
		t->col->sig = NULL;
		return OK;
	}
	else if (t->sig != NULL)
		while (t->sig != NULL && nombreCol != t->nombret)
			t = t->sig;
	if (nombreCol == t->nombret) // ya existe
		cout << "Imposible Crear Tabla, ya hay una creada y el sistema soporta solo una\n";
	return ERROR;
	else
		// se puede crear
		t = new (nodo_col);
	t->col = crearCol(nombreCol);
	t->col->sig = NULL;
	return OK;
}

char *nombreTabla(tabla t)
{
	return t->nombre;
}
tabla borrarTabla(tabla t, char *nombreTabla)
{

	strcmp(nombreTabla, t->nombre)
}
