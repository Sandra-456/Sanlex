#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    float width, height, perimeter, volume;
length    = 20;
width     = 10.5;
height    = 19.5;
perimeter = 4*(length+width+height);
volume    = length*width*height;
printf("The perimeter of the cuboid is %.2f in centimeters\n", perimeter);
printf("The volume of the cuboid is %.2f in cubic centimeters\n", volume);
    return 0;
}
