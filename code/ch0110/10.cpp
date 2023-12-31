/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 10:单词排序
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输入一行单词序列，相邻单词之间由1个或多个空格间隔，请按照字典序输出这些单词，要求重复的单词只输出一次。（区分大小写）

 *
 * 输入
 *     一行单词序列，最少1个单词，最多100个单词，每个单词长度不超过50，单词之间用至少1个空格间隔。数据不含除字母、空格外的其他字符。
 *
 * 输出
 *     按字典序输出这些单词，重复的单词只输出一次。
 *
 * 样例输入
 *     She  wants  to go to Peking University to study  Chinese
 *
 * 样例输出
 *     Chinese
        Peking
        She
        University
        go
        study
        to
        wants
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;
 
int main(){
    string str[101];
    int n = 0;
    while (cin >> str[n])
    {
        bool flag = false;
        for (int i = 0; i < n;i++){
            if(str[i].compare(str[n])==0){
                flag = true;
                break;
            }
        }
        if(!flag)
            n++;
    }

    sort(str,str+n);

    for (int i = 0;i<n;i++){
        cout << str[i] << endl;
    }
        return 0;
}