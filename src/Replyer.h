#ifndef REPLYER__H
#define REPLYER__H

#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
class Replyer{
public:
  Replyer(bool isM,string line);
  bool isM;
  string C;
  int B;
  vector<string> vS;
  static vector<string> ReadFile(string name);

};
#endif
