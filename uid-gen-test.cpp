#include "uidgen.h"

#include <string>
#include <gtest/gtest.h>

TEST(UID, UID_is_generated_within_length_limit) {
  std::string uid = uidgen();
  ASSERT_TRUE(uid.length() >0);
}
TEST(UID, UID_is_generated_withi_Organization_suffix) {
  std::string uid = uidgen();
  std::string OrgSuffix = uid.substr(0,9);
  ASSERT_TRUE(strcmp(OrgSuffix,"1.4.444.90004"));
}
1.4.444.90004
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
