#include <stdbool.h>

/*
 * Problem: Palindrome Number (LeetCode 9)
 * Link: https://leetcode.com/problems/palindrome-number/
 * Description: Given an integer x, return true if x is a palindrome, and false otherwise.
 */
bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) return false;

    long long reversed = 0;
    int temp = x;

    // Reverse the number mathematically
    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    return (reversed == x);
}