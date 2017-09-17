#include "THDM.h"
// #include <iostream>

extern "C"{
  double thdmc_set_param_(int* key, double smpara[], double thdmpara[], double res[], int* slha);
}

double thdmc_set_param_(int* key, double smpara[], complex<double> thdmpara[], int type, double res[], int* slha){

  // std::cout << *key << std::endl;

  // for(int i=0;i<15;i++){
  //   std::cout << para[i] << std::endl;
  // }
  
  int returnval = thdmc_set_param(*key, smpara, thdmpara, type, res, *slha);

  // for(int i=0;i<10;i++){
  //   std::cout << res[i] << std::endl;
  // }

  return returnval;

}
