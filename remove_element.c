#include <stdio.h>

/*
#27: Given an integer array nums and an integer val, remove all occurrences of val in nums 
in-place. The order of the elements may be changed. Then return the number of elements 
in nums which are not equal to val.

Language Chosen: C
*/

int removeElement(int* nums, int numsSize, int val) {
    int i, j = 0;
    int counter = 0;

    if(numsSize == 0) {
        return 0;
    }

    while(i < numsSize) {
        if(nums[i] == val) {
            for(j = i; j < numsSize - 1; j++) {
                nums[j] = nums[j+1];
            }
            numsSize--;
            counter++;
        } else {
            i++;
        }
    }

    return i;
}