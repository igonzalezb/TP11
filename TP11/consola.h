
//////////////////////////////////// CONSOLA - HEADER ////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                           //
// Incluye funciones que serán usadas por distintos archivos del programa.                   //
//                                                                                           //
///////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CONSOLA_H
#define CONSOLA_H

#include "emu_ports.h"

MY_REG case_set (MY_REG);
MY_REG case_clear (MY_REG);
MY_REG case_blink (MY_REG);
MY_REG case_number_on (int,MY_REG);
MY_REG case_number_off (int,MY_REG);

void welcome (void);

void impresion (MY_REG);

long decimalToBinary(MY_REG);

#endif /* CONSOLA_H */
