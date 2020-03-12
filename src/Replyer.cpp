#include "Replyer.h"


Replyer::Replyer(bool isM, string line)
{
  istringstream rLine(line);
  rLine>>C;
  rLine>>B;
  int nS;
  if(!isM)
  {
    rLine>>nS;
    string skill="";
    for(int i=0; i<nS; i++)
    {
      rLine>>skill;
      vS.push_back(skill);
      skill = "";
    }
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
  std::cout << "w= "<<w<<"h= "<<h << '\n';
  for( int i = 0; i < h ;i++)
  {
    getline(myfile,line);
  }
  int nD;
  getline(myfile,line);
  cout << "linha: "<<line<<endl;
  ss.str("");
  ss << line;
  ss>>nD;
  cout << "nD = "<<nD << '\n';
  for(int i=0; i<nD; i++)
  {
    getline(myfile,line);
    vRep.push_back(Replyer(false,line));
  }
  getline(myfile,line);
  ss.str("");
  ss << line;
  ss>>nD;
  for(int i=0; i<nD; i++)
  {
    getline(myfile,line);
    vRep.push_back(Replyer(true,line));
  }
  myfile.close();
  return vRep;
}

double Replyer::BonusPotential(const Replyer& r2)
{

}

double Replyer::TotalPotential(const Replyer& r2)
{

}
