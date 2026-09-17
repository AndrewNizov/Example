#include "pch.h"

#include "h.h"

TEST(TriangleTest, ValidConstructorAndArea) {
    Triangle t(5.0, 4.0);
    EXPECT_DOUBLE_EQ(t.getS(), 5.0);
    EXPECT_DOUBLE_EQ(t.getH(), 4.0);
    EXPECT_DOUBLE_EQ(t.area(), 10.0);
}


TEST(TriangleTest, InvalidConstructorArgs) {
    EXPECT_THROW(Triangle t(0, 5.0), std::invalid_argument);
    EXPECT_THROW(Triangle t(-3.0, 5.0), std::invalid_argument);

    EXPECT_THROW(Triangle t(5.0, 0), std::invalid_argument);
    EXPECT_THROW(Triangle t(5.0, -1.0), std::invalid_argument);
}

TEST(TriangleTest, InvalidSetterArgs) {
    Triangle t(5.0, 4.0);

    EXPECT_THROW(t.setS(0), std::invalid_argument);
    EXPECT_THROW(t.setS(-2.5), std::invalid_argument);

    EXPECT_THROW(t.setH(0), std::invalid_argument);
    EXPECT_THROW(t.setH(-10.0), std::invalid_argument);

    EXPECT_DOUBLE_EQ(t.getS(), 5.0);
    EXPECT_DOUBLE_EQ(t.getH(), 4.0);
}