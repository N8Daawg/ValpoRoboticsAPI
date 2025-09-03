/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       api.h                                                     */
/*    Author:       Nathan Beals                                              */
/*    Created:      Mon Aug 25, 2025                                          */
/*    Description:  Header file for including all elements of the API         */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#ifndef API_H
#define API_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cmath>

#include "v5.h"
#include "v5_vcs.h"

#define waitUntil(condition)                                                   \
  do {                                                                         \
    wait(5, msec);                                                             \
  } while (!(condition))

#define repeat(iterations)                                                     \
  for (int iterator = 0; iterator < iterations; iterator++)

#include "drivetrainSubsystems/drivetrainSubsystems.h"
#include "robotSubsystems/robotSubsystems.h"

#include "robot.hpp"

#endif