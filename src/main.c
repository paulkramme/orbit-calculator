#include<stdio.h>
#include<stdlib.h>
#include"orbit.h"

int main(int argc, char *argv[])
{
     if(argc != 3)
     {
          printf("USAGE: %s orbital_radius mcentral\n", argv[0]);
     }
     else
     {
          orbital_speed(atoi(argv[1]), atoi(argv[2]));
     }
     return 0;
}
