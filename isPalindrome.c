/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start


bool isPalindrome(int x){
    if (x < 0) {
        return false;
    }
    int z = x;
    int y = 0;
    for (int loop = 0; loop < 10; loop++) {
        y *= 10;
        y += x%10;
        x = x/10;
        if (x == 0) {
            break;
        }
    }
    if (z == y) {
        return true;
    }

    return false;
}


// @lc code=end

