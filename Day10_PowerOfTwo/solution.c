#include <stdbool.h>

/*
 * Problem: Power of Two (LeetCode 231)
 * Link: https://leetcode.com/problems/power-of-two/
 * Description: Given an integer n, return true if it is a power of two. 
 * Otherwise, return false.
 */
bool isPowerOfTwo(int n) {
    // A power of two must be a positive number
    if (n <= 0) {
        return false;
    }

    // Keep dividing by 2 as long as there is no remainder
    while (n % 2 == 0) {
        n = n / 2;
    }

    // If we perfectly divided down to 1, it is a power of two
    return (n == 1);
}