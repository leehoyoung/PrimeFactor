#include "gmock/gmock.h"
#include "prime_factor.cpp"

TEST(PrimeFactor, PrimeTestOf1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactor, PrimeTestOf2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}