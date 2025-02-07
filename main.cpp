//
// Created by Michal Tarnowski on 06/02/2025.
//

#include <arrays.h>
#include <iostream>

int main() {
    const std::vector nums = {2,7,11,15};
    constexpr int target = 9;

    std::cout << "Two Sum: ";
    for (const auto& num : twoSum(nums, target))
        std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
