/*
Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/
#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
  int arr1[3], arr2[3];
  for(int i=0; i<3; i++){
    printf("element-%d:",i);
    scanf("%d",&arr1[i]);
  }
  printf("The elements stored in the first array are :\n");
  for(int i=0; i<3; i++){
    printf("%d ",arr1[i]);
  }
  for(int i=0; i<3; i++){
    arr2[i] = arr1[i]; //Copy arr1 to arr2
  }
  printf("\nThe elements copied into the second array are :\n");
  for(int i=0; i<3; i++){
    printf("%d ",arr2[i]);
  }


  
  return 0;
}
