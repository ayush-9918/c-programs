#include <stdio.h>
int main()
{
int a,metre,centimeters;
float feet,inches;
// distance between two cities(in km.)

printf("write distance between cities=");
scanf("%d",&a);

metre=1000*a;
printf(" length in metre=%d\n",metre);

feet=3280.8399*a;
printf(" length in feet=%f\n",feet);

inches=39370.0787*a;
printf(" length in inches=%f\n",inches);

centimeters=100000*a;
printf(" lenght in centimeters=%d\n",centimeters);

return 0;





}