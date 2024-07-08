#include <stdio.h> 
#include <string.h>

void PowersofTwo(int num) {
  
  // code goes here
  int d,s;
  while(num != 0)
  {
    d = num%2;
    s = num/10;
    if(d != 0 && (s%2 != 0)){
      printf("%s","false");
      return;
    }
    num = num/2;
  }
  printf("%s","true");

}

int main(void) { 
   
  // keep this function call here
  PowersofTwo(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}