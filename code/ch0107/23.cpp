/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 23:过滤多余的空格
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     一个句子中也许有多个连续空格，过滤掉多余的空格，只留下一个空格。

 *
 * 输入
 *     一行，一个字符串（长度不超过200），句子的头和尾都没有空格。
 *
 * 输出
 *     过滤之后的句子。
 *
 * 样例输入
 *     Hello      world.This is    c language.
 *
 * 样例输出
 *     Hello world.This is c language.
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string.h>

using namespace std;
 
int main(){
    string str;
    getline(cin, str);
    int len = str.length();
    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            while(str[i+1] == ' '){
                str.erase(i+1, 1);
                len--;
            }
        }
    }
    cout << str << endl;    
    return 0;
}