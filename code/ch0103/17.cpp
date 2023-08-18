/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 17:计算三角形面积
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     平面上有一个三角形，它的三个顶点坐标分别为(x1, y1), (x2, y2), (x3, y3)，那么请问这个三角形的面积是多少。
 *
 * 输入
 *     输入仅一行，包括6个单精度浮点数，分别对应x1, y1, x2, y2, x3, y3。
 *
 * 输出
 *     输出也是一行，输出三角形的面积，精确到小数点后两位。
 *
 * 样例输入
 *     0 0 4 0 0 3
 *
 * 样例输出
 *     6.00
 *
 * 提示
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << fixed << setprecision(2) << (x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2) / 2 << endl;
    return 0;
}