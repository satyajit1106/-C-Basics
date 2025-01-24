#include <stdio.h>
void main()
{
    float unit, charge, subcharge;
    printf("enter the unit");
    scanf("%f", &unit);

    if (unit >= 0 && unit <= 200)
    {
        charge = (unit * 0.8 + 100);
    }
    else if (unit > 200 && unit <= 300)
    {
        charge = (100 + 200 * 0.8 + (unit - 200) * 0.9);
    }
    else if (unit > 300)
    {
        charge = (100 + 200 * 0.8 + 100 * 0.9 + (unit - 300) * 1);
    }
    if (charge > 400)
    {
        subcharge = (0.15 * charge);
        charge = (charge + subcharge);
    }
    printf("charge is %f \n", charge);
    
}