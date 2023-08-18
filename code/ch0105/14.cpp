/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 14:人口增长问题
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     我国现有x亿人口，按照每年0.1%的增长速度，n年后将有多少人？

 *
 * 输入
 *     一行，包含两个整数x和n，分别是人口基数和年数，以单个空格分隔。
 *
 * 输出
 *     输出最后的人口数，以亿为单位，保留到小数点后四位。1 <= x <= 100, 1 <= n <= 100。
 *
 * 样例输入
 *     13 10
 *
 * 样例输出
 *     13.1306
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    int x, n;
    cin >> x >> n;
    double sum = x;
    for(int i = 0; i < n; i++){
        sum *= 1.001;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}