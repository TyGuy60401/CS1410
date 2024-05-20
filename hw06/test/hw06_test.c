#include <stdio.h>
#include <string.h>
#include "utest.h"
UTEST(hw06_c, part_a) {
	int ret = system("./hw06 < input.correct > tmp");
	ASSERT_TRUE(ret==0);
    system("awk '{print tolower($0)}' < tmp > hw06_test.out");
    ret = system("diff -w hw06_test.out hw06_test.correct");
	ASSERT_TRUE(ret==0);
}
UTEST(hw06_c, part_b) {
	int ret = system("./hw06 < input5.correct > tmp");
	ASSERT_TRUE(ret==0);
    system("awk '{print tolower($0)}' < tmp > hw06_test.out");
    ret = system("diff -w hw06_test.out hw06_test5.correct");
	ASSERT_TRUE(ret==0);
}
UTEST(hw06_c, first_r) {
	int ret = system("./hw06 < input2.correct > hw06_test.out");
	ASSERT_FALSE(ret==0);
}
UTEST(hw06_c, missing_values) {
	int ret = system("./hw06 < input3.correct > hw06_test.out");
	ASSERT_FALSE(ret==0);
}
UTEST(hw06_c, suffix) {
	int ret = system("./hw06 < input4.correct > hw06_test.out");
	ASSERT_FALSE(ret==0);
}
UTEST_MAIN();
