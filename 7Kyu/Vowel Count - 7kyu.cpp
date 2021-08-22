#include <stddef.h>

size_t get_count(const char *s)
{
    //Find length of passed string of char with strlen
    int len = strlen(s);
  
    //Create an array of the vocals.
    char vowel[5] = {'a','e','i','o','u'};
    
    int count = 0;
  
    //Increment one by one and check all of them
    for(int i = 0; i < len; i++){
      for(int j = 0; j < 5; j++){
        if (s[i] == vowel[j]){
          count = count + 1;
        }
      }
    }
    
    //Returns the final value. 
    return count;
}