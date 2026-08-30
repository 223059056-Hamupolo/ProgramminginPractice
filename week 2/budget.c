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
 
  if (balance > 0)
{
    printf("The budget has a surplus.\n");
}
else if (balance < 0)
{
    printf("The budget has a deficit.\n");
}
else
{
    printf("The budget is balanced.\n");
}

 printf("Budget balance: %.2f\n", balance);
 return 0;
}