#ifndef REPLYER__H
#define REPLYER__H

#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

class Replyer{
  public:
    Replyer(bool isM,string line);
    bool isM;
    string C;
    int B;
    vector<string> vS;
    void Print();
    static vector<string> ReadFile(string name);
    double totalPotential (const Replyer& r2);
    double workerPotential (const Replyer& r2);
};

vector<vector<int>> MatrixOffice(string name);
vector<Replyer> ReadFile(string name);

#endif
