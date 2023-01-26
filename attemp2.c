//find area & perimeter of rectangle and area & perimeter of circle 
// author name: ayush chauhan date 22-11-22 
#include <stdio.h>
int main()
{ 

float length,breadth,radius,perimeter,area,circumference;
// perimeter and area of rectangle
printf("length of rectangle in metre.=");
scanf("%f",&length);
printf("breadth of rectangle in metre.=");
scanf("%f",&breadth);
printf("perimeter of rectangle in metre.=%f\n",perimeter=2*length+2*breadth);
printf("area of rectangle in metre square.=%f\n",area=length*breadth);
//circumference and area of circle


printf("radius of circle in metre.=");
scanf("%f",&radius);
printf(" circumference of circlein cm.%f\n",2*3.14285714*radius);
printf("area of circle in metre square.=%f\n",area=radius*radius*3.14285714);


return 0;

}