#include <iostream>
#include <cstdlib>
#include "Replyer.h"


int main(void){
    Replyer testReplyer(false,"opn 7 2 java bpm");
    std::cout<<testReplyer.C<<'\n';
    vector<Replyer> test = ReadFile("input/a_solar.txt");
<<<<<<< HEAD
    test[0].Print();
=======
    std::cout<<test[0].C<<std::endl;
>>>>>>> dc7e8762f1e45c3dfae232a2d40ec0d441173cd3
    return 0;
}
