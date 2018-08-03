/////////////////////////////////////////////////////////////////////
 **********PROGRAM TO COMPUTE FACTORIAL USING RECURSION*****
////////////////////////////////////////////////////////////////////

#include <stdio.h>

//Factorial function
int Fact( int n ) {
 if ( n == 0 ){
  return 0;
  }
  if ( n == 1 ) {
   return 1;
   }
   else {
   return n * Fact( n-1 );
   }
// main function
int main( void ) {
// number input declaration
int num = 0;
//prompt user for number input
printf("Enter a Number and I will Compute it Factorial: ");
scanf("%d",&num);
int ans = Fact(num);
printf("Factorial of is %d",ans );
return 0;
}
