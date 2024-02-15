// simplemath.h

#include <math.h>
#include <gtest/gtest.h>



double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}


TEST(SquareRootTest, PositiveNos) { 
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
}
 
TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
}



double cubic(double d)
{
	return pow(d,3);
}

TEST(CubicTest, PositiveNos)
{
    EXPECT_EQ(1000, cubic(10));	
    EXPECT_EQ(27, cubic(3));
    EXPECT_EQ(0, cubic(0));
}

TEST(CubicTest, NegativeNos)
{
    EXPECT_EQ(-1000, cubic(-10));	
    EXPECT_EQ(-27, cubic(-3));
}
 

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}