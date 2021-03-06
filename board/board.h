/*
 / _____)             _              | |
( (____  _____ ____ _| |_ _____  ____| |__
 \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 _____) ) ____| | | || |_| ____( (___| | | |
(______/|_____)_|_|_| \__)_____)\____)_| |_|
    (C)2015 Semtech

Description: Target board general functions implementation

License: Revised BSD License, see LICENSE.TXT file include in the project

Maintainer: Miguel Luis and Gregory Cristian
*/
#ifndef __BOARD_H__
#define __BOARD_H__

#include "mbed.h"
#include "system/timer.h"
#include "debug.h"
#include "system/utilities.h"
#include "sx1276-hal.h"
#include "gps.h"

#define USE_BAND_868

//#define USE_BAND_915
extern SX1276MB1xAS Radio;
extern GPS Gps;
/*!
 * \brief Initializes the target board peripherals.
 */
void BoardInit( void );

/*!
 * \brief Measure the Battery level
 *
 * \retval value  battery level ( 0: very low, 254: fully charged )
 */
uint8_t BoardGetBatteryLevel( void );

#endif // __BOARD_H__
