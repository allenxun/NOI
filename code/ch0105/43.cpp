/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 43:质因数分解
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     已知正整数 n 是两个不同的质数的乘积，试求出较大的那个质数。

 *
 * 输入
 *     输入只有一行，包含一个正整数 n。
 *     对于60%的数据，6 ≤ n ≤ 1000。
 *     对于100%的数据，6 ≤ n ≤ 2*10^9。
 *
 * 输出
 *     输出只有一行，包含一个正整数 p，即较大的那个质数。
 *
 * 样例输入
 *     21
 *
 * 样例输出
 *     7
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            cout << n / i << endl;
            break;
        }
    }
    
    return 0;
}