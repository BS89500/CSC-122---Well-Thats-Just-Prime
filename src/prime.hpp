#include <string>
#include <vector>


class Factorizer {
public:
     std::vector<int> prime(int num);
     bool isPrime(int num);
     bool isComposite(int num);
     std::string reduce(int num, int den);
};
