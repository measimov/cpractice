/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* ret = (int*)malloc(2*sizeof(int));
    for (int loop = 0; loop < numsSize; loop++) {
        for (int l = loop + 1; l < numsSize; l++) {
            if (nums[loop] + nums[l] == target) {
                ret[0] = loop;
                ret[1] = l;
                *returnSize = 2;
                return ret;
            }
        }
    }
    return ret;
}
// @lc code=end

