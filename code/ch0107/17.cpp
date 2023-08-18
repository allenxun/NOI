/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 17:字符串判等
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     判断两个由大小写字母和空格组成的字符串在忽略大小写，且忽略空格后是否相等。
 *
 * 输入
 *     两行，每行包含一个字符串。
 *
 * 输出
 *     若两个字符串相等，输出YES，否则输出NO。
 *
 * 样例输入
 *     a A bb BB ccc CCC
Aa BBbb CCCccc

 *
 * 样例输出
 *     YES
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
 
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    string s3, s4;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z'){
            s1[i] = 'A' + (s1[i] - 'a');
        }
        if (s1[i] != ' '){
            s3 += s1[i];
        }
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] >= 'a' && s2[i] <= 'z'){
            s2[i] = 'A' + (s2[i] - 'a');
        }
        if (s2[i] != ' '){
            s4 += s2[i];
        }
    }
    int x = s3.compare(s4);
    if (x == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}