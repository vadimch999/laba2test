#include "library.h"
#include <gtest/gtest.h>

TEST(EpicycloidConstruct, DefaultConstructor)
{
    Lab2::Epicycloid ptr1;
    ASSERT_EQ(0, ptr1.getR());
}

TEST(EpicycloidConstruct, InitConstructors)
{
    Lab2::Epicycloid epic35(3, 5);
    ASSERT_EQ(3, epic35.getR());
    ASSERT_EQ(5, epic35.getr());
}

TEST(EpicycloidMethods, Setter)
{
    Lab2::Epicycloid epic;
    epic.setR(4);
    ASSERT_EQ(4, epic.getR());
}

TEST(EpicycloidMethods, Radiuses)
{
    Lab2::Epicycloid ptr;
    ptr.setR(5.6);
    ptr.setr(2.9);
    const double error = 0.00001;
    ASSERT_NEAR(9.7, ptr.RadBorders(1.2).first_rad, error);
    ASSERT_NEAR(7.3, ptr.RadBorders(1.2).second_rad, error);
}

TEST(EpicycloidMethods, Coords)
{
    Lab2::Epicycloid ptr;
    ptr.setR(4.781);
    ptr.setr(2.845);
    const double error = 0.00001;
    ASSERT_NEAR(6.16539, ptr.pCoord(0.115, 1.48).x, error);
    ASSERT_NEAR(0.426029, ptr.pCoord(0.115, 1.48).y, error);
}

TEST(EpicycloidMethods, Square)
{
    Lab2::Epicycloid ptr;
    ptr.setR(4.226);
    ptr.setr(2.127);
    const double error = 0.00001;
    ASSERT_NEAR(0.38866, ptr.sectorSquare(0.115, 1.67), error);
}

TEST(EpicycloidMethods, radiusCurvature)
{
    Lab2::Epicycloid ptr;
    ptr.setR(4.734);
    ptr.setr(2.621);
    const double error = 0.00001;
    ASSERT_NEAR(1.7906, ptr.radCurvatue(0.137, 1.81), error);
}

TEST(EpicycloidMethods, Type)
{
    Lab2::Epicycloid ptr;
    ptr.setR(3.126);
    ptr.setr(1.123);
    ASSERT_EQ(1, ptr.epicType(6.68));
}