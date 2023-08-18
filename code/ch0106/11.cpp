/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 11:大整数减法
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     求两个大的正整数相减的差。
 *
 * 输入
 *     共2行，第1行是被减数a，第2行是减数b(a > b)。每个大整数不超过200位，不会有多余的前导零。
 *
 * 输出
 *     一行，即所求的差。
 *
 * 样例输入
 *     9999999999999999999999999999999999999
       9999999999999
 *
 * 样例输出
 *     9999999999999999999999990000000000000
 *
 * 提示
 *      



#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    string str;
    string str1;
    int a[204] = {0};
    int b[204] = {0};
    int c[204] = {0};
    int x[204] = {0};
    cin >> str;
    cin >> str1;
    int i;
    int a_len = 0;
    int b_len = 0;
    int n = str.size();
    int m = str1.size();
    for (i = 0; i < n; i++)
    {
        if (str[i] != '0')
        {
            break;
        }
    }
    for (; i < n; i++)
    {
        a[a_len++] = str[i] - '0';
    }

    for (i = 0; i < m; i++)
    {
        if (str1[i] != '0')
        {
            break;
        }
    }
    for (; i < m; i++)
    {
        b[b_len++] = str1[i] - '0';
    }

    int num = max(a_len, b_len);
    if (a_len == 0 && b_len == 0)
    {
        cout << "0" << endl;
        return 0;
    }


        for (i = 0; i < num; i++)
        {
            if (a[i] - b[i] < 0)
            {
                a[i + 1]--;
                a[i] += 10;
            }
            c[i] = a[i] - b[i];
        }

        int flag = 0;
        while (1)
        {
            if (c[flag] == 0 && num >= 1)
            {
                flag++;
            }
            else
            {
                break;
            }
        }

    for (int j = flag; j <num; j++)
    {
        cout << c[j];
    }
    cout << endl;
    return 0;
}
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#define N 200
using namespace std;
int main()
{
    char a[N], b[N];
    int len_a, len_b, ans[N], t, i, j, jiewei;
    cin >> a;
    cin >> b;
    if (strcmp(a, b) == 0)
    {
        cout << 0; 
    }
    else
    {
        len_a = strlen(a);
        len_b = strlen(b);
        jiewei = 0;
        for (i = len_b - 1, j = len_a - 1; i >= 0; i--, j--)
        {

            t = a[j] - b[i] - jiewei;
            if (t > 0)
            {
                a[j] = char('0' + t);
                jiewei = 0;
            }
            else if (t < 0)
            {
                a[j] = char('0' + t + 10);
                jiewei = 1;
            }
            else
            {
                a[j] = '0';
                jiewei = 0;
            }
        }
        if (jiewei)
        {
            a[j] = char(a[j] - 1);
        }
        int flag = 1;
        for (int i = 0; i < len_a; i++)
        {
            if (a[i] == '0' && flag) 
            {
                continue;
            }
            flag = 0;
            cout << a[i];
        }
    }

    return 0;
}