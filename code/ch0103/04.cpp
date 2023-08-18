/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 04:带余除法
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定被除数和除数，求整数商及余数。
 *     此题中请使用默认的整除和取余运算，无需对结果进行任何特殊处理。看看程序运行结果与数学上的定义有什么不同？
 *
 * 输入
 *     一行，包含两个整数，依次为被除数和除数（除数非零），中间用一个空格隔开。
 *
 * 输出
 *     一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。
 *
 * 样例输入
 *     10 3
 *
 * 样例输出
 *     3 1
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int a, b;
    cin >> a >> b;
    cout << a/b << " " << a%b << endl;
    return 0;
}