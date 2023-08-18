/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 10:大整数加法
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     求两个不超过200位的非负整数的和。
 *
 * 输入
 *     有两行，每行是一个不超过200位的非负整数，可能有多余的前导0。
 *
 * 输出
 *     一行，即相加后的结果。结果里不能有多余的前导0，即如果结果是342，那么就不能输出为0342。
 *
 * 样例输入
 *     22222222222222222222
 *     33333333333333333333
 *
 * 样例输出
 *     55555555555555555555
 *
 * 提示
 *      
 */
 
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

    int start = 0;
    int end = a_len - 1;
    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    start = 0;
    end = b_len - 1;
    while (start < end)
    {
        int temp = b[start];
        b[start] = b[end];
        b[end] = temp;
        start++;
        end--;
    }

    int num = max(a_len, b_len);
    if (a_len == 0 && b_len == 0)
    {
        cout << "0" << endl;
        return 0;
        }

        for (i = 0; i < num; i++)
        {
            c[i] = a[i] + b[i] + x[i];
            if (c[i] > 9)
            {
                x[i + 1] = 1;
                c[i] -= 10;
            }
        }
        if (x[i] == 1)
        {
            c[i] = 1;
            num++;
        }
        for (int j = num - 1; j >= 0; j--)
        {
            cout << c[j];
        }
        cout << endl;
        return 0;
    }