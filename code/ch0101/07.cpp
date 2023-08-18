/*
 * @Author: allen
 * @Date: 2023-08-10
 *
 * 07:输出浮点数
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     读入一个双精度浮点数，分别按输出格式“%f”，“%f”保留5位小数，“%e”和“%g”的形式输出这个整数，每次在单独一行上输出。
 *
 * 输入
 *     一个双精度浮点数。
 *
 * 输出
 *     输出有四行：第一行是按“%f”输出的双精度浮点数；第二行是按“%f”保留5位小数输出的双精度浮点数；第三行是按“%e”输出的双精度浮点数；<br>第四行是按“%g”输出的双精度浮点数。
 *
 * 样例输入
 *     12.3456789
 *
 * 样例输出
 *     12.345679
 *     12.34568
 *     1.234568e+001
 *     12.3457
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    double a;
    cin >> a;
    cout << fixed << setprecision(6) << a << endl;
    cout << fixed << setprecision(5) << a << endl;
    cout << scientific << setprecision(6) << a << endl;
    cout << fixed << setprecision(4) << a << endl;
    return 0;
}