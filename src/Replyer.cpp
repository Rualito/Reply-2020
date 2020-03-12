#include "Replyer.cpp"
#include <sstream>

Replyer::Replyer(bool isM, string line)
{
  isstream rLine(line);
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
