/*
 * @Author: allen
 * @Date: 2023-08-10
 *
 * 03:对齐输出
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     读入三个整数，按每个整数占8个字符的宽度，右对齐输出它们。<br>
 *
 * 输入
 *     只有一行，包含三个整数，整数之间以一个空格分开。
 *
 * 输出
 *     只有一行，按照格式要求依次输出三个整数，之间以一个空格分开。
 *
 * 样例输入
 *     123456789 0 -1
 *
 * 样例输出
 *     123456789        0       -1
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << setw(8) << a << " " << setw(8) << b << " " << setw(8) << c << endl;
    return 0;
}