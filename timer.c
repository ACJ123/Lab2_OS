#include "timer.h"
#include <stdio.h>
#include <stdlib.h>

int numberOfAlarms = 0;
void increaseAlarmNumber() 
{
  numberOfAlarms += 1;
}

void signalHandler(int sigNum)// signal handler
{ 
  printf("\nTotal alarms occured: %d\n", numberOfAlarms);
  printf("The program has been running for %d seconds.\n", numberOfAlarms);
  exit(0);
}