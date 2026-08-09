#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
srand(time(NULL));
int guess=0;
int tries=0;
int min=1;
int max=100;
int answer=(rand()% (max-min+1))+min ;
printf("***NUMBER GUESSING GAME***\n");
do{
printf("GUESS A NUMBER BETWEEN %d-%d:",min,max);
scanf("%d",&guess);
tries++;

if(guess>answer){
     printf("IT'S TOO HIGH!\n");
  
}
else if(guess<answer){
     printf("IT'S TOO LOW!\n");
}

else{
    printf("CORRECT ANSWER\n");
}

}
while(guess!=answer);
printf("The answer is %d\n",answer);
printf("It took you %d tries",tries);




















    return 0;
}