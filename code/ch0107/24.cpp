/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 24:单词的长度
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输入一行单词序列，相邻单词之间由1个或多个空格间隔，请对应地计算各个单词的长度。
 *      注意，如果有标点符号（如连字符，逗号），标点符号算作与之相连的词的一部分。没有被空格间开的符号串，都算作单词。

 *
 * 输入
 *     一行单词序列，最少1个单词，最多300个单词，单词之间用至少1个空格间隔。单词序列总长度不超过1000。
 *
 * 输出
 *     依次输出对应单词的长度，之间以逗号间隔。
 *
 * 样例输入
 *     She was born in 1990-01-02  and  from Beijing city.
 *
 * 样例输出
 *     3,3,4,2,10,3,4,7,5
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
    int count = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            if(count != 0){
                cout << count << ",";
                count = 0;
            }
        }else{
            count++;
        }
    }
    cout << count << endl;
    return 0;
}