/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 14:求10000以内n的阶乘
 *
 * 总时间限制: 5000ms 内存限制: 655360kB
 *
 * 描述
 *     求10000以内n的阶乘。
 *
 * 输入
 *     只有一行输入，整数n（0<=n<=10000）。
 *
 * 输出
 *     一行，即n!的值。
 *
 * 样例输入
 *     100
 *
 * 样例输出
 *     93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000
 *
 * 提示
 *      
 */

#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring> 
using namespace std;

int a[1000001] = {1};
int ans[10000001] = {1};
char n[1001];
int en[1001];

int main() {
    int n;
    cin >> n;
    int lans = 1;
    int x = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < lans; j++){
            a[j] = a[j] * i + x;
            x = a[j] / 10;
            if (x > 0 && j == lans - 1){
                lans++;
            }
            a[j] = a[j] % 10;
        }
    }
    int flag = 0;
    for (int i = lans; i >= 0; i--){
        if (a[i] == 0 && flag == 0){
            continue;
        }
        else {
            flag = 1;
            }
        cout << a[i];
    }
    return 0;
}