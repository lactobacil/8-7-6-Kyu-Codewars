#include <vector>

class SqInRect
{
  public:
  static std::vector<int> sqInRect(int lng, int wdth){
    
    std::vector<int> sq;
    int temp;
    int res;
    int temp2;
    
     if (lng == wdth) {
      return sq;
    }
    
    while (wdth > 1) {
        temp2 = lng - wdth;
        if (temp2 >= 0) {
            res = lng - wdth;
            sq.push_back(wdth);
            lng = res;
        }
        else {
            temp = lng;
            lng = wdth;
            wdth = temp; 
        }

        if (res == 1) {
            for (int i = 0; i < wdth; i++) {
                sq.push_back(1);
            }
        return sq;
        }
    }
    return sq; 
}
};