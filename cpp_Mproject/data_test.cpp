#include"unemp.h"
#include"rural.h"
#include"urban.h"
#include"data.h"
#include <gtest/gtest.h>
namespace {
class DataTest : public ::testing::Test {

protected:
  void SetUp()
  {
    unemp.add("Andhra Pradesh",15.6,9.3,13.4,20.4,26.9,22.8);
    unemp.add("Karnataka",14.4,16.8,14.9,16.5,18.9,17.1);
    unemp.add("Telangana",20.6,21.1,20.8,26.2,29.2,27);
    unemp.add("Maharashtra",12.1,12.3,12.1,17,24.6,18.9);
    unemp.add("Kerala",20.5,61.7,32.5,27.4,65.2,41.5);
  }
  void TearDown() {}
  Data unemp;
};
TEST_F(DataTest,AddTest) {
  unemp.add("Delhi",10.6,10,10.5,22.4,23.6,22.5);
  EXPECT_EQ(6, unemp.countAll());
}
TEST_F(DataTest, AverageTest) {
  double avg = unemp.findAverage();
  EXPECT_EQ(44.2, avg);
}
TEST_F(DataTest, MaxTest) {
  double maxbal = unemp.findMax();
  EXPECT_EQ(74, maxbal);
}
TEST_F(DataTest, CountTest) {
  EXPECT_EQ(5, unemp.countAll());
}
/*
TEST(UnEmp,test1)
{
    UnEmp un1("India",17.4,13.6,16.6,18.7,27.2,20.6);
    EXPECT_EQ("India",un1.state());
    EXPECT_EQ(37,un1.person_rate());
    EXPECT_EQ(36,un1.male_rate());
    EXPECT_EQ(41,un1.female_rate());
}
TEST(Rural,test2)
{
    Rural r1("Andhra Pradesh",15.6,9.3,13.4);
    EXPECT_EQ("Andhra Pradesh",r1.state());
    EXPECT_EQ(13,r1.person_rate());
    EXPECT_EQ(16,r1.male_rate());
    EXPECT_EQ(9,r1.female_rate());
    EXPECT_EQ(13,r1.average());
}
TEST(Urban,test3)
{
    Urban u1("Karnataka",16.5,18.9,17.1,0);
    EXPECT_EQ("Karnataka",u1.state());
    EXPECT_EQ(17,u1.person_rate());
    EXPECT_EQ(17,u1.male_rate());
    EXPECT_EQ(19,u1.female_rate());
    EXPECT_EQ(18,u1.average());
}
*/
int main(int argc, char **argv)
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
}
