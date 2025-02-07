//
// Created by Michal Tarnowski on 07/02/2025.
//

#include <arrays.h>
#include <unordered_set>

std::vector<int> twoSum(const std::vector<int>& nums, const int target) {
    std::unordered_map<int, int> de_map;

    for (int i = 0; i < nums.size(); i++) {
        int complementary = target - nums[i];
        if (auto search = de_map.find(complementary); search != de_map.end())
            return {i, search->second};
        de_map.emplace(nums[i], i);
    }

    return {};
}