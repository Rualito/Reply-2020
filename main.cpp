#include <iostream>
#include <cstdlib>
#include "Replyer.h"


int main(void){
    Replyer testReplyer(false,"opn 7 2 java bpm");
    std::cout<<testReplyer.C<<'\n';
    vector<Replyer> test = ReadFile("input/a_solar.txt");
    test[0].Print();

    std::cout<<"c= "<<test[0].C<<"b= "<<test[0].B<<std::endl;
    return 0;
}
