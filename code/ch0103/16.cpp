/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 16:计算线段长度
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     已知线段的两个端点的坐标A，B，求线段AB的长度。
 *
 * 输入
 *     共两行。
 *     第一行是两个实数Xa，Ya，即A的坐标。
 *     第二行是两个实数Xb，Yb，即B的坐标。
 *     输入中所有实数的绝对值均不超过10000。
 *
 * 输出
 *     一个实数，即线段AB的长度，保留到小数点后3位。
 *
 * 样例输入
 *     1 1
 *     2 2
 *
 * 样例输出
 *     1.414
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main(){
    double xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    cout << fixed << setprecision(3) << sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)) << endl;
    return 0;
}