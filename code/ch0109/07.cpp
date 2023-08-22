/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 07:不与最大数相同的数字之和
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输出一个整数数列中不与最大数相同的数字之和。

 *
 * 输入
 *     输入分为两行：
        第一行为N(N为接下来数的个数，N = 100)；
        第二行为N个整数，数与数之间以一个空格分开，每个整数的范围是-1000,000到1000,000。
 *
 * 输出
 *     输出为N个数中除去最大数其余数字之和。
 *
 * 样例输入
 *     3
1 2 3 
 *
 * 样例输出
 *     3
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int a[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max){
            max = a[i];
        }
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != max){
            sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}