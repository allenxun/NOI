/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 06:整数奇偶排序
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定10个整数的序列，要求对其重新排序。排序要求:1.奇数在前，偶数在后；2.奇数按从大到小排序； 3.偶数按从小到大排序。
 *
 * 输入
 *     输入一行，包含10个整数，彼此以一个空格分开，每个整数的范围是大于等于0，小于等于100。
 *
 * 输出
 *     按照要求排序后输出一行，包含排序后的10个整数，数与数之间以一个空格分开。
 *
 * 样例输入
 *     4 7 3 13 11 12 0 47 34 98
 *
 * 样例输出
 *     47 13 11 7 3 0 4 12 34 98
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(int a, int b)
{
    if (a % 2 == 1 && b % 2 == 0)
        return true;
    else if (a % 2 == 0 && b % 2 == 1)
        return false;
    else
    {
        if (a % 2 == 0 && b % 2 == 0)
            return a < b;
        else
            return a > b;
    }
}

int main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 10, cmp);

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
}