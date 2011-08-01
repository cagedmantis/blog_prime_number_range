#include <iostream>
#include <stdlib.h>

using namespace std;

bool isPrime(int num) {
  bool prime = true;
  if (num < 2)
    return false;
  //reduce the range of numbers being checked to half of the num.
  for (int i = 2; i < (num/2)+1; ++i) {
    //std::cout << num << " / " << i << " = " << num % i << std::endl;
    if (num % i == 0)
      return false;
  }
  return true;
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
