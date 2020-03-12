#include <iostream>
#include <cstdlib>
#include "Replyer.h"


int main(void){
    Replyer testReplyer(false,"opn 7 2 java bpm");
    std::cout<<testReplyer.C<<'\n';
    vector<Replyer> test = ReadFile("input/a_solar.txt");
    std::cout<<test[0].C<<std::endl;
    return 0;
}
