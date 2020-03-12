#include "Replyer.h"

using namespace std;

Replyer::Replyer(bool isM, string line)
{
  istringstream rLine(line);
  rLine>>C;
  rLine>>B;
  int nS;
  rLine>>nS;
  string skill="";
  for(int i=0; i<nS; i++)
  {
    rLine>>skill;
    vS.push_back(skill);
    skill = "";
  }
}


vector<Replyer> ReadFile(string name)
{
  vector<Replyer> vRep;
  ifstream myfile;
  // int count = 0;
  string line;
  vector<string> filelines;
  stringstream ss;
  int w = 0, h = 0;

  myfile.open(name);
  getline(myfile,line);

  ss << line;
  ss>>w;
  ss>>h;
  cout << w  << "x" << h << endl;
  for( int i = 0; i < h && getline(myfile,line);i++)
  {;}
  int nD = 0;
  myfile>>nD;
  for(int i=0; i<=nD; i++)
  {
    getline(myfile,line);
    vRep.push_back(Replyer(false,line));
  }
  myfile>>nD;
  for(int i=0; i<=nD; i++)
  {
    getline(myfile,line);
    vRep.push_back(Replyer(true,line));
  }
  myfile.close();
  return vRep;
}


void Replyer::Print()
{
  if(isM)
  {
    // cout << "Manager " << C << B << endl;
  }else{
    // cout << "Developer " << C << B << vS << endl;
  }
}
