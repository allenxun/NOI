/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 13:大整数的因子
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     已知正整数k满足2<=k<=9，现给出长度最大为30位的十进制非负整数c，求所有能整除c的k。
 *
 * 输入
 *     一个非负整数c，c的位数<=30。
 *
 * 输出
 *     若存在满足 c%k == 0 的k，从小到大输出所有这样的k，相邻两个数之间用单个空格隔开；若没有这样的k，则输出"none"。
 *
 * 样例输入
 *     30

 *
 * 样例输出
 *     2 3 5 6 

 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    char c[31];
    int k;
    cin >> c;
    int res[10] = {0};
    for (k = 2; k <= 9; k++)
    {
        int i, r = 0;
        for(i = 0; c[i]; i++){
            r = (r * 10 + c[i] - '0') % k;
        }
        if(r == 0){
            res[k] = k;
        }
    }
    int flag = 0;
    for (k = 2; k <= 9; k++)
    {
        if(res[k] != 0){
            cout << res[k] << " ";
            flag = 1;
        }
    }
    if(flag == 0){
        cout << "none";
    }
    return 0;
}