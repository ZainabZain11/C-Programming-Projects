#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int ComputerChoice, int UserChoice);

int main(){
srand(time (NULL));
printf("*** ROCK PAPER SCISSORS***\n");
int userChoice=getUserChoice();
int computerChoice=getComputerChoice();
switch(userChoice){
case 1:
printf("YOU CHOOSE ROCK!\n");
break;
case 2:
printf("YOU CHOOSE PAPER!\n");
break;
case 3:
printf("YOU CHOOSE SCISSORS!\n");
break;
}
switch(computerChoice){
case 1:
printf("computer CHOOSE ROCK!\n");
break;
case 2:
printf("computer CHOOSE PAPER!\n");
break;
case 3:
printf("computer CHOOSE SCISSORS!\n");
break;
}

checkWinner(userChoice,computerChoice);

    return 0;
}
int getComputerChoice(){
return(rand()%3)+1;
}

int getUserChoice(){
int choice =0;
do{
printf("1.ROCK\n");
printf("2.PAPER\n");
printf("3.SCISSORS\n");
printf("ENTER YOUR CHOICE:");
scanf("%d",&choice);
}
while(choice>3||choice<1);
return choice;
}

void checkWinner(int ComputerChoice, int UserChoice){
if(UserChoice==ComputerChoice){
    printf("IT'S A TIE!");
}
else if((UserChoice==1&&ComputerChoice==3)||(UserChoice==2&& ComputerChoice==1)||(UserChoice==3&&ComputerChoice==2)){
    printf("YOU  WIN!");
}
else{
printf("YOU LOSE!");
}

}