/*
给定一个正整数，返回它在 Excel 表中相对应的列名称。
例如，

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
    ...
示例 1:
输入: 1
输出: "A"
示例 2:
输入: 28
输出: "AB"
示例 3:
输入: 701
输出: "ZY"
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/excel-sheet-column-title
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


class Solution {
public:
    string convertToTitle(int n) {
        string res;
        while(n>0)//n最小为1
        {
            if(n%26==0)
            {
                res.insert(res.begin(),'Z');
                n=n/26-1;//因为当前位用了一个26 
            }
            else
            {
                res.insert(res.begin(),n%26-1+'A');
                n/=26;//去掉当前位
            }
        }
        return res;
    }
};
