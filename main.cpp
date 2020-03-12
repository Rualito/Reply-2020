#include <iostream>
#include <cstdlib>
#include "Replyer.h"


int main(void){
    Replyer testReplyer(false,"opn 7 2 java bpm");
    std::cout<<testReplyer.C<<'\n';
    vector<Replyer> test = ReadFile("input/a_solar.txt");
    for(int i=0; i<test.size(); i++)
    {
      test[i].Print();
    }
    return 0;
}
