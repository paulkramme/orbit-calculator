#include<stdio.h>
#include<stdlib.h>
#include"orbit.h"

int main(int argc, char *argv[])
{
     if(argc != 5)
     {
          printf("USAGE: %s arg1 arg2 arg3 arg4\n", argv[0]);
     }
     else
     {
          orbit(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
     }
     return 0;
}
