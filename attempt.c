// calculation of gross salary
// author : ayush chauhan date 22-03-22
#include <stdio.h>
int main()
{ int basic_salary, dearness_allowance,rent_allowance,gross_salary;
printf("enter amount of basic salary = Rs");
scanf("%d",&basic_salary);
// calculation of allowance 
dearness_allowance=basic_salary*40/100;
printf("amount of dearness allowance=Rs.%d\n",dearness_allowance);
//calculation of allowance
rent_allowance=basic_salary*20/100;
printf("amount of dearness allowance=Rs%d\n",rent_allowance);

//calulation of total gross salary
//gross_salary= dearness_allowance+rent_allowance

 printf(" gross salary = Rs.%d\n",basic_salary+basic_salary*40/100+basic_salary*20/100);
return 0;

}