#include <stdio.h> 
#include <string.h>

void Consecutive(int arr[], int arrLength) {
  
  // code goes here  
  int c=0;
  for(int i=0;i<arrLength-1;i++)
  {
    int diff = arr[i+1] - arr[i]-1;
    c+=diff;
    
  }
  printf("%d",c);

}

int main(void) { 
   
  // keep this function call here
int A[] = {10,15,17};
  int arrLength = sizeof(A) / sizeof(*A);
  Consecutive(A, arrLength);
  return 0;
    
}