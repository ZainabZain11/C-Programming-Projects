#include <stdio.h>
#include <math.h>
int main(){

double radius=0.0;
double area=0.0;
double surface_area=0.0;
double volume=0.0;
const double PI=3.141592654;
printf("Enter the radius :");
scanf("%lf",&radius);
area= PI* pow(radius,2);
surface_area =PI *4*pow(radius,2);
volume=(4.0/3.0)*PI*pow(radius,3);
 
printf("Area:%.2lf\n",area);
printf("Surface area:%.2lf\n",surface_area);
printf("Volume:%.2lf\n",volume);
















    return 0;
}