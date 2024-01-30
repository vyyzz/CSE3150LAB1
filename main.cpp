#include <iostream>
#include "prefix_sum.h"

int main() {
    int arr[] = {1, -1, 1, 1, -1, -1,19};

    int sum = prefix_sum(arr, sizeof(arr) / sizeof(arr[0]));

    std::cout << sum << std::endl;

    return 0;
}
