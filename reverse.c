/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start


int reverse(int x){
    int ret = 0;
    for (int loop = 0; loop < 32; loop++) {
        ret = ret * 10;
        ret += x%10;
        x = x/10;
        if (x == 0) {
            break;
        }
    }
    return ret;
}


// @lc code=end

