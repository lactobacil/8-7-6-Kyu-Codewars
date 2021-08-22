#include <iostream>
#include <iomanip>

class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b){
  std::vector<int> rgb;
  std::vector<int> val;
  
  rgb.insert(rgb.end(), {r,g,b});
  std::string hex = "";
  int j = 0;
   
  for(auto i: rgb){
    
    if (i > 255) i = 255;
    if (i < 0) i = 0;
   
   double x = i / 16.000;
   std::cout << std::setprecision(3) << x << std::endl;
   int whole = x;
   int dec = (x - whole) * 16;
   std::cout << std::setprecision(3) << dec << std::endl;
   
   if(whole < 10){
       hex.insert(j, std::to_string(whole));
   }
   
       switch (whole) {
            case 10: 
                hex.insert(j, "A");
                break;
            case 11: 
                hex.insert(j, "B");
                break;
            case 12: 
                hex.insert(j, "C");
                break;
            case 13: 
                hex.insert(j, "D");
                break;
            case 14:
                hex.insert(j, "E");
                break;
            case 15:
                hex.insert(j, "F");
                break;
       }

    if(dec < 10){
       hex.insert(j+1, std::to_string(dec));
       j = j + 2;
   }
    
       switch (dec) {
            case 10: 
                hex.insert(j + 1, "A");
                j = j + 2;
                break;
            case 11: 
                hex.insert(j + 1, "B");
                j = j + 2;
                break;
            case 12: 
                hex.insert(j + 1, "C");
                j = j + 2;
                break;
            case 13: 
                hex.insert(j + 1, "D");
                j = j + 2;
                break;
            case 14:
                hex.insert(j + 1, "E");
                j = j + 2;
                break;
            case 15:
                hex.insert(j + 1, "F");
                j = j + 2;
                break;
       }
    
  }
  return hex;
  }
};