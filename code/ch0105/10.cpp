/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 10:满足条件的数累加
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     将正整数 m 和 n 之间（包括 m 和 n）能被 17 整除的数累加。其中，0 < m < n < 1000。

 *
 * 输入
 *     一行，包含两个整数m和n，其间，以一个空格间隔。
 *
 * 输出
 *     输出一行，包行一个整数，表示累加的结果。
 *
 * 样例输入
 *     50 85
 *
 * 样例输出
 *     204
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int m, n;
    cin >> m >> n;
    int sum = 0;
    for(int i = m; i <= n; i++){
        if(i % 17 == 0){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}