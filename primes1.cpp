//Finding all of the prime numbers between 1 and n.
//First crack at it. very inefficient.

#include <iostream>
#include <stdlib.h>

using namespace std;

bool isPrime(int num) {
  bool prime = true;
  if (num < 2)
    return false;
  for (int i = 2; i < num; ++i) {
    if (num % i == 0)
      prime = false;
  }
  return prime;
}

int main(int argc, char *argv[])
{
  if (argv[1] == NULL)
    return 0;
  const int TOP = atoi(argv[1]);
  std::cout << "Prime Numbers from 0 - " << TOP << ": ";
  for (int j = 0; j <= TOP; ++j) {
    if (isPrime(j))
      std::cout << j << " ";
  }
  std::cout << std::endl;
  return 0;
}
