#include <stdio.h>
 
int main()
{
  int i = 1, Num, Expo; 
  long Po = 1;
  
  printf("\n Please Enter any Number : ");
  scanf(" %d", &Num);

  printf("\n Please Enter the Exponent Vlaue: ");
  scanf(" %d", &Expo);
    
  while(i <= Expo)
  {
  	Po = Po * Num;
  	i++;
  }
  
  printf("\n The Final result of %d Power %d = %ld", Num, Expo, Po);
  
  return 0;
}