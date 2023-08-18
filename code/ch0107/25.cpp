/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 25:最长最短单词
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输入1行句子（不多于200个单词，每个单词长度不超过100），只包含字母、空格和逗号。
 *     单词由至少一个连续的字母构成，空格和逗号都是单词间的间隔。试输出第1个最长的单词和第1个最短单词。
 *
 * 输入
 *     一行句子。
 *
 * 输出
 *     两行输出：
        第1行，第一个最长的单词。
        第2行，第一个最短的单词。
 *
 * 样例输入
 *     I am studying Programming language C in Peking University
 *
 * 样例输出
 *     Programming
       I
 *
 * 提示
 *     如果所有单词长度相同，那么第一个单词既是最长单词也是最短单词。
 */
 
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string str;
    getline(cin, str);
    int len = str.length();
    int count = 0;
    int max = 0;
    int min = 100;
    int maxIndex = 0;
    int minIndex = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            if(count != 0){
                if(count > max){
                    max = count;
                    maxIndex = i - count;
                }
                if(count < min){
                    min = count;
                    minIndex = i - count;
                }
                count = 0;
            }
        }else{
            count++;
        }
    }
    if(count > max){
        max = count;
        maxIndex = len - count;
    }
    if(count < min){
        min = count;
        minIndex = len - count;
    }
    cout << str.substr(maxIndex, max) << endl;
    cout << str.substr(minIndex, min) << endl;
    return 0;
}