#include <iostream>

#include "src/prime.hpp"

int main() {
  // Your driver program goes here
  Factorizer factorizer;
  std::cout<< "The prime numbers of 24 are: "<< std::endl;
  for (int n : factorizer.prime(24)) {
    std::cout << n << std::endl;
  }
  std::cout<< "The prime numbers of 35 are: "<< std::endl;
  for (int n : factorizer.prime(35)) {
    std::cout << n << std::endl;
  }
  std::cout<< "The prime numbers of 0 are: "<< std::endl;
  for (int n : factorizer.prime(0)) {
    std::cout << n << std::endl;
  }

  std::cout<< "The prime numbers of 100 are: "<< std::endl;
  for (int n : factorizer.prime(100)) {
    std::cout << n << std::endl;
  }

  std::cout<< "The prime numbers of 36 are: "<< std::endl;
  for (int n : factorizer.prime(36)) {
    std::cout << n << std::endl;
  }

  std::cout<< "The prime numbers of 12 are: "<< std::endl;
  for (int n : factorizer.prime(12)) {
    std::cout << n << std::endl;
  }
  std::cout<< "The prime numbers of 14 are: "<< std::endl;
  for (int n : factorizer.prime(14)) {
    std::cout << n << std::endl;
  }


  std::cout<< "Is 7 Prime?(1 is true, 0 is false) "<< factorizer.isPrime(7) << std::endl;
  std::cout<< "Is 1 Prime?(1 is true, 0 is false) "<< factorizer.isPrime(1) << std::endl;
  std::cout<< "Is 2 Prime?(1 is true, 0 is false) "<< factorizer.isPrime(2) << std::endl;
  std::cout<< "Is 35 Prime?(1 is true, 0 is false) "<< factorizer.isPrime(35) << std::endl;
  std::cout<< "Is 37 Prime?(1 is true, 0 is false) "<< factorizer.isPrime(37) << std::endl;

  std::cout<< "Is 37 composite?(1 is true, 0 is false) "<< factorizer.isComposite(37) << std::endl;
  std::cout<< "Is 4 composite?(1 is true, 0 is false) "<< factorizer.isComposite(4) << std::endl;

  std::cout << "36/12 : " << factorizer.reduce(36,12) << std::endl;
  std::cout << "12/12 : " << factorizer.reduce(12,12) << std::endl;
  std::cout << "12/14 : " << factorizer.reduce(12,14) << std::endl;
  std::cout << "12/37 : " << factorizer.reduce(12,37) << std::endl;
}
