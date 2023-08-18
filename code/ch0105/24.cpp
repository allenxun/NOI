/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 24:正常血压
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     监护室每小时测量一次病人的血压，若收缩压在90 - 140之间并且舒张压在60 - 90之间（包含端点值）则称之为正常，现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。

 *
 * 输入
 *     第一行为一个正整数n，n < 100
其后有n行，每行2个正整数，分别为一次测量的收缩压和舒张压，中间以一个空格分隔。
 *
 * 输出
 *     输出仅一行，血压连续正常的最长小时数。
 *
 * 样例输入
 *     4
100 80
90 50
120 60
140 90
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
    int n;
    cin >> n;
    int count = 0;
    int max = 0;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a>=90 && a<=140 && b>=60 && b<=90){
            count++;
        }else{
            if(count > max){
                max = count;
            }
            count = 0;
        }
    }
    if(count > max){
        max = count;
    }
    cout << max << endl;
    return 0;
}