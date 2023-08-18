/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 02:输出绝对值
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *    输入一个浮点数，输出这个浮点数的绝对值。
 *
 * 输入
 *     输入一个浮点数，其绝对值不超过10000。
 *
 * 输出
 *     输出这个浮点数的绝对值，保留到小数点后两位。
 *
 * 样例输入
 *     -3.14
 *
 * 样例输出
 *     3.14
 *
 * 提示
 *
 */

#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;
    if (n < 0)
    {
        n = -n;
    }
    else
    {
        n = n;
    }
    printf("%.2f\n", n);
    return 0;
}