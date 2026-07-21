#include<stdio.h>
int main(){
//WEIGHT CONVERET PROGRAM
//POUNDS = KILOGRAM * 2.20462
int choice=0;
float kilograms =0.0f;
float pounds =0.0f;
printf("WEIGHT CONVENTER CALCULATION\n");
printf("(1): Kilograms to Pounds\n");
printf("(2):Pounds to Kilograms\n");
printf("Enter you choice (1 or 2)\n");
scanf("%d",&choice);
if(choice==1){
printf("Enter the weight in kilogrgams:");
scanf("%f",&kilograms);
pounds = kilograms * 2.20462;
printf("%.2f kilograms is equal to %.2f pounds\n",kilograms,pounds);

}
else if(choice==2){
printf("Enter the weight in pounds:");
scanf("%.2f",&pounds);
kilograms = pounds / 2.20462;
printf("%.2f pounds is equal to %.2f kilograms\n",pounds,kilograms);

}
else{
    printf("Invalid chice please enter (1 or 2)\n");
}















    return 0;
}