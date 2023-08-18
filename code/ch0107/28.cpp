/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 28:单词倒排
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     编写程序，读入一行英文(只包含字母和空格，单词间以单个空格分隔)，将所有单词的顺序倒排并输出，依然以单个空格分隔。

 *
 * 输入
 *     输入为一个字符串（字符串长度至多为100）。
 *
 * 输出
 *     输出为按要求排序后的字符串。
 *
 * 样例输入
 *     I am a student
 *
 * 样例输出
 *     student a am I
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

    int len = str.length();
    char str1[len];
    int j = 0;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        str1[j] = str[i];
        j++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        string temp;
        while (str1[i] != ' ' && i < str.length())
        {
            temp += str1[i];
            i++;
        }
        for (int j = temp.length() - 1; j >= 0; j--)
        {
            cout << temp[j];
        }
        if (i < str.length())
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}