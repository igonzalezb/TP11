
//////////////////////////////////// INPUT_CONTROL - HEADER ////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                           //
// Incluye funciones que serán usadas por distintos archivos del programa.                   //
//                                                                                           //
///////////////////////////////////////////////////////////////////////////////////////////////

#ifndef INPUT_CONTROL_H
#define INPUT_CONTROL_H

#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include "hardware.h"
#include "nonblock.h"
#include "consola.h"

#define BLINK_SPEED 200000  //microseconds
#define COOL_SPEED  200000

MY_REG validacion (char c, pinsT leds[], MY_REG port_a);

MY_REG blink (pinsT leds[], MY_REG port_a);

MY_REG cool (pinsT leds[], MY_REG port_a);

#endif /* INPUT_CONTROL_H */
