/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 19:A*B问题
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输入两个正整数A和B，求A*B。
 *
 * 输入
 *     一行，包含两个正整数A和B，中间用单个空格隔开。1 <= A,B <= 50000。
 *
 * 输出
 *     一个整数，即A*B的值。
 *
 * 样例输入
 *     3 4
 *
 * 样例输出
 *     12
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    long long a, b;
    cin >> a >> b;
    cout << a*b << endl;
    return 0;
}