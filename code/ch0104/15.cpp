/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 15:最大数输出
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输入三个整数,输出最大的数。

 *
 * 输入
 *     输入为一行，包含三个整数，数与数之间以一个空格分开。
 *
 * 输出
 *     输出一行，包含一个整数，即最大的整数。
 *
 * 样例输入
 *     10 20 56
 *
 * 样例输出
 *     56
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b){
        if(a > c){
            cout << a << endl;
        }else{
            cout << c << endl;
        }
    }else{
        if(b > c){
            cout << b << endl;
        }else{
            cout << c << endl;
        }
    }
    return 0;
}