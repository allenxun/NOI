/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 19:字符串移位包含问题
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     对于一个字符串来说，定义一次循环移位操作为：将字符串的第一个字符移动到末尾形成新的字符串。
 *      给定两个字符串s1和s2，要求判定其中一个字符串是否是另一字符串通过若干次循环移位后的新字符串的子串。
 *      例如CDAA是由AABCD两次移位后产生的新串BCDAA的子串，而ABCD与ACBD则不能通过多次移位来得到其中一个字符串是新串的子串。
 *
 * 输入
 *     一行，包含两个字符串，中间由单个空格隔开。字符串只包含字母和数字，长度不超过30。
 *
 * 输出
 *     如果一个字符串是另一字符串通过若干次循环移位产生的新串的子串，则输出true，否则输出false。
 *
 * 样例输入
 *     AABCD CDAA
 *
 * 样例输出
 *     true
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
    cin >> s1 >> s2;
    if(s1.length()>s2.length()){
        for (int i = 0;i<s1.length();i++){
            string front = s1.substr(0, i);
            string back = s1.substr(i, s1.length() - i);
            string newstr = back + front;
            if (newstr.find(s2) != string::npos){
                cout << "true" << endl;
                return 0;
            }
        }
        cout << "false" << endl;
    }else if (s2.length()>=s1.length()){
        for (int i = 0;i<s2.length();i++){
            string front = s2.substr(0, i);
            string back = s2.substr(i, s2.length() - i);
            string newstr = back + front;
            if (newstr.find(s1) != string::npos){
                cout << "true" << endl;
                return 0;
            }
        }
        cout << "false" << endl;
    }
    return 0;
}