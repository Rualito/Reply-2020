#include "Replyer.h"

using namespace std;

Replyer::Replyer(bool isMx, string line)
{
  istringstream rLine(line);
  // cout << "uma linha " << line << endl;
  rLine>>C;
  rLine>>B;
  int nS;
  isM=isMx;
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

  cout << w  << "x" << h << endl;
  for( int i = 0; i < h && getline(myfile,line);i++)
  {;}
  int nD = 0;
  myfile>>nD;
  getline(myfile,line);
  for(int i=0; i<nD; i++)
  {
    getline(myfile,line);
    // cout<<line<<endl;
    vRep.push_back(Replyer(false,line));
  }
  myfile>>nD;
  getline(myfile,line);

  for(int i=0; i<nD; i++)
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
    cout << "Manager " << C  << " "<< B << endl;
  }else{
    cout << "Developer " << C << " " <<B << " ";
    for(int i = 0; i < (int)vS.size(); i++)
    {
      cout << vS[i] << " ";
    }
    cout << endl;
  }
}

double Replyer::totalPotential(const Replyer& r2)
{
  double potential = 0;
  if(C == r2.C)
  {
    potential += B*r2.B;
  }
  if((!isM) && (!r2.isM))
  {
    potential += workerPotential(r2);
  }
  return potential;
}

double Replyer::workerPotential(const Replyer& r2)
{
  return 0;
}
