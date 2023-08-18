/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 01:判断数正负
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个整数N，判断其正负。

 *
 * 输入
 *     一个整数N(-10^9 <= N <= 10^9)
 *
 * 输出
 *     如果N > 0, 输出positive;
 *     如果N = 0, 输出zero;
 *     如果N < 0, 输出negative
 *
 * 样例输入
 *     1
 *
 * 样例输出
 *     positive
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    if(n > 0){
        cout << "positive" << endl;
    }else if(n == 0){
        cout << "zero" << endl;
    }else{
        cout << "negative" << endl;
    }
    return 0;
}