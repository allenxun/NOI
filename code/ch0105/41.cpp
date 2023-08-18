/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 41:数字统计
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。
 *     比如给定范围[2, 22]，数字2在数2中出现了1次，在数12中出现1次，在数20中出现1次，在数21中出现1次，在数22中出现2次，所以数字2在该范围内一共出现了6次。

 *
 * 输入
 *     输入共 1 行，为两个正整数 L 和 R，之间用一个空格隔开。
 *
 * 输出
 *     输出共 1 行，表示数字 2 出现的次数。
 *
 * 样例输入
 *     样例 #1：
        2 22

    样例 #2：
        2 100
 *
 * 样例输出
 *     样例 #1：
        6

       样例 #2：
        20
 *
 * 提示
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;
    int count = 0;
    for (int i = l; i <= r; i++)
    {
        int temp = i;
        while (temp)
        {
            if (temp % 10 == 2)
            {
                count++;
            }
            temp /= 10;
        }
    }
    cout << count << endl;
    return 0;
}