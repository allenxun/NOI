/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 05:最大值和最小值的差
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输出一个整数序列中最大的数和最小的数的差。

 *
 * 输入
 *     第一行为M，表示整数个数，整数个数不会大于10000；
       第二行为M个整数，以空格隔开，每个整数的绝对值不会大于10000。
 *
 * 输出
 *     输出M个数中最大值和最小值的差。
 *
 * 样例输入
 *     5
        2 5 7 4 2
 *
 * 样例输出
 *     5
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    int max = a[0], min = a[0];
    for (int i = 0;i < n;i++){
        if (a[i] > max){
            max = a[i];
        }
        if (a[i] < min){
            min = a[i];
        }
    }
    cout << max - min << endl;

    return 0;
}