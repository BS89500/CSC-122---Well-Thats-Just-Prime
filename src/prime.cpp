#include <string>
#include <vector>
#include "prime.hpp"

std::vector<int> Factorizer::prime(int num) {
   std::vector<int> factors;
   int a;
   int b;
   if (num > 2) {
      while (true) {
         for (int i = 2; i <= 9; i++) {
            if (num % i == 0) {
               a = i;
               factors.push_back(a);
               break;
            }
            if (i == 9) {
               factors.push_back(num);
               goto end;
            }
         }
         if (num % a != 0 && num > 10) {
            for (int i = 2; i <= 9; i++) {
               if (num % i == 0) {
                  a = i;
                  factors.push_back(a);
                  break;
               }
            }
         }
         num = num / a;
         if (num < 2) {
            break;
         }
      }
      end:
      return factors;
   }
   else {
      return factors;
   }
}
bool Factorizer::isPrime(int num) {
   if (num < 2) {
      return true;
   }
   else {
     if (prime(num).size() == 1) {
        return true;
     }
      else {
         return false;
      }
   }
}
bool Factorizer::isComposite(int num) {
   if (prime(num).size() > 1 && num > 2) {
      return true;
   }
   else {
      return false;
   }
}

std::string Factorizer::reduce(int num, int den) {
   std::vector<int> numerator = prime(num);
   std::vector<int> denominator = prime(den);
   int i = 0;
   while (true) {
      if (numerator[i] == denominator[i] && !(denominator.empty() || numerator.empty())) {
         numerator.erase(numerator.begin() );
         denominator.erase(denominator.begin() );
      }
      else {
         break;
      }
   }
   int sum1 = 1;
   int sum2 = 1;
   for (int i : numerator) {
      sum1 *= i;
   }
   for (int j : denominator) {
      sum2 *= j;
   }
   if (numerator.empty() && denominator.empty()) {
      return std::to_string(1);
   }
   if (denominator.empty()) {
      return std::to_string(sum1);
   }
   if (numerator.empty()) {
      return std::to_string(sum2);
   }
   return std::to_string(sum1) + "/" + std::to_string(sum2);
}