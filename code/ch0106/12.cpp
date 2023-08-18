/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 12:计算2的N次方
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     任意给定一个正整数N(N<=100)，计算2的n次方的值。
 *
 * 输入
 *     输入一个正整数N。
 *
 * 输出
 *     输出2的N次方的值。
 *
 * 样例输入
 *     5
 *
 * 样例输出
 *     32

 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int a[1000] = {0};
    a[0] = 1;
    int len = 1;
    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 0; j < len; j++){
            int s = a[j] * 2 + c;
            a[j] = s % 10;
            c = s / 10;
        }
        if(c > 0){
            a[len++] = c;
        }
    }
    for(int i = len - 1; i >= 0; i--){
        cout << a[i];
    }

    return 0;
}