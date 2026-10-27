#include <stdio.h>
int main()
 {
  float balance, amount;
int choice;
printf("Enter balance: ");
scanf("%f", &balance);
printf("1. Balance Inquiry\n");
printf("2. Cash Withdrawal\n");
printf("3. Cash Deposit\n");
printf("Enter choice: ");
scanf("%d", &choice);
if (choice == 1)
{
printf("Balance = %.2f", balance);
}
else if (choice == 2)
{
printf("Enter withdrawal amount: ");
scanf("%f", &amount);
if (amount > 0 && amount <= balance) 
{
balance = balance - amount;
printf("Transaction successful\n");
printf("Remaining balance = %.2f", balance);
}
else 
{
printf("Insufficient balance");
}
}
else if (choice == 3) 
{
printf("Enter deposit amount: ");
scanf("%f", &amount);
if (amount > 0) 
{
balance = balance + amount;
printf("Deposit successful\n");
printf("Updated balance = %.2f", balance);
}
else
{
printf("Invalid deposit amount");
}
}
else 
{
 printf("Invalid option");
}
return 0;
 }
