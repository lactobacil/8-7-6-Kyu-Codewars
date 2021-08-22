#include <string>
// a bit of a different approach with Clang 11. 
std::string highAndLow(const std::string& numbers){
  
  //Different approach
  std::stringstream iss(numbers);
  int num; 
  std::vector<int> result;
  
  //append data to result 
  while (iss>>num) {
    result.push_back(num); 
  }
  //Sort the array
  std::sort( result.begin( ), result.end( ) );
  
  int size = result.size();
  
  std::string low = std::to_string(result[0]);
  std::string high = std::to_string(result[size - 1]);
  std::string output = high + " " + low;
  return output;
}