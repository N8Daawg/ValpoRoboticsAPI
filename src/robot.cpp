#include "../include/api.h"
using namespace vex;

Robot::Robot(){
    coords.x=0;
    coords.y=0;
    driveT = nullptr;
}

Robot::Robot(
    driveTrain *dt
) {
    coords.x=0;
    coords.y=0;
    driveT = dt;
}

Robot::~Robot(){}

int Robot::drive(double leftNS, double leftEW, double rightNS, double rightEW) {
    return driveT->drive(leftNS, leftEW, rightNS, rightEW);
}

/* Subsystem Controlls */
