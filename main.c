/*
Payroll System
created bu JOHN KARIUKI
on march 9,2022
MIT License
C99
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     //variable declaration
    char name[100],kra[20];
    int hours,overtime,gross,tax,net;
    printf("Gitonga\'s factory payroll\n");
    //capture input
    printf("Enter name:");
    gets(name);
    printf("Enter KRA PIN:");
    gets(kra);
    printf("Enter Hours Worked:");
    scanf("%d",&hours);
    //computation
    if(hours > 40){
     overtime = (hours - 40) * 1.5 *1000;
     gross = overtime + (40*1000);
    }
    else{
     overtime = 0;
     gross = hours * 1000;
    }
    tax =0.3 * gross;
    net =gross - tax;
    //output
    printf("Employee Name: %s\n",name);
    printf("Gross Income: %d\n",gross);
    printf("Tax Paid: %d\n",tax);
    printf("Net Income: %s\n",net);
     return 0;
}
