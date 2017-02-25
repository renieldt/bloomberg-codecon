// takes prime numbers from a given interval by the user and sums all of prime numbers
#include <stdio.h>

int main() {

  int num, i, count, min, max, sum;
  
  printf("\nEnter an interval of numbers.");
  scan("%d %d, &min, &max);
  
  for(num = min;num<=max;num++) {
    
      count = 0;
      
      for(i=2;i<=num/2;i++) {
          if (num%i==0) {
              count++;
              break;
          }
      }
      
      if(count==0 && num!=1) {
      
          sum = sum + num;
      
      }
  }
  
  printf("%d", sum);
  
  return 0;
  
}
  
