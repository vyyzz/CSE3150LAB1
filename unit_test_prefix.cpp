#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "prefix_sum.h"

int arr1[] {1, 2, 3, 4, 5};
int arr2[] {0, 1, 0, 1, 0};
int arr3[] {10, -5, 3, 7, -2};
int arr4[] {-2, -4, -6, -8, -10};
int arr5[] {1, 0, -1, 0, 1, 0, -1, 0, 1};
int arr6[] {5, 10, 15, 20, 25};
int arr7[] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int arr8[] {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
int arr9[] {-1, 2, -3, 4, -5, 6, -7, 8, -9, 10};
int arr10[] {-5, -10, -15, -20, -25};
int arr11[] {0, 0, 1, 1, 1, 0, 0};
int arr12[] {-3, 6, -9, 12, -15, 18, -21};

TEST_CASE("prefix sum") {
    CHECK_EQ(prefix_sum(arr1, sizeof(arr1) / sizeof(arr1[0])), 15);
    CHECK_EQ(prefix_sum(arr2, sizeof(arr2) / sizeof(arr2[0])), 0);
    CHECK_EQ(prefix_sum(arr3, sizeof(arr3) / sizeof(arr3[0])), 13);
    CHECK_EQ(prefix_sum(arr4, sizeof(arr4) / sizeof(arr4[0])), -30);
    CHECK_EQ(prefix_sum(arr5, sizeof(arr5) / sizeof(arr5[0])), 2);
    CHECK_EQ(prefix_sum(arr6, sizeof(arr6) / sizeof(arr6[0])), 75);
    CHECK_EQ(prefix_sum(arr7, sizeof(arr7) / sizeof(arr7[0])), 45);
    CHECK_EQ(prefix_sum(arr8, sizeof(arr8) / sizeof(arr8[0])), 45);
    CHECK_EQ(prefix_sum(arr9, sizeof(arr9) / sizeof(arr9[0])), 5);
    CHECK_EQ(prefix_sum(arr10, sizeof(arr10) / sizeof(arr10[0])), -75);
    CHECK_EQ(prefix_sum(arr11, sizeof(arr11) / sizeof(arr11[0])), 3);
    CHECK_EQ(prefix_sum(arr12, sizeof(arr12) / sizeof(arr12[0])), -12);
}

TEST_CASE("non-negative prefix sum") {
    CHECK_FALSE(!non_neg_prefix_sum(arr1, sizeof(arr1) / sizeof(arr1[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr2, sizeof(arr2) / sizeof(arr2[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr3, sizeof(arr3) / sizeof(arr3[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr4, sizeof(arr4) / sizeof(arr4[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr5, sizeof(arr5) / sizeof(arr5[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr6, sizeof(arr6) / sizeof(arr6[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr7, sizeof(arr7) / sizeof(arr7[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr8, sizeof(arr8) / sizeof(arr8[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr9, sizeof(arr9) / sizeof(arr9[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr10, sizeof(arr10) / sizeof(arr10[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr11, sizeof(arr11) / sizeof(arr11[0])));
    CHECK_FALSE(!non_neg_prefix_sum(arr12, sizeof(arr12) / sizeof(arr12[0])));
}
