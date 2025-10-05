#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>
#include <vector>
#include "../src/prime.hpp"

/*
 *
 *
*factorizer.primeFactors(0); // will return the Vector []
factorizer.primeFactors(1); // will return the Vector []
factorizer.primeFactors(9); // will return the Vector [3, 3]
factorizer.primeFactors(10); // will return the Vector [2, 5]
 */

TEST_CASE( "#prime" ) {
    Factorizer factorizer;
    REQUIRE(factorizer.prime(0) == std::vector<int>{});
    REQUIRE(factorizer.prime(1) == std::vector<int>{});
    REQUIRE(factorizer.prime(9) == std::vector<int>{3,3});
    REQUIRE(factorizer.prime(10) == std::vector<int>{2,5});
    REQUIRE(factorizer.prime(24) == std::vector<int>{2,2,2,3});
    REQUIRE(factorizer.prime(35) == std::vector<int>{5,7});
    REQUIRE(factorizer.prime(17) == std::vector<int>{17});
    REQUIRE(factorizer.prime(100) == std::vector<int>{2,2,5,5});
    REQUIRE(factorizer.isPrime(7) == 1);
    REQUIRE(factorizer.isPrime(1) == 1);
    REQUIRE(factorizer.isPrime(2) == 0);
    REQUIRE(factorizer.isPrime(35) == 0);
    REQUIRE(factorizer.isPrime(37) == 1);
    REQUIRE(factorizer.isComposite(37) == 0);
    REQUIRE(factorizer.isComposite(4) == 1);
    REQUIRE(factorizer.reduce(36,12) == "3");
    REQUIRE(factorizer.reduce(12,12) == "1");
    REQUIRE(factorizer.reduce(12,14) == "6/7");
    REQUIRE(factorizer.reduce(12,37) == "12/37");



}
