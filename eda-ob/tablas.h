#ifndef TABLAS_H
#define TABLAS_H

#include "define.h"

typedef struct nodo_tablas *tablas;

tablas crearTablas();
// Crea el conjunto de tablas vacio.

TipoRet crearTabla_Tablas(tablas &ts, char *nombreTabla);
// Crea la tabla de nombre "nombreTabla" en tablas.

void imprimirTablas(tablas ts);
// Imprime las tablas de manera ordenada.

tablas buscaryborrar();
// Busca el nombre de una tabla en un conjunto de tablas
//La borra si esta esta pertenece a el conjunto

#endif