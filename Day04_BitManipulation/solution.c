/*
 * Problem: Single Number (LeetCode 136)
 * Link: https://leetcode.com/problems/single-number/
 * Description: Given a non-empty array of integers nums, every element 
 * appears twice except for one. Find that single one.
 */
int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i]; // XOR operation cancels out matching pairs
    }
    return result;
}