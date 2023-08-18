/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 14:大小写字母互换
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     把一个字符串中所有出现的大写字母都替换成小写字母，同时把小写字母替换成大写字母。
 *
 * 输入
 *     输入一行：待互换的字符串。
 *
 * 输出
 *     输出一行：完成互换的字符串（字符串长度小于80）。
 *
 * 样例输入
 *     If so, you already have a Google Account. You can sign in on the right. 
 *
 * 样例输出
 *     iF SO, YOU ALREADY HAVE A gOOGLE aCCOUNT. yOU CAN SIGN IN ON THE RIGHT. 
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
    for (int i = 0; i < str.length(); i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = 'A' + (str[i] - 'a');
        }else if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = 'a' + (str[i] - 'A');
        }
    }
    cout << str << endl;
    return 0;
}