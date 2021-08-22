unsigned int countBits(unsigned long long n){
  //your code here
  int binary[32];
  int i = 0;
  int count = 0;
  //Convert to binary 
  
  while(n > 0) {
    binary[i] = n % 2;
    //When binary is 1, add counter. 
    if(binary[i] == 1){
        count++;
    }
    n = n / 2;
    i++;
  }
  
  return count;
}