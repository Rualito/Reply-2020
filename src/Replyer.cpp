#include "Replyer.h"


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
  int m = 0, n = 0;

  myfile.open(name);
  getline(myfile,line);

  ss << line;
  ss>>m;
  ss>>n;

  for( int i = 0; i < n && getline(myfile,line);i++)
  {;}
  int nD;
  myfile>>nD;
  for(int i=0; i<nD; i++)
  {
    getline(myfile,line);
    vRep.push_back(Replyer(false,line));
  }
  myfile>>nD;
  for(int i=0; i<nD; i++)
  {
    getline(myfile,line);
    vRep.push_back(Replyer(true,line));
  }
  myfile.close();
  return vRep;
}
