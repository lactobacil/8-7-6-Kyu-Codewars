using namespace std;
class Evaporator
{
  public:
  static int evaporator(double content, double evap_per_day, double threshold){
    int days = 0;
    int max = content;
    
    while(content > max * threshold/100){
      content = content - (content * evap_per_day/100);
      days++;
    }
    
    return days;
  }
 
};
