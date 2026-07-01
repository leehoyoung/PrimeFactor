#include "gmock/gmock.h"
#include "prime_factor.cpp"

TEST(PrimeFactor, PrimeTestOf1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}