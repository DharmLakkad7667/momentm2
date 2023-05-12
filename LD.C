#include<stdio.h>
#include<conio.h>
main()
{
     clrscr();
     float units,bill,surcharge,totalbill;
     printf("enter the electricity units consumed: ");
     scanf("%f",&units);
     if(units <= 50){
       bill = units * 0.50;
    }else if(units <= 150){
       bill = 50 * 0.50 + (units - 50) * 0.75;
    }else if (units <= 250)
       bill = 50 * 0.50 + 100 * 0.75 + (units -150) * 1.20;
    }else{
       bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    printf("enter the additional surcharge percentage: ");
    scanf("%F",&surcharge);
    totalbill = bill + (bill * surcharge / 100);
    printf("total electricity bill: %.2f\n", totalbill);
    return 0;
    getch();
}