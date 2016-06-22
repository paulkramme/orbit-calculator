#include<stdio.h>
#include<stdlib.h>
#include"orbit.h"
#include<string.h>

int main(int argc, char *argv[])
{
     if(argc != 2)
     {
          printf("USAGE: %s type type-specific-args\n", argv[0]);
     }
     else
     {
          if(strcmp(argv[1], "version"))
          {
               printf("HELLOWORLD!\n");
          }
          else if(strcmp(argv[1], "speed"))
          {
               orbital_speed(atoi(argv[1]), atoi(argv[2]));
          }
          else if(strcmp(argv[1], "whatever"))
          {
               printf("WHATEVER!");
          }
          else
          {
               printf("USAGE LIST");
               return 1;
          }
     }
     return 0;
}
