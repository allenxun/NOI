/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 13:反向输出一个三位数
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     将一个三位数反向输出。
 *
 * 输入
 *     一个三位数n。
 *
 * 输出
 *     反向输出n。
 *
 * 样例输入
 *     100
 *
 * 样例输出
 *     001
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
    cout << n % 10 << n / 10 % 10 << n / 100 << endl;
    return 0;
}