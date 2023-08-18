/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 13:将字符串中的小写字母转换成大写字母
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个字符串，将其中所有的小写字母转换成大写字母。

 *
 * 输入
 *     输入一行，包含一个字符串（长度不超过100，可能包含空格）。
 *
 * 输出
 *     输出转换后的字符串。
 *
 * 样例输入
 *     helloworld123Ha
 *
 * 样例输出
 *     HELLOWORLD123HA
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s1;
    getline(cin, s1);
    for (int i = 0; i < s1.length(); i++){
        if (s1[i] >= 'a' && s1[i] <= 'z'){
            s1[i] = 'A' + (s1[i] - 'a');
        }
    }
    cout << s1 << endl;
    return 0;
}