///////////////////////////////////////////////////////
// design-patterns-for-embedded-systems-in-c
// by : Bruce Powel Douglass - PhD
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "ch1\Sensor\include\Sensor.h"

Sensor mySensor = {
                   //Hz  //Hz //mV
                    100, 60, 5000
                  };

///////////////////// MAIN TEST //////////////////////////
int main()
{


    // CONTENTS

    printf("Chapter 1 :  What Is Embedded Programming?\n");

//Chapter 1 :  What Is Embedded Programming?

//A note about design patterns in C

// OO or Structured : Better approach OO.

/*File-based  : as CLASS
    =>file can be seen as encapsulating boundary
    => Pair of files  : *.C (src) as funtions body and private varibles/functions
                        *.H (header) as public variables and functions
*/
///////Code : CLASSICAL MODULAR PROGRAMMING : multiple *.c + *.h files ///////

/*Object-based : file base + "structs" to represent the classes (instances of which comprise the
        objects) and 'mangled functions'
        => useful when there will multiple instances
*/

    printf(" ::::::::::: TEST I Sensor ::::::::::::: \n");
    printf("Get filterFrequency : %d\n", mySensor.filterFrequency);
    printf("Get updateFrequency : %d\n", mySensor.updateFrequency);
    printf("Get value : %d\n", mySensor.value);

    printf(" ::::::::::: TEST II Sensor ::::::::::::: \n");
    printf("Get filterFrequency : %d\n", Sensor_getFilterFrequency(&mySensor));
    printf("Get updateFrequency : %d\n", Sensor_getUpdateFrequency(&mySensor));
    printf("Get value : %d\n", Sensor_getValue(&mySensor));

    printf(" ::::::::::: TEST III Sensor ::::::::::::: \n");

    Sensor * p_Sensor0, * p_Sensor1;
    p_Sensor0 = Sensor_Create();
    p_Sensor1 = Sensor_Create();
    /* do stuff with the sensors ere */
    p_Sensor0->value = 99;
    p_Sensor1->value = -1;
    printf("The current value from Sensor 0 is %d\n", Sensor_getValue(p_Sensor0));
    printf("The current value from Sensor 1 is %d\n", Sensor_getValue(p_Sensor1));
    /* done with sensors */
    Sensor_Destroy(p_Sensor0);
    Sensor_Destroy(p_Sensor1);

/*Object-oriented : This style is similar to object-based except that the
    => "struct" itself contains "function pointers" (virtual functions)
    => polymorphism and inheritance
*/

// code




//printf("Chapter 2 :  Embedded Programming with The HarmonyTM for Embedded RealTime Process\n");
//Chapter 2  : Embedded Programming with The HarmonyTM for Embedded RealTime Process

//printf("Chapter 3 :  Design Patterns for Accessing Hardware\n");
//Chapter 3  : Design Patterns for Accessing Hardware
//Chapter 4  : Design Patterns for Embedding Concurrency and Resource Management
//Chapter 5 : Design Patterns for State Machines
//Chapter 6  : Safety and Reliability Patterns
//Appendix A UML Notation




    return 0;
}