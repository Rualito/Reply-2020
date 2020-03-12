#include <iostream>
#include <cstdlib>
#include "Replyer.h"


int main(void){
    Replyer testReplyer(false,"opn 7 2 java bpm");
    std::cout<<testReplyer.C<<'\n';
    vector<Replyer> vReplyer = ReadFile("input/a_solar.txt");
    for(int i=0; i<vReplyer.size(); i++)
    {
      vReplyer[i].Print();
    }
    std::cout << "Potential = "<<vReplyer[0].totalPotential(vReplyer[2]) << '\n';
    return 0;
}
