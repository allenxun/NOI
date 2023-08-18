/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 20:计算2的幂
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定非负整数n，求2^n。

 *
 * 输入
 *     一个整数n。0 <= n < 31。
 *
 * 输出
 *     一个整数，即2的n次方。
 *
 * 样例输入
 *     3
 *
 * 样例输出
 *     8
 *
 * 提示
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << (1 << n) << endl;
    return 0;
}