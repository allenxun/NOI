/*
 * @Author: allen
 * @Date: 2023-08-10
 *
 * 04:输出保留3位小数的浮点数
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     读入一个单精度浮点数，保留3位小数输出这个浮点数。<br>
 *
 * 输入
 *     只有一行，一个单精度浮点数。
 *
 * 输出
 *     也只有一行，读入的单精度浮点数。
 *
 * 样例输入
 *     12.34521
 *
 * 样例输出
 *     12.345
 *
 * 提示
 *      
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;
    cin >> a;
    cout << setiosflags(ios::fixed) << setprecision(3);
    cout << a << endl;
    return 0;
}