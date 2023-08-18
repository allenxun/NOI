/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 12:计算球的体积
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     对于半径为r的球，其体积的计算公式为<span style="font-family: 'Times New Roman';font-size: 14.6666669845581px;background-color: rgb(255, 255, 255)">V=4/3*πr<sup>3</sup>，<span style="font-family: 'Times New Roman';font-size: 14.6666669845581px;background-color: rgb(255, 255, 255)">这里取π= 3.14</span>。</span><span style="font-family: 'Times New Roman';font-size: 14.6666669845581px;background-color: rgb(255, 255, 255)">现给定r，求V。</span>
 *
 * 输入
 *     输入为一个不超过100的非负实数，即球半径，类型为double。
 *
 * 输出
 *     输出一个实数，即球的体积，保留到小数点后2位。
 *
 * 样例输入
 *     4
 *
 * 样例输出
 *     267.95
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    double r;
    cin >> r;
    cout << fixed << setprecision(2) << 4.0/3*3.14*r*r*r << endl;
    return 0;
}