#include "Replyer.h"

using namespace std;

Replyer::Replyer(bool isMx, string line)
{
  istringstream rLine(line);
  // cout << "uma linha " << line << endl;
  this->isM = isM;
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
  sort(vS.begin(),vS.end());

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
  }else if(!isM){
    cout << "Developer " << C << " " <<B << " ";
    for(int i = 0; i < (int)vS.size(); i++)
    {
      cout << vS[i] << " ";
    }
    cout << endl;
  }
}
vector<vector<int>> MatrixOffice(string name)
{
  ifstream myfile;
  string line;
  vector<string> filelines;
  stringstream ss;
  int w = 0, h = 0;

  myfile.open(name);
  getline(myfile,line);

  ss << line;
  ss>>w;
  ss>>h;
  vector<vector<int>> mOffice;
  vector<int> vOffice;
  for( int i = 0; i < h && getline(myfile,line);i++)
  {
    vOffice.clear();
    for(int j = 0; j < w;j++)
    {
      if(line[j] == 'M')
      {
        vOffice.push_back(0);
      }else if(line[j] == '_')
      {
        vOffice.push_back(1);
      }else if(line[j] == '#'){
        vOffice.push_back(2);
      }

    }

    mOffice.push_back(vOffice);
  }
  myfile.close();
  return mOffice;
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
  double potential =0;
  vector<string> intersection(vS.size()+r2.vS.size());
  set_intersection(vS.begin(),vS.end(),r2.vS.begin(),r2.vS.end(),intersection.begin());
  std::cout << "intersection: " << '\n';
  int nInter = 0;
  for(int i=0; i<intersection.size(); i++)
  {
    cout<<intersection[i] <<"  ";
    if (intersection[i]!="") {
      nInter++;
    }

  }
  std::cout  << '\n';
  cout<<nInter<<endl;
  return 0;
}
