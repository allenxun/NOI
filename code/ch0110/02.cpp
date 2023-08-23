/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 02:奇数单增序列
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个长度为N（不大于500）的正整数序列，请将其中的所有奇数取出，并按升序输出。

 *
 * 输入
 *     共2行：
        第1行为 N；
        第2行为 N 个正整数，其间用空格间隔。
 *
 * 输出
 *     增序输出的奇数序列，数据之间以逗号间隔。数据保证至少有一个奇数。
 *
 * 样例输入
 *     10
1 3 2 6 5 4 9 8 7 10
 *
 * 样例输出
 *     1,3,5,7,9
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int a[500], b[500], n, flag = 0, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 != 0)
        {
            b[flag] = a[i];
            flag++;
        }
    }
    sort(b, b + flag);
    for (i = 0; i < flag; i++)
    {
        cout << b[i];
        if (i != flag - 1)
            cout << ",";
    }
    return 0;
}