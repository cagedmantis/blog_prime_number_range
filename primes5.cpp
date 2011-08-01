#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
  if (argv[1] == NULL)
    return 0;
  const int TOP = atoi(argv[1]);
  std::cout << "Prime Numbers from 0 - " << TOP << ": ";
  
  bool* sieve = new bool[TOP+1];
  std::fill_n(sieve, TOP+1, 1);
  sieve[0] = 0;
  sieve[1] = 0;
  for (int i = 2; i <= TOP; ++i) {
    if (sieve[i] == 1) {
      std::cout << i << " ";
      for (int j = i; j <= TOP; j+=i) {
        sieve[j] = 0;
      }
    } 
  }
  delete[] sieve;
  return 0;
}


