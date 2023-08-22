/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 11:连续出现的字符
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个字符串，在字符串中找到第一个连续出现至少k次的字符。
 *
 * 输入
 *     第一行包含一个正整数k，表示至少需要连续出现的次数。1 <= k <= 1000。
        第二行包含需要查找的字符串。字符串长度在1到1000之间，且不包含任何空白符。
 *
 * 输出
 *     若存在连续出现至少k次的字符，输出该字符；否则输出No。
 *
 * 样例输入
 *     3
abccc
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
    int n;
    string str;
    cin >> n;
    cin >> str;
    int len = str.length();
    int count = 1;
    char ch=str[0];

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch){
            count++;
            if(count >=n){
                cout<<ch<<endl;
                return 0;
            }
        }else{
            ch=str[i];
            count = 1;
        }
    }

    cout << "No" << endl;
    return 0;
}
