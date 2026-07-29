#include <stdio.h>
int main ()
{
    int sideA, sideB, sideC;
    printf ("enter side A: ");
    scanf ("%d", &sideA);
    printf ("enter side B: ");
    scanf ("%d", &sideB);
    printf ("enter side C: ");
    scanf ("%d", &sideC);
    printf ("perimeter is: %d", sideA + sideB + sideC);
    return 0;
}