#include<stdio.h>
int main(){
int F,C;

printf("VALUE OF TEMPERATURE IN FAHRENHEIT = ");
scanf("%d",&F);

C =(F-32)*5/9;
printf("TEMPERATURE IN CELSIUS = %d",C);

return 0;
}