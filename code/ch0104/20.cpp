/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 20:求一元二次方程的根
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     利用公式x1 = (-b + sqrt(b*b-4*a*c))/(2*a), x2 = (-b - sqrt(b*b-4*a*c))/(2*a)求一元二次方程ax^2+ bx + c =0的根，其中a不等于0。
 *
 * 输入
 *     输入一行，包含三个浮点数a, b, c（它们之间以一个空格分开），分别表示方程ax^2 + bx + c =0的系数。
 *
 * 输出
 *     输出一行，表示方程的解。
 *     若b^2 = 4 * a * c,则两个实根相等，则输出形式为：x1=x2=...。
 *     若b^2 > 4 * a * c,则两个实根不等，则输出形式为：x1=...;x2 = ...，其中x1>x2。
 *     若b^2 < 4 * a * c，则有两个虚根，则输出：x1=实部+虚部i; x2=实部-虚部i，即x1的虚部系数大于等于x2的虚部系数，实部为0时不可省略。实部 = -b / (2*a), 虚部 = sqrt(4*a*c-b*b) / (2*a)
 *     所有实数部分要求精确到小数点后5位，数字、符号之间没有空格。
 *
 * 样例输入
 *     样例输入1 
 *          1.0 2.0 8.0
 *     样例输入2
 *          1 0 1
 *
 * 样例输出
 *     样例输出1
 *          x1=-1.00000+2.64575i;x2=-1.00000-2.64575i
 *     样例输出2
 *          x1=0.00000+1.00000i;x2=0.00000-1.00000i
 *
 * 提示
 *      
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, x1, x2, bb, fourac, twoa;
    cin >> a >> b >> c;
    bb = b * b;
    fourac = 4 * a * c;
    twoa = -b / (a * 2);
    if (b == 0)
        twoa = 0;
    if (bb == fourac)
    {
        cout << fixed << setprecision(5) << "x1=x2=" << twoa << endl;
    }
    else if (bb > fourac)
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << fixed << setprecision(5) << "x1=" << x1 << ";x2="
             << fixed << setprecision(5) << x2 << endl;
    }
    else
    {
        cout << fixed << setprecision(5) << "x1=" << twoa << "+"
             << fixed << setprecision(5) << sqrt(fourac - bb) / (a * 2) << "i;x2="
             << fixed << setprecision(5) << twoa << "-"
             << fixed << setprecision(5) << sqrt(fourac - bb) / (a * 2) << "i" << endl;
    }
    return 0;
}