#include <stdio.h>

int budget () {
 double revenue;
 double expenses;
 double balance;


 printf("Enter total revenue: ");
 scanf("%lf", &revenue);
 printf("Enter total expenses: ");
 scanf("%lf", &expenses);


 balance = revenue - expenses;


//Place the if statement here to check if the balance is positive or negative
 printf("Budget balance: %.2f\n", balance);
 return 0;
}