#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
  if (argv[1] == NULL)
    return 0;
  const int TOP = atoi(argv[1]);
  std::cout << "Prime Numbers from 0 - " << TOP << ": ";

  const int newTop = ((TOP/2)-1+TOP%2);
  
  //cout << newTop << endl;
  bool* sieve = new bool[newTop+1];
  
  std::fill_n(sieve, newTop+1, 1);

  for (int i = 2; i <= (int)pow(newTop, 0.5); ++i) {
    if (sieve[i] == 0) {
      std::cout << i << " ";
      for (int j = i; j <= TOP; j+=i) {
        sieve[j] = 0;
      }
    } 
  }
  delete[] sieve;
  return 0;
}


