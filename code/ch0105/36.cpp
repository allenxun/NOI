/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 36:计算多项式的值
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     假定多项式的形式为x^n+x^n-1+…+x^2+x+1，请计算给定单精度浮点数x和正整数n值的情况下这个多项式的值。

 *
 * 输入
 *     输入仅一行，包括x和n，用单个空格隔开。x在float范围内，n <= 1000000。
 *
 * 输出
 *     输出一个实数，即多项式的值，精确到小数点后两位。保证最终结果在float范围内。
 *
 * 样例输入
 *     2.0 4
 *
 * 样例输出
 *     31.00
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    int n;
    float x;
    cin >> x >> n;
    float sum = 0;
    float temp = 1;
    for(int i = 0; i <= n; i++){
        sum += temp;
        temp *= x;
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}