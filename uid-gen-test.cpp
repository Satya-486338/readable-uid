#include "uidgen.h"

#include <string>
#include <gtest/gtest.h>

TEST(UID, UID_is_generated_within_length_limit) {
  std::string uid = uidgen();
  ASSERT_TRUE(uid.length() >0);
}
TEST(UID, UID_is_generated_withi_Organization_Preffix) {
  std::string uid = uidgen();
  std::string OrgGeneratedPreffix = uid.substr(0,9);
  std::string OrgPreffix = "1.4.444.90004";
  ASSERT_TRUE(strcmp(OrgGeneratedPreffix,OrgPreffix));
}
1.4.444.90004
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
