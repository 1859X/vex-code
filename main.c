#pragma platform(VEX2)
#pragma competitionControl(Competition)
#include "Vex_Competition_Includes.c"

void pre_auton() {

  bStopTasksBetweenModes = true;
}

task autonomous() {


  AutonomousCodePlaceholderForTesting();
}


task usercontrol() {
  while (true) {


    UserControlCodePlaceholderForTesting();
  }
}
