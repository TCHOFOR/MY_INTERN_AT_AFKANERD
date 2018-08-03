#include <stdio.h>

// function to sum elements in the array
int add( int array[],int size ) {
    int sum = 0;
   for ( int i = 0; i < size; i++ ) {
    sum = sum + array[i];
}
 return sum;

}

   

int main ( ) {
  
  int n; //size of array
  printf(" Enter the number of Elements you'll input :");
  scanf("%d",&n);
  // array of size n
 int ar[n];
 for ( int j = 0; j < n; j++ ) {
 printf("Enter the Elements: ");
 scanf("%d",&ar[j]);
 }
  // returning sum of elements in function 
  int ans = add(ar,n);
  // displaying sum of elements in array
  printf(" sum of Elements in Array is : %d ", ans );
}
