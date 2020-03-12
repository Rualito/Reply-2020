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
    std::cout << "Potential = "<<vReplyer[0].totalPotential(vReplyer[10]) << '\n';


  //   int N = vReplyer.size();
  //   int managerThreshold = 0;
  //
  //   int **TPij = new int[N][N];
  //
  //   for(int i=0; i<N; ++i){
	// if(vReplyer[i].isM && managerThreshold==0){
	//     managerThreshold = i;
	// }
	// for(int j=0; j<N; ++j){
	//     TPij[i][j] = vReplyer[i].totalPotential(vReplyer[j]);
	// }
  //   }
  //
  //
  //
  //
  //
  //   for(int i=0; i<N; ++i){
	// delete[] TPij;
  //   }
  //   delete[] TPij;
    return 0;
}
