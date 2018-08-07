/////////////////////////////////////////////
******  FACTORIAL IN C USING FOR-LOOP **** 
////////////////////////////////////////////

#include <stdio.h>

// Factorial function

int Fact( int n ) {
int result = n;
 if ( n == 0  || n < 0) {
  return 0;
  }
  if ( n == 1 ) {
   return 1;
   }
  else {
  int i = 0;
  for ( i = ( n-1 ); i != 0; i-- ){
   result = result * i;
   }
   }
}
   
   //calling main function
   
   int main ( ) { 
   
   int num = 0;
   //prompting user for number input
   printf("Enter the Number : ");
   scanf("%d",&num);
   //computing the  factiorial
   int ans = Fact(num);
   //Displaying result to user
   printf("The Fact of %d  is %d",num,ans);
   }
