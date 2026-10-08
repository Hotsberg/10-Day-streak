/*
 * Problem: Fibonacci Number (LeetCode 509)
 * Link: https://leetcode.com/problems/fibonacci-number/
 * Description: The Fibonacci numbers, commonly denoted F(n) form a sequence, 
 * such that each number is the sum of the two preceding ones, starting from 0 and 1.
 */
int fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}