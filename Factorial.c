#include <stdio.h>

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

void main( ) {
int ans = Fact(4);
printf("The Answer is %d",ans );
return 0;
}
