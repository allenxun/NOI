/*
 * @Author: allen
 * @Date: 2023-08-10
 *
 * 08:字符三角形
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个字符，用它构造一个底边长5个字符，高3个字符的等腰字符三角形。<br>
 *
 * 输入
 *     输入只有一行， 包含一个字符。
 *
 * 输出
 *     该字符构成的等腰三角形，底边长5个字符，高3个字符。
 *
 * 样例输入
 *     *
 *
 * 样例输出
 *       *
 *      **
 *     ****
 *
 * 提示
 *
 */

#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    cout << "  " << c << endl;
    cout << " " << c << c << c << endl;
    cout << c << c << c << c << c << endl;

    return 0;
}