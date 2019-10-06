//funciones auxiliares del compilador
#include <stdio.h>
#include <stdlib.h>
#include "pl0.h"
#include "auxiliares.h"
#include "mensajes_de_error.h"
#include "lexico.h"


//error: por el momento todo error es fatal  
 int error(int no)
{ 
 fclose(fp);
 printf ("\n^ error %d: %s\n",no,mensaje_de_error[no]);
 exit(1); //por el momento...cualquier error es fatal!
}

//estad�sticas: por el momento solo se invocar� cu�ndo el fuente no tenga errores
//sufrir� modificaciones cu�ndo se presente el compilador completo
int estadisticas()
{
 printf("\n\n***   Estadisticas globales   ***\n");
 printf("***  No se detectaron errores ***");
 return(0);
}

//inicializar_espec
//construcci�n de la tabla de tokens para operadores y s�mboles especiales de pl0
void inicializar_espec()
{
  int i;
  for (i=0;i<=254;++i) 
  espec[40]=parena;
  espec[41]=parenc;
  espec[61]=igual;
  espec[46]=punto;
  espec[59]=puntoycoma;
}
