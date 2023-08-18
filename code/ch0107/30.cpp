/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 30:字符环
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     有两个由字符构成的环。请写一个程序，计算这两个字符环上最长连续公共字符串的长度。
 *      例如，字符串“ABCEFAGADEGKABUVKLM”的首尾连在一起，构成一个环；
 *      字符串“MADJKLUVKL”的首尾连在一起，构成一个另一个环；
 *      “UVKLMA”是这两个环的一个连续公共字符串。
 *
 * 输入
 *     一行，包含两个字符串，分别对应一个字符环。这两个字符串之间用单个空格分开。字符串长度不超过255，且不包含空格等空白符。
 *
 * 输出
 *     输出一个整数，表示这两个字符环上最长公共字符串的长度。
 *
 * 样例输入
 *     ABCEFAGADEGKABUVKLM MADJKLUVKL

 *
 * 样例输出
 *     6

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
    string str1, str2;
    str1 = str.substr(0, str.find(' '));
    str2 = str.substr(str.find(' ') + 1);
    int max = 0;
    if(str1.length()>str2.length()){
        for (int i = 0;i<str1.length();i++){
            for (int j = 0; j < str2.length();j++){
                string temp1 = str1.substr(i) + str1.substr(0, i);
                string temp2 = str2.substr(j) + str2.substr(0, j);
                
                for (int k = 0;k<temp2.length();k++){
                    string temp3 = temp2.substr(k);
                    if(temp1.find(temp3)!=-1 && temp2.find(temp3)!=-1){
                        if(temp3.length()>max){
                            max = temp3.length();
                        }
                    }
                }
            }
        }
    }else{
        for (int i = 0; i < str2.length(); i++)
        {
            for (int j = 0; j < str1.length(); j++)
            {
                string temp1 = str2.substr(i) + str2.substr(0, i);
                string temp2 = str1.substr(j) + str1.substr(0, j);
                for (int k = 0; k < temp2.length(); k++)
                {
                    string temp3 = temp2.substr(k);
                    if (temp1.find(temp3) != -1 && temp2.find(temp3) != -1)
                    {
                        if (temp3.length() > max)
                        {
                            max = temp3.length();
                        }
                    }
                }
            }
        }
    }
    cout << max << endl;

    return 0;
}