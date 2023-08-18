/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 15:阶乘和
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     用高精度计算出S=1!+2!+3!+…+n!（n≤50）
 *     其中“!”表示阶乘，例如：5!=5*4*3*2*1。
 *     输入正整数N，输出计算结果S。
 * 
 * 输入
 *     一个正整数N。
 *
 * 输出
 *     计算结果S。
 *
 * 样例输入
 *     5
 *
 * 样例输出
 *     153
 *
 * 提示
 *
 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int a[10001] = {1};
int ans[100001] = {0};
char n[1001];
int en[1001];
int lans = 1;
int la = 1;
int x;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 1; i <= n; i++) 
    {
        memset(a, 0, sizeof(a));
        a[0] = 1;
        for (int k = 1; k <= i; k++) 
        {
            for (int j = 0; j < la; j++)
            {
                a[j] = a[j] * k + x;
                x = a[j] / 10;
                if (x > 0 && j == la - 1)
                    la++;
                a[j] = a[j] % 10;
            }
        }
        int l = 0;
        x = 0;
        while (l <= la || l <= lans)
        {
            ans[l] = ans[l] + a[l] + x;
            x = ans[l] / 10;
            if (x > 0)
                lans++;
            ans[l] = ans[l] % 10;
            l++;
        }
    }
    int flag = 0;
    for (int i = lans; i >= 0; i--)
    {
        if (ans[i] == 0 && flag == 0)
            continue;
        else
            flag = 1;
        cout << ans[i];
    }
    return 0;
}