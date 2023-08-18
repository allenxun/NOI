/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 01:与指定数字相同的数的个数
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输出一个整数序列中与指定数字相同的数的个数。

 *
 * 输入
 *     输入包含三行：
        第一行为N，表示整数序列的长度(N <= 100)；
        第二行为N个整数，整数之间以一个空格分开；
        第三行包含一个整数，为指定的整数m。
 *
 * 输出
 *     输出为N个数中与m相同的数的个数。
 *
 * 样例输入
 *      3
        2 3 2
        2
 *
 * 样例输出
 *     2
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int n, m, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++){
        if (a[i] == m){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}