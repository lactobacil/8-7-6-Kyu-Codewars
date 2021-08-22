#include <vector> 
#include <math.h>

int square_sum(const std::vector<int>& numbers)
{
    int sum = 0;
    for(auto i: numbers){
      sum = sum + pow(i, 2);
    }
    return sum;
}

