/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 03:均值
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给出一组样本数据，计算其均值。

 *
 * 输入
 *     输入有两行，第一行包含一个整数n（n小于100），代表样本容量；第二行包含n个绝对值不超过1000的浮点数，代表各个样本数据。
 *
 * 输出
 *     输出一行，包含一个浮点数，表示均值，精确到小数点后4位。
 *
 * 样例输入
 *     2
 *     1.0 3.0
 *
 * 样例输出
 *     2.0000
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    double sum = 0;
    double num;
    for(int i = 0; i < n; i++){
        cin >> num;
        sum += num;
    } 
    cout << fixed << setprecision(4) << sum / n << endl;
    return 0;
}