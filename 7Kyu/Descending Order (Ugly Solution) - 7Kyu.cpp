#include <inttypes.h>
#include <math.h>

uint64_t descendingOrder(uint64_t n)
{
  int i = 0;
  uint64_t power = 1; 
  int temp, count = 0, digit = 0;
  uint64_t res = 0;
  uint64_t mem = n;
  //Find the digit number available
  while(n > 0){
    n = n / 10;
    count++;
    digit++;
  }
  
  //Set a size to an array to make memory efficiency
  if(count == 1) return mem;
  int *arr = malloc(count * sizeof(int));
  //Set the numbers to the allocated array
  while(mem > 0){
    arr[i] = mem % 10;
    mem = mem / 10;
    i++;
  }
  
  printf("\n");
  
  //Compare all the numbers
  for(int i = 0; i < count; i++){
    for(int j = i + 1; j < count; j++){
      if(arr[i] < arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
 
  
  //Convert the result with pow() function
  for(int i = 0; i < count; i++){
    digit--;
    power = 1;
  
    int j = 1;
    //Calculate power here
    while(j <= digit){
      power *= 10;
      j++;
    }
    
    res = res + arr[i] * power;
    power = 1;
  }

  return res;
}