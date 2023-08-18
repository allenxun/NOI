/*
 * @Author: allen
 * @Date: 2023-08-10
 *
 * 05:输出保留12位小数的浮点数
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     读入一个双精度浮点数，保留12位小数，输出这个浮点数。
 *
 * 输入
 *     只有一行，一个双精度浮点数。
 *
 * 输出
 *     也只有一行，保留12位小数的浮点数。
 *
 * 样例输入
 *     3.1415926535798932
 *
 * 样例输出
 *     3.141592653580
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    double d;
    cin >> d;
    cout << fixed << setprecision(12) << d << endl;
    return 0;
}