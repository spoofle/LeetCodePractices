import java.util.Arrays;

/*
 * Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

    The overall run time complexity should be O(log (m+n)).
 */

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int totalLength = nums1.length + nums2.length;
        int[] answer = new int[totalLength];
        for(int i = 0; i < nums1.length; i++)
        {
            answer[i] = nums1[i];
        }

        for(int i = 0; i < nums2.length; i++)
        {
            answer[i+nums1.length] = nums2[i];
        }

        Arrays.sort(answer);
        int medPos = answer.length/2;

        if(answer.length%2==0)
        {
            return ((double)answer[medPos-1]+(double)answer[medPos])/2.0;
        }
        return (double)answer[medPos];

    }
}