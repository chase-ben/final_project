#include <math.h>
#include <vector>
#include <iostream>
#include <map>
#include <cstdlib>
#include <stdbool.h>
#include <string>

class Cosine {

public:
  Cosine(std::string fileName, float threshold, char deg);

  std::map<std::string,int> fetchWordMap();
  
  std::string fetchfName();
  
  void buildInitMap(std::vector<std::string> text);

  void compCosine();

  //std::vector<int> buildCompVects(Cosine doc1, Cosine doc2);

  bool checkThresh(float cosVal);
  
private:
  std::string fName;

  //Where the maps of words to their wc goes
  std::map<std::string,int> wordMap;

  //vector computed after being compared to the other doc's wordMap
  std::vector<int> compVect;

  //threshold value determined from user input in textbase
  float level;
  
};
