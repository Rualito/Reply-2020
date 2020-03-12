#ifndef REPLYER__H
#define REPLYER__H

#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Replyer{
public:
  Replyer(bool isM,string line);
  bool isM;
  string C;
  int B;
  vector<string> vS;
  static vector<string> ReadFile(string name);
  double TotalPotential(const Replyer& r2);
  double BonusPotential(const Replyer& r2);

};

vector<Replyer> ReadFile(string name);

#endif
