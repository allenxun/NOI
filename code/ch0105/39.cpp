/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 39:与7无关的数
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     一个正整数,如果它能被7整除,或者它的十进制表示法中某一位上的数字为7,则称其为与7相关的数.现求所有小于等于n(n < 100)的与7无关的正整数的平方和.
 *
 * 输入
 *     输入为一行,正整数n(n < 100)
 *
 * 输出
 *     输出一行，包含一个整数，即小于等于n的所有与7无关的正整数的平方和。
 *
 * 样例输入
 *     21
 *
 * 样例输出
 *     2336
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int  n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 7 == 0 || i % 10 == 7 || i / 10 == 7){
            continue;
        }
        sum += i * i;
    }
    cout << sum << endl;
    return 0;
}