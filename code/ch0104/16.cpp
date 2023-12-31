/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 16:三角形判断
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定三个正整数，分别表示三条线段的长度，判断这三条线段能否构成一个三角形。
 *
 * 输入
 *     输入共一行，包含三个正整数，分别表示三条线段的长度，数与数之间以一个空格分开。
 *
 * 输出
 *     如果能构成三角形，则输出“yes” ，否则输出“no”。
 *
 * 样例输入
 *     3 4 5
 *
 * 样例输出
 *     yes
 *
 * 提示
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}