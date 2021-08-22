#include <string>
bool solution(std::string const &str, std::string const &ending) {
  
    int size = ending.length();
    int strSize = str.length();
  
    for(int i = size; i >= 0; --i){ 
      if (ending[i] != str[strSize]){
        return false;
      }
      strSize --;
    }
    return true;
}