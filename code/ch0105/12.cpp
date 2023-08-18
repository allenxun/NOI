/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 12:与指定数字相同的数的个数
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输出一个整数序列中与指定数字相同的数的个数。

 *
 * 输入
 *     输入包含2行：
 *          第1行为N和m，表示整数序列的长度(N <= 100)和指定的数字， 中间用一个空格分开；
 *          第2行为N个整数，整数之间以一个空格分开。
 *
 * 输出
 *     输出为N个数中与m相同的数的个数。
 *
 * 样例输入
 *     3 2
2 3 2
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
    int N, m;
    cin >> N >> m;
    int num;
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> num;
        if(num == m){
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}