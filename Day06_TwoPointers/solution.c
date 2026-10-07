/*
 * Problem: Move Zeroes (LeetCode 283)
 * Link: https://leetcode.com/problems/move-zeroes/
 * Description: Given an integer array nums, move all 0's to the end of it 
 * while maintaining the relative order of the non-zero elements.
 */
void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    // Shift all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

    // Fill the remaining spaces with zeroes
    for (int i = insertPos; i < numsSize; i++) {
        nums[i] = 0;
    }
}