/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 03:基因相关性
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     为了获知基因序列在功能和结构上的相似性，经常需要将几条不同序列的DNA进行比对，以判断该比对的DNA是否具有相关性。 现比对两条长度相同的DNA序列。
 *     首先定义两条DNA序列相同位置的碱基为一个碱基对，如果一个碱基对中的两个碱基相同的话，则称为相同碱基对。
 *      接着计算相同碱基对占总碱基对数量的比例，如果该比例大于等于给定阈值时则判定该两条DNA序列是相关的，否则不相关。
 *
 * 输入
 *     有三行，第一行是用来判定出两条DNA序列是否相关的阈值，随后2行是两条DNA序列（长度不大于500）。
 *
 * 输出
 *     若两条DNA序列相关，则输出“yes”，否则输出“no”。
 *
 * 样例输入
 *     0.85
        ATCGCCGTAAGTAACGGTTTTAAATAGGCC
        ATCGCCGGAAGTAACGGTCTTAAATAGGCC
 *
 * 样例输出
 *     yes
 *
 * 提示
 *      
 */

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
    char str1[500], str2[500];
    float n, r;
    int count = 0;
    long len;
    cin >> n >> str1 >> str2;
    len = strlen(str1);
    for (int i = 0; i < len; i++)
    {
        if (str1[i] == str2[i])
            count++;
    }
    r = count / (float)len;
    if (r >= n){
        cout << "yes";
    }else{
        cout << "no";
    }
        
    return 0;
}