/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 09:整型与布尔型的转换
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     将一个整型变量的值赋给一个布尔型变量，再将这个布尔型变量的值赋给一个整型变量，得到的值是多少？
 *
 * 输入
 *     一个整型范围内的整数，即初始时整型变量的值。
 *
 * 输出
 *     一个整数，经过上述过程后得到的结果。
 *
 * 样例输入
 *     3
 *
 * 样例输出
 *     1
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int a;
    cin >> a;
    bool b = a;
    cout << b << endl;
    return 0;
}