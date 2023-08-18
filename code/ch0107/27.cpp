/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 27:单词翻转
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输入一个句子（一行），将句子中的每一个单词翻转后输出。

 *
 * 输入
 *     只有一行，为一个字符串，不超过500个字符。单词之间以空格隔开。
 *
 * 输出
 *     翻转每一个单词后的字符串，单词之间的空格需与原文一致。
 *
 * 样例输入
 *     hello world
 *
 * 样例输出
 *     olleh dlrow
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
    
    for (int i = 0;i<str.length();i++){
        string temp;
        while (str[i] != ' ' && i < str.length()){
            temp += str[i];
            i++;
        }
        for (int j = temp.length() - 1;j >= 0;j--){
            cout << temp[j];
        }
        if (i < str.length()){
            cout << " ";
        }else{
            cout << endl;
        }
    }
        return 0;
}