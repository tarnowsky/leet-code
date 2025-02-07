//
// Created by Michal Tarnowski on 07/02/2025.
//

#ifndef ARRAYS_H
#define ARRAYS_H
#include <vector>

/**
@brief Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

@param nums array of integers
@param target target the two numbers need to add to

@return id's of numbers in given vector

*/
std::vector<int> twoSum(const std::vector<int>& nums, int target);

#endif //ARRAYS_H
