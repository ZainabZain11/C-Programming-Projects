#include <stdio.h>
void showBalance(float balance);      //رصيد المستخدم
float deposit();                              //الايداع
float withdraw(float balance);                 //السحب

int main(){

float balance=0.0f;
int choice=0;
printf("***WELCOME TO THE BANK***\n");
do{
printf("\n Select an option:\n");
printf("1.Check balance\n");
printf("2.Deposit money\n");
printf("3.Withdraw money\n");
printf("4.Exit\n");
printf("\nEnter your choice:");
scanf("%d",&choice);

switch(choice){
case 1:
showBalance(balance);
break;
case 2:
balance+=deposit();
showBalance(balance) ;   
break;
case 3:
balance-=withdraw(balance);
showBalance(balance) ;
break;
case 4:
printf("\n Thank you for visiting \n");
break;
}
}
while(choice !=4);


    return 0;
}
void showBalance(float balance){
printf("\nYour current balance is:$%.2f\n",balance);

}
float deposit(){
float amount=0.0f;
printf("\nEnter amount to deposit:$");
scanf("%f",&amount);
if(amount >0){
    return amount;
}
else{
printf("Invalid amount !\n");
return 0.0f;    
}
}
float withdraw(float balance){
float amount=0.0f;
printf("\n Enter amount to withdraw:$");
scanf("%f",&amount);
if(amount>balance){
  printf("Insufficient funds! \n");
return 0.0f;
}
else if(amount<0){
 printf("Invalid amount !\n");   
return 0.0f;
}
else{
return amount;    
}
}