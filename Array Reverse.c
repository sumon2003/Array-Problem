/*
Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/
#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
//#include<stdlib.h>
int main(){
  int arr[3],i;
  for(i=0; i<3; i++){
    printf("element-%d:",i);
    scanf("%d",&arr[i]);
  }
  printf("The values store into the array are :\n");
  for(i=0; i<3; i++){
    printf("%d ",arr[i]);
  }
  printf("\nThe values store into the array in reverse are :\n");
  for(i=2; i>=0; i--){
    printf("%d ",arr[i]);
  }


  
  return 0;
}
