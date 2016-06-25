#ifndef ORBIT_H
#define ORBIT_H

#include<math.h>

#define G 0.000000006673;

int orbital_speed(float orbital_radius, float mcentral)
{
     float v = G
     v *= mcentral;
     v /= orbital_radius;
     printf("%f\n", sqrt(v));
     return 0;
}

/*5,900,000,000,000,000,000,000*/
#endif
