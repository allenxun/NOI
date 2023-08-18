/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 20:删除单词后缀
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个单词，如果该单词以er、ly或者ing后缀结尾， 则删除该后缀（题目保证删除后缀后的单词长度不为0）， 否则不进行任何操作。

 *
 * 输入
 *     输入一行，包含一个单词（单词中间没有空格，每个单词最大长度为32）。
 *
 * 输出
 *     输出按照题目要求处理后的单词。
 *
 * 样例输入
 *     referer

 *
 * 样例输出
 *     refer
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
 
int main(){
    string s1;
    cin >> s1;
    int len= s1.length();
    if (s1[len-1]=='g'&&s1[len-2]=='n'&&s1[len-3]=='i'){
        s1.erase(len-3,3);
    }else if (s1[len-1]=='y'&&s1[len-2]=='l'){
        s1.erase(len-2,2);
    }else if (s1[len-1]=='r'&&s1[len-2]=='e'){
        s1.erase(len-2,2);
    }
    cout << s1 << endl;
    return 0;
}