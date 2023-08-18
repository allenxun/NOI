/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 33:判断字符串是否为回文
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     <span style="font-family: 'Times New Roman';font-size: 14.6666669845581px;background-color: rgb(255, 255, 255)">输入一个字符串，输出该字符串是否回文。</span><span style="font-family: 'Times New Roman';font-size: 14.6666669845581px;background-color: rgb(255, 255, 255)">回文是指顺读和倒读都一样的字符串。</span>

 *
 * 输入
 *     输入为一行字符串（字符串中没有空白字符，字符串长度不超过100）。
 *
 * 输出
 *     如果字符串是回文，输出yes；否则，输出no。
 *
 * 样例输入
 *     abcdedcba
 *
 * 样例输出
 *     yes
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length() / 2;i++){
        if (str[i] != str[str.length() - 1 - i])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}