#include <stdio.h>
 
int main()
{
  	int Number, FD, LD, Sm = 0;
 
  	printf("\n Please Enter any Number that you wish  : ");
  	scanf("%d", & Number);
  	
  	FD = Number;
  	
  	while(FD >= 10)
  	{
  		FD = FD / 10;
	}
  	
  	LD = Number % 10;
  	
  	Sm = FD + LastDigit;
	    
	printf(" \n The Sum of First Digit (%d) and Last Digit (%d) of %d =  %d", FD, LD, Number, Sm);
 
  	return 0;
}