/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 44:第n小的质数
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输入一个正整数n，求第n小的质数。
 *
 * 输入
 *     一个不超过10000的正整数n。
 *
 * 输出
 *     第n小的质数。
 *
 * 样例输入
 *     10
 *
 * 样例输出
 *     29
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 2; ; i++){
        bool flag = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            count++;
            if(count == n){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}