#include <string>
#include <cstring>
std::string DNAStrand(std::string dna)
{
    
    for(int i = 0; i < dna.size(); i++){
      switch(dna[i]){
          case 'A':
              dna[i] = 'T';
              break;
          case 'T':
              dna[i] = 'A';
              break;
          case 'G':
              dna[i] = 'C';
              break;
          case 'C':
              dna[i] = 'G';
              break;
      }
    }
  return dna;
}
   