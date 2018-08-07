#include <iostream>

//////////////////////////////////////////
/* Program to sum and calculate Average Element in an Array */
/////////////////////////////////////////

using namespace std;

template <class T>
//Function Declaration and Definition to sum Elements in Array
T SumArray ( T Array[],int size ) {
   T sum = 0.0;
   for ( int i = 0; i < size; i++ ) {
     sum +=  Array[i];
     }
    return sum;
  } 
  
template <class V >
//Function Declaration To calculate Average Element in Array  
V AverageInArray ( V Array[] , int size ) {
     V average = SumArray( Array,size )/size;
     return average;
 }
 
 // Main function Declaration
 
 int main ( ) {
  
  int len = 0; // Declaration for size of array;
  //Prompting user for Array size 
  cout << "Enter size of Array: ";
  cin >>len;
  
  cout << "1 For Floating Piont Numbers." <<endl;
  cout << "2 For Integer NUmbers. "<< endl;
  cout << "Choice:" ;
  int ch = 0;
  cin>>ch;
  double avg = 0.0;
  switch ( ch ) {
  case 1:
  //Array Declaration
  int array[len];
  //Prompting User for array Elements
  for ( int i = 0 ; i < len; i++ ) {
  cout << " Enter " << i << " Element :";
  cin >>array[i];
  }
  //calculating and displaying Sum of Array Elements
  int sum = SumArray(array,len);
  cout << "Sum of Elements in Array = "<< sum << endl;
  //Calculating Average Element in Array
  avg = AverageInArray(array,len);
  cout << "Average Element in Array : " << avg << endl;
        break;
  /*case 2:
   //Array Declaration
  double array2[len];
  //Prompting User for array Elements
  for ( int i = 0 ; i < len; i++ ) {
  cout << " Enter " << i << " Element :";
  cin >>array2[i];
  }
  //calculating and displaying Sum of Array Elements
  sum = SumArray(array2,len);
  cout << "Sum of Elements in Array = "<< sum2 << endl;
  //Calculating Average Element in Array
  avg = AverageInArray(array,len);
  cout << "Average Element in Array : " << avg2 << endl;
     break;*/
   /*default: 
      cout << "Invalid Choice " <<endl;*/
    }
      
    return 0;
    }    
       
