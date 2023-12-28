#include <stdio.h>

/**
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    You can return the answer in any order.
 * 
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // int val;
    int *seen = calloc(numsSize, sizeof(int));
    int *val = calloc(2, sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];

        // Check if the complement has been seen before
        for (int j = 0; j < i; j++) {
            if (seen[j] == complement) {
                val[0] = j;  // Adjust indices to be 1-based
                val[1] = i;
                *returnSize = 2;
                return val;
            }
        }

        // Store the current number and its index in the hashmap
        seen[i] = nums[i];
    }

    *returnSize = 0; // No solution found
    return NULL;
}