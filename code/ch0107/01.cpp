/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 01:统计数字字符个数
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输入一行字符，统计出其中数字字符的个数。

 *
 * 输入
 *     一行字符串，总长度不超过255。
 *
 * 输出
 *     输出为1行，输出字符串里面数字字符的个数。
 *
 * 样例输入
 *     Peking University is set up at 1898.
 *
 * 样例输出
 *     4
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>

using namespace std;
 
int main(){
    string str;
    int count = 0;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}