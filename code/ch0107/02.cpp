/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 02:找第一个只出现一次的字符
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。

 *
 * 输入
 *     一个字符串，长度小于100000。
 *
 * 输出
 *     输出第一个仅出现一次的字符，若没有则输出no。
 *
 * 样例输入
 *     abcabd
 *
 * 样例输出
 *     c
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string str;
    int count[26] = {0};
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        count[str[i] - 'a']++;
    }
    for(int i = 0; i < str.length(); i++){
        if(count[str[i] - 'a'] == 1){
            cout << str[i] << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}