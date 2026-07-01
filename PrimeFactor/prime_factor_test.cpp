#include "gmock/gmock.h"
#include "prime_factor.cpp"

using namespace testing;
class PrimeFixture : public Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, PrimeTestOf1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, PrimeTestOf2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, PrimeTestOf3) {
	expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, PrimeTestOf4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}