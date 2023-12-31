/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 18:验证子串
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输入两个字符串，验证其中一个串是否为另一个串的子串。

 *
 * 输入
 *     输入两个字符串， 每个字符串占一行，长度不超过200且不含空格。
 *
 * 输出
 *     若第一个串s1是第二个串s2的子串，则输出(s1) is substring of (s2) 
        否则，若第二个串s2是第一个串s1的子串，输出(s2) is substring of (s1) 
        否则，输出 No substring。
 *
 * 样例输入
 *     abc
        dddncabca
 *
 * 样例输出
 *     abc is substring of dddncabca
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
    int x = s1.find(s2);
    int y = s2.find(s1);
    if (x != -1){
        cout << s2 << " is substring of " << s1 << endl;
    }else if (y != -1){
        cout << s1 << " is substring of " << s2 << endl;
    }else{
        cout << "No substring" << endl;
    }
    
    return 0;
}