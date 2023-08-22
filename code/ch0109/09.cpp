/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 09:直方图
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个非负整数数组，统计里面每一个数的出现次数。我们只统计到数组里最大的数。 假设 Fmax （Fmax < 10000）是数组里最大的数，那么我们只统计
        {0,1,2.....Fmax} 里每个数出现的次数。

 *
 * 输入
 *     第一行n是数组的大小。1 <= n <= 10000。紧接着一行是数组的n个元素。
 *
 * 输出
 *     按顺序输出每个数的出现次数，一行一个数。如果没有出现过，则输出0。对于例子中的数组，最大的数是3，因此我们只统计{0,1,2,3}的出现频数。
 *
 * 样例输入
 *     5
        1 1 2 3 1
 *
 * 样例输出
 *      0
        3
        1 
        1
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
    int max = 0;
    for (int i = 0;i<n;i++){
        cin >> a[i];
        if(a[i]>max){
            max = a[i];
        }
    }
    int b[max+1];
    for (int i = 0;i<max+1;i++){
        b[i] = 0;
    }
    for (int i = 0;i<n;i++){
        b[a[i]]++;
    }
    for (int i = 0;i<max+1;i++){
        cout << b[i] << endl;
    }
    return 0;
}